// Fill out your copyright notice in the Description page of Project Settings.

#include "Tile.h"


// Sets default values
ATile::ATile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Floor = true;
	Front = true;
	Right = true;
	Back = true;
	Left = true;
	Cieling = true;
	Elevator = false;
}

// Called when the game starts or when spawned
void ATile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATile::SetCoordinates(int32 x, int32 y, int32 z)
{
	coord_X = x;
	coord_Y = y;
	coord_Z = z;
}

void ATile::GetCoordinates(int32 &x, int32 &y, int32 &z)
{
	x = coord_X;
	y = coord_Y;
	z = coord_Z;
}

void ATile::RemoveWallBool(int32 dir)
{
	switch (dir)
	{
	case 0:
		Floor = false;
		RemoveWall(dir);
		break;
	case 1:
		Front = false;
		RemoveWall(dir);
		break;
	case 2:
		Right = false;
		RemoveWall(dir);
		break;
	case 3:
		Back = false;
		RemoveWall(dir);
		break;
	case 4:
		Left = false;
		RemoveWall(dir);
		break;
	case 5:
		Cieling = false;
		RemoveWall(dir);
		break;
	default:
		break;
	}
}

bool ATile::CheckWall(int32 dir)
{
	switch (dir)
	{
	case 0:
		return Floor;
	case 1:
		return Front;
	case 2:
		return Right;
	case 3:
		return Back;
	case 4:
		return Left;
	case 5:
		return Cieling;
	default:
		return true;
	}
}

void ATile::AddElevator(int32 onWall)
{
	Elevator = true;
	ElevatorWall(onWall);
}

bool ATile::CheckForElevator()
{
	return Elevator;
}

void ATile::ElevatorWall(int32 wall)
{
	switch (wall)
	{
	case 0:
		Floor = false;
		break;
	case 1:
		Front = false;
		break;
	case 2:
		Right = false;
		break;
	case 3:
		Back = false;
		break;
	case 4:
		Left = false;
		break;
	case 5:
		Cieling = false;
		break;
	default:
		break;
	}
}