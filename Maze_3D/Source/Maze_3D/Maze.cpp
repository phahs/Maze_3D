// Fill out your copyright notice in the Description page of Project Settings.

#include "Maze.h"


// Sets default values
AMaze::AMaze()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UClass> TileClassFinder(TEXT("/Game/Blueprints/Objects/Tile.Tile_C"));
	static ConstructorHelpers::FObjectFinder<UClass> ElevatorClassFinder(TEXT("/Game/Blueprints/Objects/Elevator.Elevator_C"));

	if (TileClassFinder.Object)
	{
		TileBP = TileClassFinder.Object;
	}

	if (ElevatorClassFinder.Object)
	{
		ElevatorBP = ElevatorClassFinder.Object;
	}
}

// Called when the game starts or when spawned
void AMaze::BeginPlay()
{
	Super::BeginPlay();
	
	pWorld = GetWorld();

	GetMazeInfo();

	BuildMaze();
}

// Called every frame
void AMaze::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMaze::GetMazeInfo()
{
	AMaze_3D_GameMode* pGameMode = Cast<AMaze_3D_GameMode>(pWorld->GetAuthGameMode());

	MazeLevel = pGameMode->GetMazeLevel();
	MazeSize = pGameMode->GetMazeSize();
}

void AMaze::BuildMaze()
{
	// Reserve space for the entire maze
	SetUpMap();

	int32 x = 0, y = 0, z = 0, direction;

	direction = CreateExitTile(x, y, z);

	
	// Main loop for generating the maze
	while (stack.Num() > 0)
	{
		// Begin creating tiles in maze
		if (direction >= 0 && direction <= 5)
		{
			CreateTile(x, y, z);
			RemoveWall(direction);
			direction = FindNextLocation(x, y, z);
		}
		else // Determine if the tile should either: place elevator, create a loop, or nothing
		{
			// Probability weights for the three options
			float doNothing = 40;
			float doElevator = 15;
			float doLoop = 5;

			ModifyProbability(doNothing, doElevator, doLoop);

			float roll = FMath::RandRange((float)0, (float)1);
			if (roll < doNothing)
			{
				// Backtrack to a tile that we can do someting with
				direction = BackTrack(x, y, z);
			}
			else if (roll >= doNothing && roll < doElevator)
			{
				if (MazeSize.Z > 1)
				{
					// Going up or down
					TArray<int32> upOrDown = { 0, 5 };
					for (int32 i = 0; i < upOrDown.Num(); i++)
					{
						int32 rand = FMath::RandRange(i, upOrDown.Num() - 1);
						int32 currentX, currentY, currentZ;
						TArray<int32> walls = { 1, 2, 3, 4 };
						int32 wallCheck;
						TWeakObjectPtr<ATile> currentTile = stack.Pop();
						currentTile->GetCoordinates(currentX, currentY, currentZ);
						stack.Push(currentTile);
						// Is the direction valid?
						if (ValidTile(upOrDown[rand], x, y, z))
						{
							// Going up
							if (upOrDown[rand] == 5)
							{
								for (int k = 0; k < walls.Num(); k++)
								{
									wallCheck = FMath::RandRange(k, walls.Num() - 1);
									if (walls[wallCheck] != direction && currentTile->CheckWall(walls[wallCheck]))
									{
										// Create elevator
										CreateElevator(currentX, currentY, currentZ, walls[wallCheck]);
										currentTile->AddElevator(walls[wallCheck]);
										break;
									}
									walls[wallCheck] = walls[k];
								}
							}
							currentTile->RemoveWallBool(upOrDown[rand]);
							CreateTile(x, y, z);
							RemoveWall(upOrDown[rand]);
							currentTile = stack.Pop();
							currentTile->GetCoordinates(currentX, currentY, currentZ);
							stack.Push(currentTile);
							direction = FindNextLocation(x, y, z);
							// Going down
							if (upOrDown[rand] == 0)
							{
								for (int k = 0; k < walls.Num(); k++)
								{
									wallCheck = FMath::RandRange(k, walls.Num() - 1);
									if (walls[wallCheck] != direction && currentTile->CheckWall(walls[wallCheck]))
									{
										// Create elevator
										CreateElevator(currentX, currentY, currentZ, walls[wallCheck]);
										currentTile->AddElevator(walls[wallCheck]);
										break;
									}
									walls[wallCheck] = walls[k];
								}
							}
						}
					}
				}
				else
				{
					// Backtrack because there are no other floors
					direction = BackTrack(x, y, z);
				}
			}
			else if (roll >= doElevator && roll < doLoop)
			{
				/// Decided to not include loops in this maze, due to its size. Going from 4x4 to 8x8, in my opinion, doesn't leave enough space to have loops and keep their effectiveness.
				// Create a loop between this tile and one of the 4 adjacent tiles
				// Making sure that the xyz values are for the Tile on top of the stack
				/*
				int32 index = (x + (y * MazeSize.X) + (MazeSize.X * MazeSize.Y * z));
				TWeakObjectPtr<ATile> currentTile = stack.Pop();

				if (map[index] == currentTile)
				{
					int32 rand;
					TArray<int32> breakWallDirection = { 1, 2, 3, 4 };

					int32 tempX = x;
					int32 tempY = y;
					int32 tempZ = z;

					for (int32 k = 0; k < breakWallDirection.Num(); k++)
					{
						bool madeLoop = false;
						rand = FMath::RandRange(k, breakWallDirection.Num() - 1);

						if (ValidLoop(breakWallDirection[rand], tempX, tempY, tempZ))
						{
							// Remove the wall in the selected direction
							if (map[index]->CheckWall(breakWallDirection[rand]))
							{
								GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, FString::FromInt(breakWallDirection[rand]));
								map[index]->RemoveWall(breakWallDirection[rand]);
								RemoveWall(breakWallDirection[rand], tempX, tempY, tempZ);
								madeLoop = true;
							}
						}
						if (!madeLoop)
						{
							breakWallDirection[rand] = breakWallDirection[k];
						}
						else
						{
							break;
						}
					}
					stack.Push(currentTile);
				}
				else
				{
					stack.Push(currentTile);
					GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Something has gone terribly wrong"));
					UE_LOG(LogTemp, Warning, TEXT("Something has gone terribly wrong"));
				}*/

				// Once it is determined whether or not a loop can be created, time to backtrack
				direction = BackTrack(x, y, z);
			}
		}
	}
	ElevatorCheck();

	SelectPlayerStartLocation();
}

