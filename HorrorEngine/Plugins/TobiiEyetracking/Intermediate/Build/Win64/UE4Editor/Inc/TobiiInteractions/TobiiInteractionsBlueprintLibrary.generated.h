// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FTobiiProjectileTraceData;
struct FVector;
struct FHitResult;
struct FTobiiBallisticData;
struct FTobiiBallisticResult;
struct FTobiiAccelerationBasedHomingData;
struct FTobiiAccelerationBasedHomingResult;
struct FRotator;
#ifdef TOBIIINTERACTIONS_TobiiInteractionsBlueprintLibrary_generated_h
#error "TobiiInteractionsBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiInteractionsBlueprintLibrary.h"
#endif
#define TOBIIINTERACTIONS_TobiiInteractionsBlueprintLibrary_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_SPARSE_DATA
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath); \
	DECLARE_FUNCTION(execFindNeededInitialVelocityForBallisticProjectile); \
	DECLARE_FUNCTION(execFindNeededAccelerationForAccelerationBasedHomingProjectile); \
	DECLARE_FUNCTION(execFindRealQuarticRoots); \
	DECLARE_FUNCTION(execFindRealCubicRoots); \
	DECLARE_FUNCTION(execFindRealSquareRoots); \
	DECLARE_FUNCTION(execMakeInfiniteScreenCameraRotator); \
	DECLARE_FUNCTION(execCalculateSmoothPitchStep); \
	DECLARE_FUNCTION(execIsThrowAtGazeEnabled); \
	DECLARE_FUNCTION(execIsFireAtGazeEnabled); \
	DECLARE_FUNCTION(execIsAimAtGazeEnabled); \
	DECLARE_FUNCTION(execIsCleanUIEnabled); \
	DECLARE_FUNCTION(execIsInfiniteScreenEnabled);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceBallisticProjectilePath); \
	DECLARE_FUNCTION(execFindNeededInitialVelocityForBallisticProjectile); \
	DECLARE_FUNCTION(execFindNeededAccelerationForAccelerationBasedHomingProjectile); \
	DECLARE_FUNCTION(execFindRealQuarticRoots); \
	DECLARE_FUNCTION(execFindRealCubicRoots); \
	DECLARE_FUNCTION(execFindRealSquareRoots); \
	DECLARE_FUNCTION(execMakeInfiniteScreenCameraRotator); \
	DECLARE_FUNCTION(execCalculateSmoothPitchStep); \
	DECLARE_FUNCTION(execIsThrowAtGazeEnabled); \
	DECLARE_FUNCTION(execIsFireAtGazeEnabled); \
	DECLARE_FUNCTION(execIsAimAtGazeEnabled); \
	DECLARE_FUNCTION(execIsCleanUIEnabled); \
	DECLARE_FUNCTION(execIsInfiniteScreenEnabled);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiInteractionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiInteractionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiInteractionsBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiInteractionsBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiInteractionsBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiInteractions"), NO_API) \
	DECLARE_SERIALIZER(UTobiiInteractionsBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiInteractionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiInteractionsBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiInteractionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiInteractionsBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiInteractionsBlueprintLibrary(UTobiiInteractionsBlueprintLibrary&&); \
	NO_API UTobiiInteractionsBlueprintLibrary(const UTobiiInteractionsBlueprintLibrary&); \
public:


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiInteractionsBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiInteractionsBlueprintLibrary(UTobiiInteractionsBlueprintLibrary&&); \
	NO_API UTobiiInteractionsBlueprintLibrary(const UTobiiInteractionsBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiInteractionsBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiInteractionsBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiInteractionsBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_20_PROLOG
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiInteractionsBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIINTERACTIONS_API UClass* StaticClass<class UTobiiInteractionsBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
