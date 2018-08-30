// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Maze_3D_GameMode.h"
#include "Tile.h"
#include "Elevator.h"
#include "ConstructorHelpers.h"
#include "Maze.generated.h"

class AMaze_3D_GameMode;
class ATile;
class AElevator;
class AMazePlayer;

UCLASS()
class MAZE_3D_API AMaze : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMaze();

	// array of the maze
	/*
	REMEMBER: this is a 1D array, so you will have to convert the XYZ dimensions/coordinates used to 1D array (( x + (y * SIZE.X) + (SIZE.X * SIZE.Y * z)).
	*/
	TArray<TWeakObjectPtr<ATile>> map;

	TArray<TWeakObjectPtr<AElevator>> eMap;

	// Backtracking array;
	TArray<TWeakObjectPtr<ATile>> stack;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Get Maze level and dimensions
	void GetMazeInfo();

	// Destroy maze
	void DestroyMaze();
private:
	// Get reference to the world
	UWorld* pWorld;
	
	// Level of this maze
	int32 MazeLevel;

	// Dimensions of this maze
	FVector MazeSize;

	// Reference to spawned player
	AMazePlayer* Player;

	/// Maze Creation Functions
	// Begin maze creation process
	void BuildMaze();

	// Initialize map
	void SetUpMap();

	// Setup Exit Tile
	int32 CreateExitTile(int32 &x, int32 &y, int32 &z);

	// Generate tiles
	void CreateTile(int32 x, int32 y, int32 z);

	// Choose next tile location
	int32 FindNextLocation(int32 &x, int32 &y, int32 &z);

	// Determine is selected location is valid
	bool ValidTile(int32 dir, int32 &x, int32 &y, int32 &z);

	// Remove wall to path
	void RemoveWall(int32 dir);

	// Remove specific tiles wall to path
	void RemoveWall(int32 dir, int32 x, int32 y, int32 z);

	// Modify probability weights
	void ModifyProbability(float &nothing, float &elevator, float &loop);

	// Backtrack through the tile stack
	int32 BackTrack(int32 &x, int32 &y, int32 &z);

	// Check if the location selected is valid for a loop
	bool ValidLoop(int32 dir, int32 &x, int32 &y, int32 &z);

	// Generate elevator
	void CreateElevator(int32 x, int32 y, int32 z, int32 wall);

	// Spawn player character inside the maze
	void SelectPlayerStartLocation();

	// Check all elevators, and rotate them as necessary
	void ElevatorCheck();

	int32 MaxIndex;

	int32 ExitLevel;

	/// Blueprint References/Prefabs
	// Store reference to Tile blueprint
	TSubclassOf<ATile> TileBP;

	// Store reference to Elevator blueprint
	TSubclassOf<AElevator> ElevatorBP;
};
