// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/MazeSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeSaveGame() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_UMazeSaveGame_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_UMazeSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_GetLevel();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_GetSaveName();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_GetSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_SetLevel();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_SetSaveName();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMazeSaveGame_SetSize();
// End Cross Module References
	void UMazeSaveGame::StaticRegisterNativesUMazeSaveGame()
	{
		UClass* Class = UMazeSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevel", &UMazeSaveGame::execGetLevel },
			{ "GetSaveName", &UMazeSaveGame::execGetSaveName },
			{ "GetSize", &UMazeSaveGame::execGetSize },
			{ "SetLevel", &UMazeSaveGame::execSetLevel },
			{ "SetSaveName", &UMazeSaveGame::execSetSaveName },
			{ "SetSize", &UMazeSaveGame::execSetSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics
	{
		struct MazeSaveGame_eventGetLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Retrieve value of level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "GetLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MazeSaveGame_eventGetLevel_Parms), Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_GetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_GetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics
	{
		struct MazeSaveGame_eventGetSaveName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventGetSaveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Retrieve name of save file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "GetSaveName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MazeSaveGame_eventGetSaveName_Parms), Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_GetSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_GetSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics
	{
		struct MazeSaveGame_eventGetSize_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Retreive value of size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "GetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MazeSaveGame_eventGetSize_Parms), Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics
	{
		struct MazeSaveGame_eventSetLevel_Parms
		{
			int32 inLevel;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::NewProp_inLevel = { UE4CodeGen_Private::EPropertyClass::Int, "inLevel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventSetLevel_Parms, inLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::NewProp_inLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Store the value of level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "SetLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MazeSaveGame_eventSetLevel_Parms), Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_SetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_SetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics
	{
		struct MazeSaveGame_eventSetSaveName_Parms
		{
			FString inName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::NewProp_inName = { UE4CodeGen_Private::EPropertyClass::Str, "inName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventSetSaveName_Parms, inName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::NewProp_inName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Store the name of the save file" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "SetSaveName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MazeSaveGame_eventSetSaveName_Parms), Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_SetSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_SetSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics
	{
		struct MazeSaveGame_eventSetSize_Parms
		{
			FVector inSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::NewProp_inSize = { UE4CodeGen_Private::EPropertyClass::Struct, "inSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MazeSaveGame_eventSetSize_Parms, inSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::NewProp_inSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save Game" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
		{ "ToolTip", "Store value of size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMazeSaveGame, "SetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MazeSaveGame_eventSetSize_Parms), Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMazeSaveGame_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMazeSaveGame_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMazeSaveGame_NoRegister()
	{
		return UMazeSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMazeSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMazeSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMazeSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMazeSaveGame_GetLevel, "GetLevel" }, // 2728885097
		{ &Z_Construct_UFunction_UMazeSaveGame_GetSaveName, "GetSaveName" }, // 3337125337
		{ &Z_Construct_UFunction_UMazeSaveGame_GetSize, "GetSize" }, // 4046144800
		{ &Z_Construct_UFunction_UMazeSaveGame_SetLevel, "SetLevel" }, // 2203132388
		{ &Z_Construct_UFunction_UMazeSaveGame_SetSaveName, "SetSaveName" }, // 212209065
		{ &Z_Construct_UFunction_UMazeSaveGame_SetSize, "SetSize" }, // 1789098078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeSaveGame.h" },
		{ "ModuleRelativePath", "MazeSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMazeSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMazeSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMazeSaveGame_Statics::ClassParams = {
		&UMazeSaveGame::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMazeSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMazeSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMazeSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMazeSaveGame, 4234852946);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMazeSaveGame(Z_Construct_UClass_UMazeSaveGame, &UMazeSaveGame::StaticClass, TEXT("/Script/Maze_3D"), TEXT("UMazeSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMazeSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
