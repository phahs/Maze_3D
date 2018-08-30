// Fill out your copyright notice in the Description page of Project Settings.

#include "Maze_3D_MenuMode.h"

// Begin a new game of Maze
void AMaze_3D_MenuMode::PlayGame()
{
	UWorld* pWorld = GetWorld();

	UMaze_3D_GameInstance* GameInstance = UMaze_3D_GameInstance::Get(pWorld);

	GameInstance->PrepLevel(NEW_GAME_LEVEL, LEVEL_1_SIZE);
	
	UGameplayStatics::OpenLevel(pWorld, "Maze");
}

void AMaze_3D_MenuMode::ContinueGame(int32 gameLevel, FVector size)
{
	UWorld* pWorld = GetWorld();

	UMaze_3D_GameInstance* GameInstance = UMaze_3D_GameInstance::Get(pWorld);

	GameInstance->PrepLevel(gameLevel, size);

	UGameplayStatics::OpenLevel(pWorld, "Maze");
}

// Close Maze
void AMaze_3D_MenuMode::ExitGame()
{
	UWorld* pWorld = GetWorld();

	UMaze_3D_GameInstance* pGameInstance = UMaze_3D_GameInstance::Get(pWorld);

	pGameInstance->Shutdown();
}

