// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAZE_3D_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define MAZE_3D_Tile_generated_h

#define Maze_3D_Source_Maze_3D_Tile_h_12_RPC_WRAPPERS
#define Maze_3D_Source_Maze_3D_Tile_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Maze_3D_Source_Maze_3D_Tile_h_12_EVENT_PARMS \
	struct Tile_eventMakeExitRoom_Parms \
	{ \
		int32 ExitDirection; \
	}; \
	struct Tile_eventRemoveWall_Parms \
	{ \
		int32 dir; \
	};


#define Maze_3D_Source_Maze_3D_Tile_h_12_CALLBACK_WRAPPERS
#define Maze_3D_Source_Maze_3D_Tile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Maze_3D_Source_Maze_3D_Tile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define Maze_3D_Source_Maze_3D_Tile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define Maze_3D_Source_Maze_3D_Tile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define Maze_3D_Source_Maze_3D_Tile_h_12_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_Tile_h_9_PROLOG \
	Maze_3D_Source_Maze_3D_Tile_h_12_EVENT_PARMS


#define Maze_3D_Source_Maze_3D_Tile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Tile_h_12_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Tile_h_12_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_Tile_h_12_CALLBACK_WRAPPERS \
	Maze_3D_Source_Maze_3D_Tile_h_12_INCLASS \
	Maze_3D_Source_Maze_3D_Tile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_Tile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Tile_h_12_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Tile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Tile_h_12_CALLBACK_WRAPPERS \
	Maze_3D_Source_Maze_3D_Tile_h_12_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Tile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
