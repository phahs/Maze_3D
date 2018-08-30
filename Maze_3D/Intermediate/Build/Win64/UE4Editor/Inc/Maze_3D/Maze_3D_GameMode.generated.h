// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMazePlayer;
struct FVector;
#ifdef MAZE_3D_Maze_3D_GameMode_generated_h
#error "Maze_3D_GameMode.generated.h already included, missing '#pragma once' in Maze_3D_GameMode.h"
#endif
#define MAZE_3D_Maze_3D_GameMode_generated_h

#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_21_DELEGATE \
struct _Script_Maze_3D_eventCheckLocation_Parms \
{ \
	const AMazePlayer* Player; \
	FVector CurrentLocation; \
}; \
static inline void FCheckLocation_DelegateWrapper(const FMulticastScriptDelegate& CheckLocation, const AMazePlayer* Player, FVector CurrentLocation) \
{ \
	_Script_Maze_3D_eventCheckLocation_Parms Parms; \
	Parms.Player=Player; \
	Parms.CurrentLocation=CurrentLocation; \
	CheckLocation.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_20_DELEGATE \
static inline void FStartNewLevel_DelegateWrapper(const FMulticastScriptDelegate& StartNewLevel) \
{ \
	StartNewLevel.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerSpawned) \
	{ \
		P_GET_OBJECT(AMazePlayer,Z_Param_player); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerSpawned(Z_Param_player,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitFound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMazeLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMazeSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitGame(Z_Param_MapName,Z_Param_Options,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerSpawned) \
	{ \
		P_GET_OBJECT(AMazePlayer,Z_Param_player); \
		P_GET_STRUCT(FVector,Z_Param_location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerSpawned(Z_Param_player,Z_Param_location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitFound) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitFound(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMazeLevel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMazeSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMazeSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitGame) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Options); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_ErrorMessage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitGame(Z_Param_MapName,Z_Param_Options,Z_Param_Out_ErrorMessage); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze_3D_GameMode(); \
	friend struct Z_Construct_UClass_AMaze_3D_GameMode_Statics; \
public: \
	DECLARE_CLASS(AMaze_3D_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AMaze_3D_GameMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAMaze_3D_GameMode(); \
	friend struct Z_Construct_UClass_AMaze_3D_GameMode_Statics; \
public: \
	DECLARE_CLASS(AMaze_3D_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(AMaze_3D_GameMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze_3D_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze_3D_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze_3D_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze_3D_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze_3D_GameMode(AMaze_3D_GameMode&&); \
	NO_API AMaze_3D_GameMode(const AMaze_3D_GameMode&); \
public:


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze_3D_GameMode(AMaze_3D_GameMode&&); \
	NO_API AMaze_3D_GameMode(const AMaze_3D_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze_3D_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze_3D_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze_3D_GameMode)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_35_PROLOG
#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_INCLASS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_Maze_3D_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
