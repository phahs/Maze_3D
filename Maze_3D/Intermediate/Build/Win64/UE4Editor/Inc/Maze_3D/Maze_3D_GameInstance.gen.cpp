// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Maze_3D_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_3D_GameInstance() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_UMaze_3D_GameInstance_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_UMaze_3D_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MAZE_3D_API UFunction* Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo();
// End Cross Module References
	void UMaze_3D_GameInstance::StaticRegisterNativesUMaze_3D_GameInstance()
	{
		UClass* Class = UMaze_3D_GameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrepLevel", &UMaze_3D_GameInstance::execPrepLevel },
			{ "SendLevelInfo", &UMaze_3D_GameInstance::execSendLevelInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics
	{
		struct Maze_3D_GameInstance_eventPrepLevel_Parms
		{
			int32 level;
			FVector size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::NewProp_size = { UE4CodeGen_Private::EPropertyClass::Struct, "size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameInstance_eventPrepLevel_Parms, size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::NewProp_level = { UE4CodeGen_Private::EPropertyClass::Int, "level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameInstance_eventPrepLevel_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maze Variables" },
		{ "ModuleRelativePath", "Maze_3D_GameInstance.h" },
		{ "ToolTip", "Gets the Difficulty level and maze size from MenuMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaze_3D_GameInstance, "PrepLevel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Maze_3D_GameInstance_eventPrepLevel_Parms), Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics
	{
		struct Maze_3D_GameInstance_eventSendLevelInfo_Parms
		{
			int32 level;
			FVector size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_size;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::NewProp_size = { UE4CodeGen_Private::EPropertyClass::Struct, "size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameInstance_eventSendLevelInfo_Parms, size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::NewProp_level = { UE4CodeGen_Private::EPropertyClass::Int, "level", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(Maze_3D_GameInstance_eventSendLevelInfo_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::NewProp_size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Maze Variables" },
		{ "ModuleRelativePath", "Maze_3D_GameInstance.h" },
		{ "ToolTip", "Gives the Difficulty level and maze size to the GameMode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaze_3D_GameInstance, "SendLevelInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(Maze_3D_GameInstance_eventSendLevelInfo_Parms), Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaze_3D_GameInstance_NoRegister()
	{
		return UMaze_3D_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaze_3D_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaze_3D_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaze_3D_GameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaze_3D_GameInstance_PrepLevel, "PrepLevel" }, // 3094499551
		{ &Z_Construct_UFunction_UMaze_3D_GameInstance_SendLevelInfo, "SendLevelInfo" }, // 2805322091
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaze_3D_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Maze_3D_GameInstance.h" },
		{ "ModuleRelativePath", "Maze_3D_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaze_3D_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaze_3D_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaze_3D_GameInstance_Statics::ClassParams = {
		&UMaze_3D_GameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMaze_3D_GameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMaze_3D_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaze_3D_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaze_3D_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaze_3D_GameInstance, 2590635234);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaze_3D_GameInstance(Z_Construct_UClass_UMaze_3D_GameInstance, &UMaze_3D_GameInstance::StaticClass, TEXT("/Script/Maze_3D"), TEXT("UMaze_3D_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaze_3D_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
