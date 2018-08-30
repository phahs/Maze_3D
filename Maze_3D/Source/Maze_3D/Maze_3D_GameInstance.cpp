// Fill out your copyright notice in the Description page of Project Settings.

#include "Maze_3D_GameInstance.h"

UMaze_3D_GameInstance* UMaze_3D_GameInstance::Get(UWorld* pWorld)
{
	UGameInstance* pGameInstance = pWorld->GetGameInstance();
	
	if (pGameInstance == nullptr)
	{
		return nullptr;
	}

	return Cast<UMaze_3D_GameInstance>(pGameInstance);
}

void UMaze_3D_GameInstance::Init()
{
	UGameInstance::Init();
}
void UMaze_3D_GameInstance::Shutdown()
{
	UGameInstance::Shutdown();
}

void UMaze_3D_GameInstance::PrepLevel(int32 level, FVector size)
{
	transferLevel = level;
	transferSize = size;
}

void UMaze_3D_GameInstance::SendLevelInfo(int32& level, FVector& size)
{
	level = transferLevel;
	size = transferSize;
}