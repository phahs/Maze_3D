// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MAZE_3D_Maze_3D_GameInstance_generated_h
#error "Maze_3D_GameInstance.generated.h already included, missing '#pragma once' in Maze_3D_GameInstance.h"
#endif
#define MAZE_3D_Maze_3D_GameInstance_generated_h

#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLevelInfo) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_level); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLevelInfo(Z_Param_Out_level,Z_Param_Out_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_level); \
		P_GET_STRUCT(FVector,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrepLevel(Z_Param_level,Z_Param_size); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLevelInfo) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_level); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SendLevelInfo(Z_Param_Out_level,Z_Param_Out_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepLevel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_level); \
		P_GET_STRUCT(FVector,Z_Param_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrepLevel(Z_Param_level,Z_Param_size); \
		P_NATIVE_END; \
	}


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaze_3D_GameInstance(); \
	friend struct Z_Construct_UClass_UMaze_3D_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UMaze_3D_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(UMaze_3D_GameInstance)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaze_3D_GameInstance(); \
	friend struct Z_Construct_UClass_UMaze_3D_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UMaze_3D_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Maze_3D"), NO_API) \
	DECLARE_SERIALIZER(UMaze_3D_GameInstance)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaze_3D_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaze_3D_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaze_3D_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaze_3D_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaze_3D_GameInstance(UMaze_3D_GameInstance&&); \
	NO_API UMaze_3D_GameInstance(const UMaze_3D_GameInstance&); \
public:


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaze_3D_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaze_3D_GameInstance(UMaze_3D_GameInstance&&); \
	NO_API UMaze_3D_GameInstance(const UMaze_3D_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaze_3D_GameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaze_3D_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaze_3D_GameInstance)


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_14_PROLOG
#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_RPC_WRAPPERS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_INCLASS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_INCLASS_NO_PURE_DECLS \
	Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Maze_3D_Source_Maze_3D_Maze_3D_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
