// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Maze_3D_GameInstance.h"
#include "Maze_3D_MenuMode.generated.h"

/**
 * 
 */

 // Min volume of the maze
const float MIN_SIZE_X = 4;
const float MIN_SIZE_Y = 4;
const float MIN_SIZE_Z = 1;

const FVector LEVEL_1_SIZE = FVector(MIN_SIZE_X, MIN_SIZE_Y, MIN_SIZE_Z);
const int32 NEW_GAME_LEVEL = 1;

UCLASS(BlueprintType)
class MAZE_3D_API AMaze_3D_MenuMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Selects Starting game with the LEVEL_1_SIZE and NEW_GAME_LEVEL
	UFUNCTION(BlueprintCallable)
	void PlayGame();

	// Gives player option to choose progress through maze
	UFUNCTION(BlueprintCallable)
	void ContinueGame(int32 gameLevel, FVector size);
	
	// Exits the game
	UFUNCTION(BlueprintCallable)
	void ExitGame();
};
