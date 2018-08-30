// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Maze_3D_MenuMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_3D_MenuMode() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3D_MenuMode_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3D_MenuMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame();
// End Cross Module References
	void AMaze_3D_MenuMode::StaticRegisterNativesAMaze_3D_MenuMode()
	{
		UClass* Class = AMaze_3D_MenuMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinueGame", &AMaze_3D_MenuMode::execContinueGame },
			{ "ExitGame", &AMaze_3D_MenuMode::execExitGame },
			{ "PlayGame", &AMaze_3D_MenuMode::execPlayGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics
	{
		struct Maze_3D_MenuMode_eventContinueGame_Parms
		{
			int32 gameLevel;
			FVector size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::NewProp_size = { UE4CodeGen_Private::EPropertyClass::Struct, "size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_MenuMode_eventContinueGame_Parms, size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::NewProp_gameLevel = { UE4CodeGen_Private::EPropertyClass::Int, "gameLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_MenuMode_eventContinueGame_Parms, gameLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::NewProp_gameLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_MenuMode.h" },
		{ "ToolTip", "Gives player option to choose progress through maze" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_MenuMode, "ContinueGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Maze_3D_MenuMode_eventContinueGame_Parms), Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_MenuMode.h" },
		{ "ToolTip", "Exits the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_MenuMode, "ExitGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Maze_3D_MenuMode.h" },
		{ "ToolTip", "Selects Starting game with the LEVEL_1_SIZE and NEW_GAME_LEVEL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMaze_3D_MenuMode, "PlayGame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMaze_3D_MenuMode_NoRegister()
	{
		return AMaze_3D_MenuMode::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_3D_MenuMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_3D_MenuMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMaze_3D_MenuMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMaze_3D_MenuMode_ContinueGame, "ContinueGame" }, // 377536430
		{ &Z_Construct_UFunction_AMaze_3D_MenuMode_ExitGame, "ExitGame" }, // 995323472
		{ &Z_Construct_UFunction_AMaze_3D_MenuMode_PlayGame, "PlayGame" }, // 765445840
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3D_MenuMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Maze_3D_MenuMode.h" },
		{ "ModuleRelativePath", "Maze_3D_MenuMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_3D_MenuMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze_3D_MenuMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_3D_MenuMode_Statics::ClassParams = {
		&AMaze_3D_MenuMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_3D_MenuMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaze_3D_MenuMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze_3D_MenuMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_3D_MenuMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze_3D_MenuMode, 379586928);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze_3D_MenuMode(Z_Construct_UClass_AMaze_3D_MenuMode, &AMaze_3D_MenuMode::StaticClass, TEXT("/Script/Maze_3D"), TEXT("AMaze_3D_MenuMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze_3D_MenuMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
