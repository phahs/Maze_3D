// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class MAZE_3D_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Set coordinates
	void SetCoordinates(int32 x, int32 y, int32 z);

	// Get coordinates
	void GetCoordinates(int32 &x, int32 &y, int32 &z);

	// Store exit direction (only used for exit tile)
	int32 DirectionOfExit;

	// Check if a wall exists
	bool CheckWall(int32 dir);

	// Add elevator
	void AddElevator(int32 onWall);

	// Check if tile has elevator
	bool CheckForElevator();

	// Set wall boolean to false
	void RemoveWallBool(int32 dir);

	// Remove wall from tile
	UFUNCTION(BlueprintImplementableEvent)
	void RemoveWall(int32 dir);

	// Generate exit room off of exit tile;
	UFUNCTION(BlueprintImplementableEvent)
	void MakeExitRoom(int32 ExitDirection);
private:
	/// Variables for wall logic
	// True = Wall exists. False = Wall destroyed.
	bool Floor;
	bool Front;
	bool Right;
	bool Back;
	bool Left;
	bool Cieling;
	bool Elevator;

	// Copy of the tiles' location in the grid. To find index: (( x + (y * SIZE.X) + (SIZE.X * SIZE.Y * z))
	int32 coord_X, coord_Y, coord_Z;

	// Keep wall from being selected if an elevator rail is on it
	void ElevatorWall(int32 wall);
};