void AMaze::SetUpMap()
{
	MaxIndex = MazeSize.X * MazeSize.Y * MazeSize.Z;
	map.Init(nullptr, MaxIndex);
	eMap.Init(nullptr, MaxIndex);
}

int32 AMaze::CreateExitTile(int32 &x, int32 &y, int32 &z)
{
	// Determine what edge of the map the Exit will be on
	int32 OnX = FMath::RandRange(0, 1);
	int32 dir = -1;
	int32 ExitWall;
	/// Exit is on the x axis
	if (OnX == 1)
	{
		x = FMath::RandRange(0, (int32)(MazeSize.X - 1));
		int32 side = FMath::RandRange(0, 1);

		if (side == 0)
		{
			y = 0;
			ExitWall = 3;
		}
		else
		{
			y = MazeSize.Y - 1;
			ExitWall = 1;
		}
	}/// Exit is on the y axis
	else
	{
		y = FMath::RandRange(0, (int32)(MazeSize.Y - 1));
		int32 side = FMath::RandRange(0, 1);

		if (side == 0)
		{
			x = 0;
			ExitWall = 2;
		}
		else
		{
			x = MazeSize.X - 1;
			ExitWall = 4;
		}
	}

	z = FMath::RandRange(0, (int32)(MazeSize.Z - 1));

	// Create the tile at the desired location
	CreateTile(x, y, z);

	TWeakObjectPtr<ATile> tile = stack.Pop();
	tile->RemoveWallBool(ExitWall);
	tile->DirectionOfExit = ExitWall;
	stack.Push(tile);

	// Find next location on this level
	dir = FindNextLocation(x, y, z);
	return dir;
}

void AMaze::CreateTile(int32 x, int32 y, int32 z)
{
	ATile* NewTile;
	int32 index = (x + (y * MazeSize.X) + (MazeSize.X * MazeSize.Y * z));
	FString DisplayName = FString::FromInt(index) + " Tile " + FString::FromInt(x) + ", " + FString::FromInt(y) + ", " + FString::FromInt(z);
	FVector Location(((x - (MazeSize.X * 0.5f)) * 150), ((y - (MazeSize.Y * 0.5f)) * 150), (z * 251));
	FRotator Rotation(0, 0, 0);
	FActorSpawnParameters SpawnInfo;
	NewTile = GetWorld()->SpawnActor<ATile>(TileBP, Location, Rotation, SpawnInfo);
	
	if(NewTile != nullptr)
	{
		NewTile->Rename(*DisplayName);
		NewTile->SetActorLabel(*DisplayName);
		NewTile->SetCoordinates(x, y, z);
		map[index] = NewTile;
		stack.Push(NewTile);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Did not insert new tile"));
		UE_LOG(LogTemp, Warning, TEXT("Did not insert new tile"));
	}
}

