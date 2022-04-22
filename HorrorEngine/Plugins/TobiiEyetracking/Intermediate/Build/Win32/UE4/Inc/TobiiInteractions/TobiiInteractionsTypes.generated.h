// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOBIIINTERACTIONS_TobiiInteractionsTypes_generated_h
#error "TobiiInteractionsTypes.generated.h already included, missing '#pragma once' in TobiiInteractionsTypes.h"
#endif
#define TOBIIINTERACTIONS_TobiiInteractionsTypes_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics; \
	TOBIIINTERACTIONS_API static class UScriptStruct* StaticStruct();


template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<struct FTobiiProjectileTraceData>();

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics; \
	TOBIIINTERACTIONS_API static class UScriptStruct* StaticStruct();


template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<struct FTobiiBallisticResult>();

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics; \
	TOBIIINTERACTIONS_API static class UScriptStruct* StaticStruct();


template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<struct FTobiiAccelerationBasedHomingResult>();

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiBallisticData_Statics; \
	TOBIIINTERACTIONS_API static class UScriptStruct* StaticStruct();


template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<struct FTobiiBallisticData>();

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics; \
	TOBIIINTERACTIONS_API static class UScriptStruct* StaticStruct();


template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<struct FTobiiAccelerationBasedHomingData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiInteractions_Public_TobiiInteractionsTypes_h


#define FOREACH_ENUM_ETOBIITHROWATGAZERESULT(op) \
	op(ETobiiThrowAtGazeResult::UnknownError) \
	op(ETobiiThrowAtGazeResult::NoEyetrackingInput) \
	op(ETobiiThrowAtGazeResult::NoPath) \
	op(ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange) \
	op(ETobiiThrowAtGazeResult::BlockedByWorldInRange) \
	op(ETobiiThrowAtGazeResult::OutOfRange) \
	op(ETobiiThrowAtGazeResult::DirectHit) 

enum class ETobiiThrowAtGazeResult : uint8;
template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiThrowAtGazeResult>();

#define FOREACH_ENUM_ETOBIIINTERCEPTTYPE(op) \
	op(ETobiiInterceptType::ClosestApproach) \
	op(ETobiiInterceptType::DirectHit) 

enum class ETobiiInterceptType : uint8;
template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiInterceptType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
