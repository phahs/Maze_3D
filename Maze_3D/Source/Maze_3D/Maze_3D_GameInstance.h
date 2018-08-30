// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Maze_3D_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MAZE_3D_API UMaze_3D_GameInstance : public UGameInstance
{
	GENERATED_BODY()
private:
	// Temp holding place for the Difficulty level of the maze (passing from MenuMode to GameMode)
	int32 transferLevel;

	// Temp holding place for the size of the maze (passing from MenuMode to GameMode)
	FVector transferSize;
public:
	// Allows other classes to get a reference to this GameInstance
	static UMaze_3D_GameInstance* Get(UWorld* pWorld);

	virtual void Init() override;
	virtual void Shutdown() override;

	// Gets the Difficulty level and maze size from MenuMode
	UFUNCTION(BlueprintCallable, Category = "Maze Variables")
	void PrepLevel(int32 level, FVector size);

	// Gives the Difficulty level and maze size to the GameMode
	UFUNCTION(BlueprintCallable, Category = "Maze Variables")
	void SendLevelInfo(int32& level, FVector& size);
};