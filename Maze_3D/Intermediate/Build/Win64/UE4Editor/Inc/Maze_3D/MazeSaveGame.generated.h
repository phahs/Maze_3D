// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MAZE_3D_MazeSaveGame_generated_h
#error "MazeSaveGame.generated.h already included, missing '#pragma once' in MazeSaveGame.h"
#endif
#define MAZE_3D_MazeSaveGame_generated_h

#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSaveName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSaveName(Z_Param_inName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSaveName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_inSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevel(Z_Param_inLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSaveName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSaveName(Z_Param_inName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSaveName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetSaveName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_inSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSize(Z_Param_inSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_inLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLevel(Z_Param_inLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMazeSaveGame(); \
	friend struct Z_Construct_UClass_UMazeSaveGame_Statics; \
public: \
	DECLARE_CLASS(UMazeSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(UMazeSaveGame)


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMazeSaveGame(); \
	friend struct Z_Construct_UClass_UMazeSaveGame_Statics; \
public: \
	DECLARE_CLASS(UMazeSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(UMazeSaveGame)


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSaveGame) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSaveGame); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSaveGame(UMazeSaveGame&&); \
	NO_API UMazeSaveGame(const UMazeSaveGame&); \
public:


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMazeSaveGame(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMazeSaveGame(UMazeSaveGame&&); \
	NO_API UMazeSaveGame(const UMazeSaveGame&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMazeSaveGame); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMazeSaveGame); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMazeSaveGame)


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_12_PROLOG
#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_INCLASS \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_MazeSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_MazeSaveGame_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