int32 AMaze::FindNextLocation(int32 &x, int32 &y, int32 &z)
{
	int32 rand;
	TArray<int32> directions = { 1, 2, 3, 4 };

	for (int32 k = 0; k < directions.Num(); k++)
	{
		rand = FMath::RandRange(k, directions.Num() - 1);

		if (ValidTile(directions[rand], x, y, z))
		{
			TWeakObjectPtr<ATile> currentTile;
			// Remove the wall in the selected direction
			currentTile = stack.Pop();
			if (currentTile->CheckWall(directions[rand]))
			{
				currentTile->RemoveWallBool(directions[rand]);

				stack.Push(currentTile);

				return directions[rand];
			}
			else
			{
				stack.Push(currentTile);
			}
		}
		directions[rand] = directions[k];
	}
	return -1;
}

bool AMaze::ValidTile(int32 dir, int32 &x, int32 &y, int32 &z)
{
	int32 tempX = x;
	int32 tempY = y;
	int32 tempZ = z;

	int32 index;

	switch (dir)
	{
	case 0:
		tempZ -= 1;
		if(tempZ > -1)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					z = tempZ;
					return true;
				}
			}
		}
		break;
	case 1:
		tempY += 1;
		if (tempY < MazeSize.Y)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					y = tempY;
					return true;
				}
			}
		}
		break;
	case 2:
		tempX -= 1;
		if (tempX > -1)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					x = tempX;
					return true;
				}
			}
		}
		break;
	case 3:
		tempY -= 1;
		if (tempY > -1)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					y = tempY;
					return true;
				}
			}
		}
		break;
	case 4:
		tempX += 1;
		if (tempX < MazeSize.X)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					x = tempX;
					return true;
				}
			}
		}
		break;
	case 5:
		tempZ += 1;
		if (tempZ < MazeSize.Z)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (index < MaxIndex)
			{
				if (map[index] == nullptr)
				{
					z = tempZ;
					return true;
				}
			}
		}
		break;
	}

	return false;
}

void AMaze::RemoveWall(int32 direction)
{
	TWeakObjectPtr<ATile> currentTile;
	int32 oppositeDir;

	switch (direction)
	{
	case 0:
		oppositeDir = 5;
		break;
	case 1:
		oppositeDir = 3;
		break;
	case 2:
		oppositeDir = 4;
		break;
	case 3:
		oppositeDir = 1;
		break;
	case 4:
		oppositeDir = 2;
		break;
	case 5:
		oppositeDir = 0;
		break;
	default:
		oppositeDir = -1;
		break;
	}

	if (oppositeDir >= 0)
	{
		// Remove the wall in the selected direction
		currentTile = stack.Pop();
		currentTile->RemoveWallBool(oppositeDir);
		stack.Push(currentTile);
	}
}

void AMaze::ModifyProbability(float &nothing, float &elevator, float &loop)
{
	float tempNothing = nothing;
	float tempElevator = elevator;
	float tempLoop = loop;

	float difference = tempNothing = tempLoop;

	// Modify weights based on "difficulty" of maze. Essentially, the more floors to the maze, the less likely nothing will happen, and the more likely there will be loops
	float nothingMod = tempNothing - (difference / MazeSize.Z);
	float loopMod = tempLoop - (difference / MazeSize.Z);

	float totalWeight = tempNothing + tempElevator + tempLoop;

	float nothingChance = nothingMod / totalWeight;
	float elevatorChance = tempElevator / totalWeight;
	float loopChance = loopMod / totalWeight;

	// Set the upper limit for each option for when the probabilities are rolled
	nothing = nothingChance;
	elevator = nothing + elevatorChance;
	loop = elevator + loopChance;
}

int32 AMaze::BackTrack(int32 &x, int32 &y, int32 &z)
{
	TWeakObjectPtr<ATile> thisTile;
	int32 dir = -1;
	if (stack.Num() > 1)
	{
		// Pop last tile in
		stack.Pop();

		// Get Coordinates for new last tile in
		TWeakObjectPtr<ATile> currentTile = stack.Pop();
		currentTile->GetCoordinates(x, y, z);
		stack.Push(currentTile);
		dir = FindNextLocation(x, y, z);
		return dir;
	}
	else
	{
		// When the number of tiles in stack is 1, only the exit tile is in the stack.
		// This means that maze creation can end.
		TWeakObjectPtr<ATile> FinalTile;
		int32 fX = 0;
		int32 fY = 0;
		FinalTile = stack.Pop();
		FinalTile->GetCoordinates(fX, fY, ExitLevel);
		FinalTile->MakeExitRoom(FinalTile->DirectionOfExit);
	}

	return dir;
}

