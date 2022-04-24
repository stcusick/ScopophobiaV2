// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FVector;
struct FVector2D;
struct FTobiiDesktopTrackBox;
struct FTobiiHeadPoseData;
struct FRotator;
struct FTobiiDisplayInfo;
enum class ETobiiGazeTrackerStatus : uint8;
struct FHitResult;
struct FTobiiGazeData;
#ifdef TOBIICORE_TobiiBlueprintLibrary_generated_h
#error "TobiiBlueprintLibrary.generated.h already included, missing '#pragma once' in TobiiBlueprintLibrary.h"
#endif
#define TOBIICORE_TobiiBlueprintLibrary_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_SPARSE_DATA
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsXRPlayerController); \
	DECLARE_FUNCTION(execConvertGazeToUserSpace); \
	DECLARE_FUNCTION(execViewportUNormCoordToPixelCoord); \
	DECLARE_FUNCTION(execViewportPixelCoordToUNormCoord); \
	DECLARE_FUNCTION(execViewportCmCoordToPixelCoord); \
	DECLARE_FUNCTION(execViewportPixelCoordToCmCoord); \
	DECLARE_FUNCTION(execViewportCoordinateUNormToVirtualDesktopPixel); \
	DECLARE_FUNCTION(execVirtualDesktopPixelToViewportCoordinateUNorm); \
	DECLARE_FUNCTION(execSaveTobiiSetting); \
	DECLARE_FUNCTION(execLoadTobiiSettings); \
	DECLARE_FUNCTION(execSetTobiiFloat); \
	DECLARE_FUNCTION(execGetTobiiFloat); \
	DECLARE_FUNCTION(execSetTobiiInt); \
	DECLARE_FUNCTION(execGetTobiiInt); \
	DECLARE_FUNCTION(execGetTobiiDesktopTrackBox); \
	DECLARE_FUNCTION(execGetTobiiHeadPoseData); \
	DECLARE_FUNCTION(execGetTobiiInfiniteScreenAngles); \
	DECLARE_FUNCTION(execGetTobiiDisplayInformation); \
	DECLARE_FUNCTION(execGetTobiiGazeTrackerStatus); \
	DECLARE_FUNCTION(execGetTobiiCombinedWorldGazeHitData); \
	DECLARE_FUNCTION(execGetTobiiRightGazeData); \
	DECLARE_FUNCTION(execGetTobiiLeftGazeData); \
	DECLARE_FUNCTION(execGetTobiiCombinedGazeData); \
	DECLARE_FUNCTION(execGetTobiiEyetrackingFrozen); \
	DECLARE_FUNCTION(execSetTobiiEyetrackingFrozen); \
	DECLARE_FUNCTION(execGetTobiiEyetrackingEnabled); \
	DECLARE_FUNCTION(execSetTobiiEyetrackingEnabled);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsXRPlayerController); \
	DECLARE_FUNCTION(execConvertGazeToUserSpace); \
	DECLARE_FUNCTION(execViewportUNormCoordToPixelCoord); \
	DECLARE_FUNCTION(execViewportPixelCoordToUNormCoord); \
	DECLARE_FUNCTION(execViewportCmCoordToPixelCoord); \
	DECLARE_FUNCTION(execViewportPixelCoordToCmCoord); \
	DECLARE_FUNCTION(execViewportCoordinateUNormToVirtualDesktopPixel); \
	DECLARE_FUNCTION(execVirtualDesktopPixelToViewportCoordinateUNorm); \
	DECLARE_FUNCTION(execSaveTobiiSetting); \
	DECLARE_FUNCTION(execLoadTobiiSettings); \
	DECLARE_FUNCTION(execSetTobiiFloat); \
	DECLARE_FUNCTION(execGetTobiiFloat); \
	DECLARE_FUNCTION(execSetTobiiInt); \
	DECLARE_FUNCTION(execGetTobiiInt); \
	DECLARE_FUNCTION(execGetTobiiDesktopTrackBox); \
	DECLARE_FUNCTION(execGetTobiiHeadPoseData); \
	DECLARE_FUNCTION(execGetTobiiInfiniteScreenAngles); \
	DECLARE_FUNCTION(execGetTobiiDisplayInformation); \
	DECLARE_FUNCTION(execGetTobiiGazeTrackerStatus); \
	DECLARE_FUNCTION(execGetTobiiCombinedWorldGazeHitData); \
	DECLARE_FUNCTION(execGetTobiiRightGazeData); \
	DECLARE_FUNCTION(execGetTobiiLeftGazeData); \
	DECLARE_FUNCTION(execGetTobiiCombinedGazeData); \
	DECLARE_FUNCTION(execGetTobiiEyetrackingFrozen); \
	DECLARE_FUNCTION(execSetTobiiEyetrackingFrozen); \
	DECLARE_FUNCTION(execGetTobiiEyetrackingEnabled); \
	DECLARE_FUNCTION(execSetTobiiEyetrackingEnabled);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiCore"), NO_API) \
	DECLARE_SERIALIZER(UTobiiBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTobiiBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiCore"), NO_API) \
	DECLARE_SERIALIZER(UTobiiBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiBlueprintLibrary(UTobiiBlueprintLibrary&&); \
	NO_API UTobiiBlueprintLibrary(const UTobiiBlueprintLibrary&); \
public:


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiBlueprintLibrary(UTobiiBlueprintLibrary&&); \
	NO_API UTobiiBlueprintLibrary(const UTobiiBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiBlueprintLibrary)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_20_PROLOG
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIICORE_API UClass* StaticClass<class UTobiiBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiCore_Public_TobiiBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
