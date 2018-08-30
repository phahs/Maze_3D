// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MAZE_3D_Maze_3D_MenuMode_generated_h
#error "Maze_3D_MenuMode.generated.h already included, missing '#pragma once' in Maze_3D_MenuMode.h"
#endif
#define MAZE_3D_Maze_3D_MenuMode_generated_h

#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExitGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinueGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameLevel); \
		P_GET_STRUCT(FVector,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinueGame(Z_Param_gameLevel,Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayGame(); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExitGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinueGame) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_gameLevel); \
		P_GET_STRUCT(FVector,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinueGame(Z_Param_gameLevel,Z_Param_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayGame(); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze_3D_MenuMode(); \
	friend struct Z_Construct_UClass_AMaze_3D_MenuMode_Statics; \
public: \
	DECLARE_CLASS(AMaze_3D_MenuMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AMaze_3D_MenuMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAMaze_3D_MenuMode(); \
	friend struct Z_Construct_UClass_AMaze_3D_MenuMode_Statics; \
public: \
	DECLARE_CLASS(AMaze_3D_MenuMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AMaze_3D_MenuMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze_3D_MenuMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze_3D_MenuMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze_3D_MenuMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze_3D_MenuMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze_3D_MenuMode(AMaze_3D_MenuMode&&); \
	NO_API AMaze_3D_MenuMode(const AMaze_3D_MenuMode&); \
public:


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze_3D_MenuMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze_3D_MenuMode(AMaze_3D_MenuMode&&); \
	NO_API AMaze_3D_MenuMode(const AMaze_3D_MenuMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze_3D_MenuMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze_3D_MenuMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze_3D_MenuMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_23_PROLOG
#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_INCLASS \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_Maze_3D_MenuMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
