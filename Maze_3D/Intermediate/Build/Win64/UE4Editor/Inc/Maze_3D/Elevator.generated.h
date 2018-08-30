// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZE_3D_Elevator_generated_h
#error "Elevator.generated.h already included, missing '#pragma once' in Elevator.h"
#endif
#define MAZE_3D_Elevator_generated_h

#define Maze_3D_Source_Maze_3D_Elevator_h_17_RPC_WRAPPERS
#define Maze_3D_Source_Maze_3D_Elevator_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Maze_3D_Source_Maze_3D_Elevator_h_17_EVENT_PARMS \
	struct Elevator_eventRotateElevatorTo_Parms \
	{ \
		int32 existingWall; \
	};


#define Maze_3D_Source_Maze_3D_Elevator_h_17_CALLBACK_WRAPPERS
#define Maze_3D_Source_Maze_3D_Elevator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElevator(); \
	friend struct Z_Construct_UClass_AElevator_Statics; \
public: \
	DECLARE_CLASS(AElevator, ATile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AElevator)


#define Maze_3D_Source_Maze_3D_Elevator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAElevator(); \
	friend struct Z_Construct_UClass_AElevator_Statics; \
public: \
	DECLARE_CLASS(AElevator, ATile, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AElevator)


#define Maze_3D_Source_Maze_3D_Elevator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AElevator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AElevator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElevator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElevator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElevator(AElevator&&); \
	NO_API AElevator(const AElevator&); \
public:


#define Maze_3D_Source_Maze_3D_Elevator_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AElevator(AElevator&&); \
	NO_API AElevator(const AElevator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElevator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElevator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElevator)


#define Maze_3D_Source_Maze_3D_Elevator_h_17_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_Elevator_h_14_PROLOG \
	Maze_3D_Source_Maze_3D_Elevator_h_17_EVENT_PARMS


#define Maze_3D_Source_Maze_3D_Elevator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Elevator_h_17_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Elevator_h_17_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_CALLBACK_WRAPPERS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_INCLASS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_Elevator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Elevator_h_17_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Elevator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_CALLBACK_WRAPPERS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Elevator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_Elevator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
