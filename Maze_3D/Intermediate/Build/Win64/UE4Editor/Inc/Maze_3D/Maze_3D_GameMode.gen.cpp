// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Maze_3D_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_3D_GameMode() {}
// Cross Module References
	MAZE_3D_API UFunction* Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAZE_3D_API UClass* Z_Construct_UClass_AMazePlayer_NoRegister();
	MAZE_3D_API UFunction* Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature();
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3D_GameMode_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3D_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_InitGame();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics
	{
		struct _Script_Maze_3D_eventCheckLocation_Parms
		{
			const AMazePlayer* Player;
			FVector CurrentLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_CurrentLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Maze_3D_eventCheckLocation_Parms, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_Player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_Maze_3D_eventCheckLocation_Parms, Player), Z_Construct_UClass_AMazePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_Player_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_CurrentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Maze_3D, "CheckLocation__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Maze_3D_eventCheckLocation_Parms), Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Maze_3D, "StartNewLevel__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AMaze_3D_GameMode::StaticRegisterNativesAMaze_3D_GameMode()
	{
		UClass* Class = AMaze_3D_GameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExitFound", &AMaze_3D_GameMode::execExitFound },
			{ "GetMazeLevel", &AMaze_3D_GameMode::execGetMazeLevel },
			{ "GetMazeSize", &AMaze_3D_GameMode::execGetMazeSize },
			{ "InitGame", &AMaze_3D_GameMode::execInitGame },
			{ "PlayerSpawned", &AMaze_3D_GameMode::execPlayerSpawned },
			{ "UpdateLevel", &AMaze_3D_GameMode::execUpdateLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "ExitFound", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics
	{
		struct Maze_3D_GameMode_eventGetMazeLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventGetMazeLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "GetMazeLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Maze_3D_GameMode_eventGetMazeLevel_Parms), Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics
	{
		struct Maze_3D_GameMode_eventGetMazeSize_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventGetMazeSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
		{ "ToolTip", "Utility Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "GetMazeSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Maze_3D_GameMode_eventGetMazeSize_Parms), Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics
	{
		struct Maze_3D_GameMode_eventInitGame_Parms
		{
			FString MapName;
			FString Options;
			FString ErrorMessage;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventInitGame_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Str, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventInitGame_Parms, Options), METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_Options_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_MapName = { UE4CodeGen_Private::EPropertyClass::Str, "MapName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventInitGame_Parms, MapName), METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_MapName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
		{ "ToolTip", "Init the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "InitGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(Maze_3D_GameMode_eventInitGame_Parms), Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_InitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_InitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics
	{
		struct Maze_3D_GameMode_eventPlayerSpawned_Parms
		{
			const AMazePlayer* player;
			FVector location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventPlayerSpawned_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_player_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameMode_eventPlayerSpawned_Parms, player), Z_Construct_UClass_AMazePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location Validation" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "PlayerSpawned", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Maze_3D_GameMode_eventPlayerSpawned_Parms), Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_GameMode, "UpdateLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaze_3D_GameMode_NoRegister()
	{
		return AMaze_3D_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_3D_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSpawned_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMazeFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMazeFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_3D_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_3D_GameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_ExitFound, "ExitFound" }, // 3109336663
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeLevel, "GetMazeLevel" }, // 2384799695
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_GetMazeSize, "GetMazeSize" }, // 3574922404
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_InitGame, "InitGame" }, // 3039494392
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_PlayerSpawned, "PlayerSpawned" }, // 3997751742
		{ &Z_Construct_UFunction_AMaze_3D_GameMode_UpdateLevel, "UpdateLevel" }, // 2831040556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3D_GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Maze_3D_GameMode.h" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnPlayerSpawned_MetaData[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnPlayerSpawned = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnPlayerSpawned", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AMaze_3D_GameMode, OnPlayerSpawned), Z_Construct_UDelegateFunction_Maze_3D_CheckLocation__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnPlayerSpawned_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnPlayerSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnMazeFinished_MetaData[] = {
		{ "Category", "Utility Functions" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnMazeFinished = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnMazeFinished", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AMaze_3D_GameMode, OnMazeFinished), Z_Construct_UDelegateFunction_Maze_3D_StartNewLevel__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnMazeFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnMazeFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_ExpectedLocation_MetaData[] = {
		{ "Category", "Location Validation" },
		{ "ModuleRelativePath", "Maze_3D_GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_ExpectedLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "ExpectedLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AMaze_3D_GameMode, ExpectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_ExpectedLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_ExpectedLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMaze_3D_GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnPlayerSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_OnMazeFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMaze_3D_GameMode_Statics::NewProp_ExpectedLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_3D_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze_3D_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_3D_GameMode_Statics::ClassParams = {
		&AMaze_3D_GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMaze_3D_GameMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_GameMode_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_3D_GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze_3D_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_3D_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze_3D_GameMode, 2172840718);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze_3D_GameMode(Z_Construct_UClass_AMaze_3D_GameMode, &AMaze_3D_GameMode::StaticClass, TEXT("/Script/Maze_3D"), TEXT("AMaze_3D_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze_3D_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
