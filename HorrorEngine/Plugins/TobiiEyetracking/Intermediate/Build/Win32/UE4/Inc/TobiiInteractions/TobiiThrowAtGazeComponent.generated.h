// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTobiiBallisticResult;
enum class ETobiiThrowAtGazeResult : uint8;
#ifdef TOBIIINTERACTIONS_TobiiThrowAtGazeComponent_generated_h
#error "TobiiThrowAtGazeComponent.generated.h already included, missing '#pragma once' in TobiiThrowAtGazeComponent.h"
#endif
#define TOBIIINTERACTIONS_TobiiThrowAtGazeComponent_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_SPARSE_DATA
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateThrowArc); \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVector); \
	DECLARE_FUNCTION(execCorrectThrow); \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath); \
	DECLARE_FUNCTION(execThrowAtGazeAvailable); \
	DECLARE_FUNCTION(execCalculateProjectileGravityVector);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateThrowArc); \
	DECLARE_FUNCTION(execCalculateThrowAtGazeVector); \
	DECLARE_FUNCTION(execCorrectThrow); \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath); \
	DECLARE_FUNCTION(execThrowAtGazeAvailable); \
	DECLARE_FUNCTION(execCalculateProjectileGravityVector);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiThrowAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiThrowAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiThrowAtGazeComponent)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiThrowAtGazeComponent(); \
	friend struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics; \
public: \
	DECLARE_CLASS(UTobiiThrowAtGazeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiThrowAtGazeComponent)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiThrowAtGazeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiThrowAtGazeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiThrowAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiThrowAtGazeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiThrowAtGazeComponent(UTobiiThrowAtGazeComponent&&); \
	NO_API UTobiiThrowAtGazeComponent(const UTobiiThrowAtGazeComponent&); \
public:


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiThrowAtGazeComponent(UTobiiThrowAtGazeComponent&&); \
	NO_API UTobiiThrowAtGazeComponent(const UTobiiThrowAtGazeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiThrowAtGazeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiThrowAtGazeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTobiiThrowAtGazeComponent)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_21_PROLOG
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_RPC_WRAPPERS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_INCLASS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIINTERACTIONS_API UClass* StaticClass<class UTobiiThrowAtGazeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_Common_TobiiThrowAtGazeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
