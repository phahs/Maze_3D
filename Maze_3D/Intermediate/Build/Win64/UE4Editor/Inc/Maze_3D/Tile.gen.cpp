// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_ATile_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	MAZE_3D_API UFunction* Z_Construct_UFunction_ATile_MakeExitRoom();
	MAZE_3D_API UFunction* Z_Construct_UFunction_ATile_RemoveWall();
// End Cross Module References
	static FName NAME_ATile_MakeExitRoom = FName(TEXT("MakeExitRoom"));
	void ATile::MakeExitRoom(int32 ExitDirection)
	{
		Tile_eventMakeExitRoom_Parms Parms;
		Parms.ExitDirection=ExitDirection;
		ProcessEvent(FindFunctionChecked(NAME_ATile_MakeExitRoom),&Parms);
	}
	static FName NAME_ATile_RemoveWall = FName(TEXT("RemoveWall"));
	void ATile::RemoveWall(int32 dir)
	{
		Tile_eventRemoveWall_Parms Parms;
		Parms.dir=dir;
		ProcessEvent(FindFunctionChecked(NAME_ATile_RemoveWall),&Parms);
	}
	void ATile::StaticRegisterNativesATile()
	{
	}
	struct Z_Construct_UFunction_ATile_MakeExitRoom_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExitDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_MakeExitRoom_Statics::NewProp_ExitDirection = { UE4CodeGen_Private::EPropertyClass::Int, "ExitDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Tile_eventMakeExitRoom_Parms, ExitDirection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_MakeExitRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_MakeExitRoom_Statics::NewProp_ExitDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_MakeExitRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Generate exit room off of exit tile;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_MakeExitRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, "MakeExitRoom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Tile_eventMakeExitRoom_Parms), Z_Construct_UFunction_ATile_MakeExitRoom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_MakeExitRoom_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_MakeExitRoom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_MakeExitRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_MakeExitRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_MakeExitRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATile_RemoveWall_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATile_RemoveWall_Statics::NewProp_dir = { UE4CodeGen_Private::EPropertyClass::Int, "dir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Tile_eventRemoveWall_Parms, dir), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATile_RemoveWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATile_RemoveWall_Statics::NewProp_dir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATile_RemoveWall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Tile.h" },
		{ "ToolTip", "Remove wall from tile" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATile_RemoveWall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATile, "RemoveWall", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Tile_eventRemoveWall_Parms), Z_Construct_UFunction_ATile_RemoveWall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATile_RemoveWall_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATile_RemoveWall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATile_RemoveWall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATile_RemoveWall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATile_RemoveWall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATile_MakeExitRoom, "MakeExitRoom" }, // 648182991
		{ &Z_Construct_UFunction_ATile_RemoveWall, "RemoveWall" }, // 192595183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Tile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 3130711037);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/Maze_3D"), TEXT("ATile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
