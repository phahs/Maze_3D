// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/MazePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazePlayer() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_AMazePlayer_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_AMazePlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
// End Cross Module References
	void AMazePlayer::StaticRegisterNativesAMazePlayer()
	{
	}
	UClass* Z_Construct_UClass_AMazePlayer_NoRegister()
	{
		return AMazePlayer::StaticClass();
	}
	struct Z_Construct_UClass_AMazePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazePlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MazePlayer.h" },
		{ "ModuleRelativePath", "MazePlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazePlayer_Statics::ClassParams = {
		&AMazePlayer::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMazePlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazePlayer, 2164952050);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazePlayer(Z_Construct_UClass_AMazePlayer, &AMazePlayer::StaticClass, TEXT("/Script/Maze_3D"), TEXT("AMazePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