bool AMaze::ValidLoop(int32 dir, int32 &x, int32 &y, int32 &z)
{
	int32 tempX = x;
	int32 tempY = y;
	int32 tempZ = z;

	int32 index;

	switch (dir)
	{
	case 1:
		tempY += 1;
		if (tempY < MazeSize.Y)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (map[index] == nullptr)
			{
				y = tempY;
				return true;
			}
		}
		break;
	case 2:
		tempX -= 1;
		if (tempX > -1)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (map[index] == nullptr)
			{
				x = tempX;
				return true;
			}
		}
		break;
	case 3:
		tempY -= 1;
		if (tempY > -1)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (map[index] == nullptr)
			{
				y = tempY;
				return true;
			}
		}
		break;
	case 4:
		tempX += 1;
		if (tempX < MazeSize.X)
		{
			index = (tempX + (tempY * MazeSize.X) + (MazeSize.X * MazeSize.Y * tempZ));
			if (map[index] == nullptr)
			{
				x = tempX;
				return true;
			}
		}
		break;
	}

	return false;
}

void AMaze::CreateElevator(int32 x, int32 y, int32 z, int32 wall)
{
	AElevator* NewElevator;
	int32 index = (x + (y * MazeSize.X) + (MazeSize.X * MazeSize.Y * z));
	FString DisplayName = FString::FromInt(index) + " Elevator " + FString::FromInt(x) + ", " + FString::FromInt(y) + ", " + FString::FromInt(z);
	FVector Location(((x - (MazeSize.X * 0.5f)) * 150), ((y - (MazeSize.Y * 0.5f)) * 150), (z * 251));
	FRotator Rotation(0, 0, 0);
	FActorSpawnParameters SpawnInfo;
	NewElevator = GetWorld()->SpawnActor<AElevator>(ElevatorBP, Location, Rotation, SpawnInfo);

	if (NewElevator != nullptr)
	{
		NewElevator->Rename(*DisplayName);
		NewElevator->SetActorLabel(*DisplayName);
		NewElevator->SetCoordinates(x, y, z);
		eMap[index] = NewElevator;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Did not insert new elevator"));
		UE_LOG(LogTemp, Warning, TEXT("Did not insert new elevator"));
	}
}

void AMaze::RemoveWall(int32 dir, int32 x, int32 y, int32 z)
{
	int32 index = (x + (y * MazeSize.X) + (MazeSize.X * MazeSize.Y * z));
	int32 oppositeDir;

	switch (dir)
	{
	case 0:
		oppositeDir = 5;
		break;
	case 1:
		oppositeDir = 3;
		break;
	case 2:
		oppositeDir = 4;
		break;
	case 3:
		oppositeDir = 1;
		break;
	case 4:
		oppositeDir = 2;
		break;
	case 5:
		oppositeDir = 0;
		break;
	default:
		oppositeDir = -1;
		break;
	}

	if (oppositeDir >= 0)
	{
		// Remove the wall in the selected direction
		map[index]->RemoveWallBool(oppositeDir);
	}
}

void AMaze::ElevatorCheck()
{
	for (int32 i = 0; i < map.Num(); i++)
	{
		if (map[i]->CheckForElevator())
		{
			for (int32 k = 1; k < 5; k++)
			{
				if (map[i]->CheckWall(k))
				{
					eMap[i]->RotateElevatorTo(k);
					break;
				}
			}
		}
	}
}

void AMaze::SelectPlayerStartLocation()
{
	AMaze_3D_GameMode* pGameMode = Cast<AMaze_3D_GameMode>(pWorld->GetAuthGameMode());
	int32 x, y, z;
	int32 rand;
	FVector Location;
	TArray<int32> mapIndicies;

	while(mapIndicies.Num() != map.Num())
	{
		rand = FMath::RandRange(0, map.Num() - 1);
		if (!mapIndicies.Contains(rand))
		{
			TWeakObjectPtr<ATile> thisTile = map[rand];
			thisTile->GetCoordinates(x, y, z);

			if (MazeSize.Z > 1)
			{
				if (z != ExitLevel)
				{
					Location.X = ((x - (MazeSize.X * 0.5f)) * 150);
					Location.Y = ((y - (MazeSize.Y * 0.5f)) * 150);
					Location.Z = (z * 251);
					pGameMode->ExpectedLocation = Location;
					break;
				}
			}
			else if (thisTile->DirectionOfExit < 1)
			{
				Location.X = ((x - (MazeSize.X * 0.5f)) * 150);
				Location.Y = ((y - (MazeSize.Y * 0.5f)) * 150);
				Location.Z = (z * 251);
				pGameMode->ExpectedLocation = Location;
				break;
			}
			mapIndicies.AddUnique(rand);
		}
	}
}

void AMaze::DestroyMaze()
{
	for (int i = 0; i < map.Num(); i++)
	{
		map[i]->Destroy();
	}
	AMaze_3D_GameMode* pGameMode = Cast<AMaze_3D_GameMode>(pWorld->GetAuthGameMode());

	pGameMode->OnMazeFinished.Broadcast();
}