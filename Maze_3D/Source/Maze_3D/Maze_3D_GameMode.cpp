// Fill out your copyright notice in the Description page of Project Settings.

#include "Maze_3D_GameMode.h"

AMaze_3D_GameMode::AMaze_3D_GameMode(const FObjectInitializer& ObjectInitializer)
{
	static ConstructorHelpers::FObjectFinder<UClass> PlayerClassFinder(TEXT("/Game/Blueprints/Player/MazePlayer_BP.MazePlayer_BP_C"));

	if (PlayerClassFinder.Object)
	{
		PlayerBP = PlayerClassFinder.Object;
	}

	DefaultPawnClass = PlayerBP;
}

void AMaze_3D_GameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	UWorld* pWorld = GetWorld();

	UMaze_3D_GameInstance* GameInstance = UMaze_3D_GameInstance::Get(pWorld);

	GameInstance->SendLevelInfo(level, size);
	
	AGameModeBase::InitGame(MapName, Options, ErrorMessage);

	GenerateMaze();
}


void AMaze_3D_GameMode::GenerateMaze()
{	
	FVector Location(0, 0, 0);
	FRotator Rotation(0, 0, 0);
	FActorSpawnParameters SpawnInfo;
	Maze = GetWorld()->SpawnActor<AMaze>(Location, Rotation, SpawnInfo);
}

void AMaze_3D_GameMode::PlayerReference(TSubclassOf<const AMazePlayer> PlayerRef)
{
	PlayerRef = PlayerBP;
}

FVector AMaze_3D_GameMode::GetMazeSize()
{
	return size;
}

int32 AMaze_3D_GameMode::GetMazeLevel()
{
	return level;
}

void AMaze_3D_GameMode::UpdateLevel()
{
	UWorld* pWorld = GetWorld();

	UMaze_3D_GameInstance* GameInstance = UMaze_3D_GameInstance::Get(pWorld);

	int32 x = size.X;
	int32 y = size.Y;
	int32 z = size.Z;
	bool incZ = false;

	if (level < MAX_LEVEL)
	{
		level += 1;

		TArray<int32> xOrY = { 0, 1 };
		for (int32 i = 0; i < xOrY.Num(); i++)
		{
			int32 rand = FMath::RandRange(i, xOrY.Num() - 1);
			// X is chosen to increment
			if (xOrY[rand] == 0)
			{
				if (x < MAX_SIZE_X - 1)
				{
					x += 1;
					break;
				}
				else if (y < MAX_SIZE_Y - 1)
				{
					y += 1;
					break;
				}
			}// Y is chosen to increment
			else if (xOrY[rand] == 1)
			{
				if (y < MAX_SIZE_Y - 1)
				{
					y += 1;
					break;
				}
				else if (x < MAX_SIZE_X - 1)
				{
					x += 1;
					break;
				}
			}

			if (i == 1)
			{
				incZ = true;
			}
		}
		
		if (incZ)
		{
			if (z < MAX_SIZE_Z - 1)
			{
				z += 1;
				x = MIN_SIZE_X;
				y = MIN_SIZE_Y;
			}
		}
	}
	
	size.X = x;
	size.Y = y;
	size.Z = z;

	GameInstance->PrepLevel(level, size);
}

void AMaze_3D_GameMode::ExitFound()
{
	Maze->DestroyMaze();

	Maze->Destroy();
}

void AMaze_3D_GameMode::PlayerSpawned(const AMazePlayer* player, FVector location)
{
	OnPlayerSpawned.Broadcast(player, location);
}