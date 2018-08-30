// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Maze_3DGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaze_3DGameModeBase() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3DGameModeBase_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_AMaze_3DGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
// End Cross Module References
	void AMaze_3DGameModeBase::StaticRegisterNativesAMaze_3DGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMaze_3DGameModeBase_NoRegister()
	{
		return AMaze_3DGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMaze_3DGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMaze_3DGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMaze_3DGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Maze_3DGameModeBase.h" },
		{ "ModuleRelativePath", "Maze_3DGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMaze_3DGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMaze_3DGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMaze_3DGameModeBase_Statics::ClassParams = {
		&AMaze_3DGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMaze_3DGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMaze_3DGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMaze_3DGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMaze_3DGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMaze_3DGameModeBase, 2961888773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMaze_3DGameModeBase(Z_Construct_UClass_AMaze_3DGameModeBase, &AMaze_3DGameModeBase::StaticClass, TEXT("/Script/Maze_3D"), TEXT("AMaze_3DGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMaze_3DGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
