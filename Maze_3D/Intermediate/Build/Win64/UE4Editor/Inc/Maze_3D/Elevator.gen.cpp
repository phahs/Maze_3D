// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Maze_3D/Elevator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevator() {}
// Cross Module References
	MAZE_3D_API UClass* Z_Construct_UClass_AElevator_NoRegister();
	MAZE_3D_API UClass* Z_Construct_UClass_AElevator();
	MAZE_3D_API UClass* Z_Construct_UClass_ATile();
	UPackage* Z_Construct_UPackage__Script_Maze_3D();
	MAZE_3D_API UFunction* Z_Construct_UFunction_AElevator_RotateElevatorTo();
// End Cross Module References
	static FName NAME_AElevator_RotateElevatorTo = FName(TEXT("RotateElevatorTo"));
	void AElevator::RotateElevatorTo(int32 existingWall)
	{
		Elevator_eventRotateElevatorTo_Parms Parms;
		Parms.existingWall=existingWall;
		ProcessEvent(FindFunctionChecked(NAME_AElevator_RotateElevatorTo),&Parms);
	}
	void AElevator::StaticRegisterNativesAElevator()
	{
	}
	struct Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_existingWall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::NewProp_existingWall = { UE4CodeGen_Private::EPropertyClass::Int, "existingWall", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Elevator_eventRotateElevatorTo_Parms, existingWall), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::NewProp_existingWall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotation Validation" },
		{ "ModuleRelativePath", "Elevator.h" },
		{ "ToolTip", "Rotate the elevator to the desired position" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElevator, "RotateElevatorTo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, sizeof(Elevator_eventRotateElevatorTo_Parms), Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AElevator_RotateElevatorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AElevator_RotateElevatorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AElevator_NoRegister()
	{
		return AElevator::StaticClass();
	}
	struct Z_Construct_UClass_AElevator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AElevator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATile,
		(UObject* (*)())Z_Construct_UPackage__Script_Maze_3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AElevator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AElevator_RotateElevatorTo, "RotateElevatorTo" }, // 2440471944
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AElevator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elevator.h" },
		{ "ModuleRelativePath", "Elevator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AElevator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElevator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AElevator_Statics::ClassParams = {
		&AElevator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AElevator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AElevator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AElevator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AElevator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AElevator, 812988679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AElevator(Z_Construct_UClass_AElevator, &AElevator::StaticClass, TEXT("/Script/Maze_3D"), TEXT("AElevator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AElevator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
