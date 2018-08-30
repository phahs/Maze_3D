// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MazeSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class MAZE_3D_API UMazeSaveGame : public USaveGame
{
	GENERATED_BODY()
private:
	// Current level of maze
	int32 level;

	// Dimensions of current maze
	FVector size;

	// Name of save file
	FString saveName;

public:
	// Retrieve value of level
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	int32 GetLevel();

	// Store the value of level
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	void SetLevel(int32 inLevel);

	// Retreive value of size
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	FVector GetSize();

	// Store value of size
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	void SetSize(FVector inSize);

	// Retrieve name of save file
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	FString GetSaveName();

	// Store the name of the save file
	UFUNCTION(BlueprintCallable, Category = "Save Game")
	void SetSaveName(FString inName);
};
