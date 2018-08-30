// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeSaveGame.h"

int32 UMazeSaveGame::GetLevel()
{
	return level;
}

void UMazeSaveGame::SetLevel(int32 inLevel)
{
	level = inLevel;
}

FVector UMazeSaveGame::GetSize()
{
	return size;
}

void UMazeSaveGame::SetSize(FVector inSize)
{
	size = inSize;
}

FString UMazeSaveGame::GetSaveName()
{
	return saveName;
}

void UMazeSaveGame::SetSaveName(FString inName)
{
	saveName = inName;
}