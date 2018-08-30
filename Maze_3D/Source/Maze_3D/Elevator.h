// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tile.h"
#include "Elevator.generated.h"

/**
 * 
 */
class ATile;

UCLASS()
class MAZE_3D_API AElevator : public ATile
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AElevator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Rotate the elevator to the desired position
	UFUNCTION(BlueprintImplementableEvent, Category = "Rotation Validation")
	void RotateElevatorTo(int32 existingWall);
};
