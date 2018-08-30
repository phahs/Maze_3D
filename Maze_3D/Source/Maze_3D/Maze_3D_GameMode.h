// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Maze_3D_GameInstance.h"
#include "Maze.h"
#include "MazePlayer.h"
#include "ConstructorHelpers.h"
#include "Maze_3D_GameMode.generated.h"

class AMaze;
class AMazePlayer;

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartNewLevel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCheckLocation, const AMazePlayer*, Player, FVector, CurrentLocation);

// Max level value
const int32 MAX_LEVEL = 50;

// Min volume of the maze
const float MIN_SIZE_X = 4;
const float MIN_SIZE_Y = 4;
const float MIN_SIZE_Z = 1;
// Max volume of the maze - 1
const float MAX_SIZE_X = 9;
const float MAX_SIZE_Y = 9;
const float MAX_SIZE_Z = 6;

UCLASS()
class MAZE_3D_API AMaze_3D_GameMode : public AGameModeBase
{
	GENERATED_BODY()
private:
	// Sets default values for this actor's properties
	AMaze_3D_GameMode(const FObjectInitializer& ObjectInitializer);

	// Difficulty level
	int32 level;

	// Size of the maze volume
	FVector size;

	// Reference to spawned maze
	AMaze* Maze;

	// Reference to the Player Blueprint... I hope
	TSubclassOf<AMazePlayer> PlayerBP;
public:
	// Init the game
	UFUNCTION(BlueprintCallable)
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	
	// Create the maze
	void GenerateMaze();

	// Pass a reference to the Player
	void PlayerReference(TSubclassOf<const AMazePlayer> PlayerRef);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Location Validation")
	FVector ExpectedLocation;
	
	/// Utility Functions
	UFUNCTION(BlueprintCallable, Category = "Utility Functions")
	FVector GetMazeSize();

	UFUNCTION(BlueprintCallable, Category = "Utility Functions")
	int32 GetMazeLevel();

	UFUNCTION(BlueprintCallable, Category = "Utility Functions")
	void UpdateLevel();

	UFUNCTION(BlueprintCallable, Category = "Utility Functions")
	void ExitFound();

	UFUNCTION(BlueprintCallable, Category = "Location Validation")
	void PlayerSpawned(const AMazePlayer* player, FVector location);

	UPROPERTY(BlueprintAssignable, Category = "Utility Functions")
	FStartNewLevel OnMazeFinished;

	UPROPERTY(BlueprintAssignable, Category = "Utility Functions")
	FCheckLocation OnPlayerSpawned;
};
