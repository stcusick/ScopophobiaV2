// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FVector;
class UWidgetComponent;
class UWidgetInteractionComponent;
struct FTobiiGazeFocusData;
class UWidget;
class USceneComponent;
class UPrimitiveComponent;
struct FHitResult;
class APlayerController;
#ifdef TOBIIGTOM_TobiiGTOMBlueprintLibrary_generated_h
#error "TobiiGTOMBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiGTOMBlueprintLibrary.h"
#endif
#define TOBIIGTOM_TobiiGTOMBlueprintLibrary_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_SPARSE_DATA
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUniformlyDistributedRandomCirclePoint); \
	DECLARE_FUNCTION(execTestRectEllipseIntersection); \
	DECLARE_FUNCTION(execTestConeSphereIntersection); \
	DECLARE_FUNCTION(execTransformWorldPointToWidgetLocal); \
	DECLARE_FUNCTION(execTransformWidgetLocalPointToWorld); \
	DECLARE_FUNCTION(execFindLargestInscribedAlignedRect); \
	DECLARE_FUNCTION(execEmulateGazeFocusUsingWidgetInteractionComponent); \
	DECLARE_FUNCTION(execMakeGazeFocusDataForWidgetInteractionComponent); \
	DECLARE_FUNCTION(execRegisterScreenSpaceGazeFocusableWidgets); \
	DECLARE_FUNCTION(execGetPrimitiveComponentFocusLocation); \
	DECLARE_FUNCTION(execGetPrimitiveComponentFocusOffset); \
	DECLARE_FUNCTION(execIsWidgetGazeFocusable); \
	DECLARE_FUNCTION(execIsPrimitiveComponentGazeFocusable); \
	DECLARE_FUNCTION(execGetNaiveGazeHit); \
	DECLARE_FUNCTION(execGetAllFilteredGazeFocusData); \
	DECLARE_FUNCTION(execGetFilteredGazeFocusData); \
	DECLARE_FUNCTION(execGetAllGazeFocusData); \
	DECLARE_FUNCTION(execGetGazeFocusData); \
	DECLARE_FUNCTION(execSetGTOMPlayerController);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUniformlyDistributedRandomCirclePoint); \
	DECLARE_FUNCTION(execTestRectEllipseIntersection); \
	DECLARE_FUNCTION(execTestConeSphereIntersection); \
	DECLARE_FUNCTION(execTransformWorldPointToWidgetLocal); \
	DECLARE_FUNCTION(execTransformWidgetLocalPointToWorld); \
	DECLARE_FUNCTION(execFindLargestInscribedAlignedRect); \
	DECLARE_FUNCTION(execEmulateGazeFocusUsingWidgetInteractionComponent); \
	DECLARE_FUNCTION(execMakeGazeFocusDataForWidgetInteractionComponent); \
	DECLARE_FUNCTION(execRegisterScreenSpaceGazeFocusableWidgets); \
	DECLARE_FUNCTION(execGetPrimitiveComponentFocusLocation); \
	DECLARE_FUNCTION(execGetPrimitiveComponentFocusOffset); \
	DECLARE_FUNCTION(execIsWidgetGazeFocusable); \
	DECLARE_FUNCTION(execIsPrimitiveComponentGazeFocusable); \
	DECLARE_FUNCTION(execGetNaiveGazeHit); \
	DECLARE_FUNCTION(execGetAllFilteredGazeFocusData); \
	DECLARE_FUNCTION(execGetFilteredGazeFocusData); \
	DECLARE_FUNCTION(execGetAllGazeFocusData); \
	DECLARE_FUNCTION(execGetGazeFocusData); \
	DECLARE_FUNCTION(execSetGTOMPlayerController);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGTOMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiGTOMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGTOMBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGTOMBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiGTOMBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGTOMBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGTOMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGTOMBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGTOMBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGTOMBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGTOMBlueprintLibrary(UTobiiGTOMBlueprintLibrary&&); \
	NO_API UTobiiGTOMBlueprintLibrary(const UTobiiGTOMBlueprintLibrary&); \
public:


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGTOMBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGTOMBlueprintLibrary(UTobiiGTOMBlueprintLibrary&&); \
	NO_API UTobiiGTOMBlueprintLibrary(const UTobiiGTOMBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGTOMBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGTOMBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGTOMBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_21_PROLOG
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_RPC_WRAPPERS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_INCLASS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiGTOMBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiGTOMBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
