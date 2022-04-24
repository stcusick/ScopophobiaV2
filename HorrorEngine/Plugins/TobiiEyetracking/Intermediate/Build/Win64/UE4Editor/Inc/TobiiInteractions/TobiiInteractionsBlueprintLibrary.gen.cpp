// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/TobiiInteractionsBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiInteractionsBlueprintLibrary() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticData();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiProjectileTraceData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execTraceBallisticProjectilePath)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTobiiProjectileTraceData,Z_Param_Out_InputData);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::TraceBallisticProjectilePath(Z_Param_WorldContextObject,Z_Param_Out_InputData,Z_Param_Out_OutTracedPath,Z_Param_Out_OutHitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execFindNeededInitialVelocityForBallisticProjectile)
	{
		P_GET_STRUCT_REF(FTobiiBallisticData,Z_Param_Out_InputData);
		P_GET_TARRAY_REF(FTobiiBallisticResult,Z_Param_Out_Results);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededInitialVelocityForBallisticProjectile(Z_Param_Out_InputData,Z_Param_Out_Results);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execFindNeededAccelerationForAccelerationBasedHomingProjectile)
	{
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingData,Z_Param_Out_InputData);
		P_GET_STRUCT_REF(FTobiiAccelerationBasedHomingResult,Z_Param_Out_BestResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::FindNeededAccelerationForAccelerationBasedHomingProjectile(Z_Param_Out_InputData,Z_Param_Out_BestResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execFindRealQuarticRoots)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_C);
		P_GET_PROPERTY(FFloatProperty,Z_Param_D);
		P_GET_PROPERTY(FFloatProperty,Z_Param_E);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiInteractionsBlueprintLibrary::FindRealQuarticRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_E,Z_Param_Out_OutRealRoots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execFindRealCubicRoots)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_C);
		P_GET_PROPERTY(FFloatProperty,Z_Param_D);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiInteractionsBlueprintLibrary::FindRealCubicRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_D,Z_Param_Out_OutRealRoots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execFindRealSquareRoots)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_GET_PROPERTY(FFloatProperty,Z_Param_C);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutRealRoots);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiInteractionsBlueprintLibrary::FindRealSquareRoots(Z_Param_A,Z_Param_B,Z_Param_C,Z_Param_Out_OutRealRoots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execMakeInfiniteScreenCameraRotator)
	{
		P_GET_STRUCT(FRotator,Z_Param_OriginalCameraRotation);
		P_GET_STRUCT(FRotator,Z_Param_InfiniteScreenAngles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::MakeInfiniteScreenCameraRotator(Z_Param_OriginalCameraRotation,Z_Param_InfiniteScreenAngles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execCalculateSmoothPitchStep)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ViewPitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::CalculateSmoothPitchStep(Z_Param_ViewPitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execIsThrowAtGazeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsThrowAtGazeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execIsFireAtGazeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsFireAtGazeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execIsAimAtGazeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsAimAtGazeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execIsCleanUIEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsCleanUIEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiInteractionsBlueprintLibrary::execIsInfiniteScreenEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiInteractionsBlueprintLibrary::IsInfiniteScreenEnabled();
		P_NATIVE_END;
	}
	void UTobiiInteractionsBlueprintLibrary::StaticRegisterNativesUTobiiInteractionsBlueprintLibrary()
	{
		UClass* Class = UTobiiInteractionsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateSmoothPitchStep", &UTobiiInteractionsBlueprintLibrary::execCalculateSmoothPitchStep },
			{ "FindNeededAccelerationForAccelerationBasedHomingProjectile", &UTobiiInteractionsBlueprintLibrary::execFindNeededAccelerationForAccelerationBasedHomingProjectile },
			{ "FindNeededInitialVelocityForBallisticProjectile", &UTobiiInteractionsBlueprintLibrary::execFindNeededInitialVelocityForBallisticProjectile },
			{ "FindRealCubicRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealCubicRoots },
			{ "FindRealQuarticRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealQuarticRoots },
			{ "FindRealSquareRoots", &UTobiiInteractionsBlueprintLibrary::execFindRealSquareRoots },
			{ "IsAimAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsAimAtGazeEnabled },
			{ "IsCleanUIEnabled", &UTobiiInteractionsBlueprintLibrary::execIsCleanUIEnabled },
			{ "IsFireAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsFireAtGazeEnabled },
			{ "IsInfiniteScreenEnabled", &UTobiiInteractionsBlueprintLibrary::execIsInfiniteScreenEnabled },
			{ "IsThrowAtGazeEnabled", &UTobiiInteractionsBlueprintLibrary::execIsThrowAtGazeEnabled },
			{ "MakeInfiniteScreenCameraRotator", &UTobiiInteractionsBlueprintLibrary::execMakeInfiniteScreenCameraRotator },
			{ "TraceBallisticProjectilePath", &UTobiiInteractionsBlueprintLibrary::execTraceBallisticProjectilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventCalculateSmoothPitchStep_Parms
		{
			float ViewPitch;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewPitch;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::NewProp_ViewPitch = { "ViewPitch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventCalculateSmoothPitchStep_Parms, ViewPitch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventCalculateSmoothPitchStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::NewProp_ViewPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Infinite Screen" },
		{ "Comment", "/**\n\x09  * This function will determine an appropriate amount to dampen infinite screen depending on view pitch.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will determine an appropriate amount to dampen infinite screen depending on view pitch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "CalculateSmoothPitchStep", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventCalculateSmoothPitchStep_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms
		{
			FTobiiAccelerationBasedHomingData InputData;
			FTobiiAccelerationBasedHomingResult BestResult;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BestResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms, InputData), Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_BestResult = { "BestResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms, BestResult), Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_InputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_BestResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will try to find which acceleration you will need for the current frame to hit a certain target given a homing projectile that uses acceleration for it's movement behavior.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will try to find which acceleration you will need for the current frame to hit a certain target given a homing projectile that uses acceleration for it's movement behavior." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "FindNeededAccelerationForAccelerationBasedHomingProjectile", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededAccelerationForAccelerationBasedHomingProjectile_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms
		{
			FTobiiBallisticData InputData;
			TArray<FTobiiBallisticResult> Results;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms, InputData), Z_Construct_UScriptStruct_FTobiiBallisticData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTobiiBallisticResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_InputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will try to find the initial velocity needed to hit a moving target with a ballistic projectile that passes through a selected apex point.\n\x09  * To find an arc that works with your environment and thrower you might have to call this function multiple times and trace the results in your scene.\n\x09  * \n\x09  * @return Whether a valid velocity could be found. If this is false, it usually means that SourceZ + ProjectileApexOffset was smaller than TargetZ. Try increasing the apex offset and try again.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will try to find the initial velocity needed to hit a moving target with a ballistic projectile that passes through a selected apex point.\nTo find an arc that works with your environment and thrower you might have to call this function multiple times and trace the results in your scene.\n\n@return Whether a valid velocity could be found. If this is false, it usually means that SourceZ + ProjectileApexOffset was smaller than TargetZ. Try increasing the apex offset and try again." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "FindNeededInitialVelocityForBallisticProjectile", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventFindNeededInitialVelocityForBallisticProjectile_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms
		{
			float A;
			float B;
			float C;
			float D;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_D;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, D), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots_Inner = { "OutRealRoots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots = { "OutRealRoots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms, OutRealRoots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::NewProp_OutRealRoots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will find and return all real roots to the cubic equation Ax^3 + Bx^2 + Cx + D = 0\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the cubic equation Ax^3 + Bx^2 + Cx + D = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "FindRealCubicRoots", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealCubicRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms
		{
			float A;
			float B;
			float C;
			float D;
			float E;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_D;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_E;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, D), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_E = { "E", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, E), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots_Inner = { "OutRealRoots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots = { "OutRealRoots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms, OutRealRoots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::NewProp_OutRealRoots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will find and return all real roots to the quartic equation Ax^4 + Bx^3 + Cx^2 + Dx + E = 0\n\x09  * WARNING: The roots of a full degree quartic are generally not cheap to compute. Use with care.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the quartic equation Ax^4 + Bx^3 + Cx^2 + Dx + E = 0\nWARNING: The roots of a full degree quartic are generally not cheap to compute. Use with care." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "FindRealQuarticRoots", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealQuarticRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms
		{
			float A;
			float B;
			float C;
			TArray<float> OutRealRoots;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRealRoots_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutRealRoots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, C), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots_Inner = { "OutRealRoots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots = { "OutRealRoots", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms, OutRealRoots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::NewProp_OutRealRoots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "FindRealSquareRoots", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventFindRealSquareRoots_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "IsAimAtGazeEnabled", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventIsAimAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "Comment", "//Util functions to see if the feature can be considered enabled by the user.\n" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "Util functions to see if the feature can be considered enabled by the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "IsCleanUIEnabled", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventIsCleanUIEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "IsFireAtGazeEnabled", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventIsFireAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "IsInfiniteScreenEnabled", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventIsInfiniteScreenEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Interaction" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "IsThrowAtGazeEnabled", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventIsThrowAtGazeEnabled_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventMakeInfiniteScreenCameraRotator_Parms
		{
			FRotator OriginalCameraRotation;
			FRotator InfiniteScreenAngles;
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalCameraRotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfiniteScreenAngles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_OriginalCameraRotation = { "OriginalCameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventMakeInfiniteScreenCameraRotator_Parms, OriginalCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_InfiniteScreenAngles = { "InfiniteScreenAngles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventMakeInfiniteScreenCameraRotator_Parms, InfiniteScreenAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventMakeInfiniteScreenCameraRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_OriginalCameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_InfiniteScreenAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Infinite Screen" },
		{ "Comment", "/**\n\x09  * This function will determine an appropriate amount to dampen infinite screen depending on view pitch.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will determine an appropriate amount to dampen infinite screen depending on view pitch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "MakeInfiniteScreenCameraRotator", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventMakeInfiniteScreenCameraRotator_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics
	{
		struct TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms
		{
			UObject* WorldContextObject;
			FTobiiProjectileTraceData InputData;
			TArray<FVector> OutTracedPath;
			FHitResult OutHitResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTracedPath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTracedPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHitResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData = { "InputData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, InputData), Z_Construct_UScriptStruct_FTobiiProjectileTraceData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner = { "OutTracedPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath = { "OutTracedPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, OutTracedPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutHitResult = { "OutHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms, OutHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms), &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_InputData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_OutHitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will trace along a ballistic path until it hits something. It will then return the traced path as well as what it hit.\n\x09  *\n\x09  * @return Whether anything was hit tracing the path\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "This function will trace along a ballistic path until it hits something. It will then return the traced path as well as what it hit.\n\n@return Whether anything was hit tracing the path" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, nullptr, "TraceBallisticProjectilePath", nullptr, nullptr, sizeof(TobiiInteractionsBlueprintLibrary_eventTraceBallisticProjectilePath_Parms), Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_NoRegister()
	{
		return UTobiiInteractionsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_CalculateSmoothPitchStep, "CalculateSmoothPitchStep" }, // 1324587008
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededAccelerationForAccelerationBasedHomingProjectile, "FindNeededAccelerationForAccelerationBasedHomingProjectile" }, // 3871879717
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindNeededInitialVelocityForBallisticProjectile, "FindNeededInitialVelocityForBallisticProjectile" }, // 1775046364
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealCubicRoots, "FindRealCubicRoots" }, // 3624101159
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealQuarticRoots, "FindRealQuarticRoots" }, // 2673095170
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_FindRealSquareRoots, "FindRealSquareRoots" }, // 50072865
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsAimAtGazeEnabled, "IsAimAtGazeEnabled" }, // 3852519940
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsCleanUIEnabled, "IsCleanUIEnabled" }, // 4269839014
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsFireAtGazeEnabled, "IsFireAtGazeEnabled" }, // 389096064
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsInfiniteScreenEnabled, "IsInfiniteScreenEnabled" }, // 3180401185
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_IsThrowAtGazeEnabled, "IsThrowAtGazeEnabled" }, // 582900839
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_MakeInfiniteScreenCameraRotator, "MakeInfiniteScreenCameraRotator" }, // 431495818
		{ &Z_Construct_UFunction_UTobiiInteractionsBlueprintLibrary_TraceBallisticProjectilePath, "TraceBallisticProjectilePath" }, // 1429981451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP.\n */" },
		{ "IncludePath", "TobiiInteractionsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiInteractionsBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::ClassParams = {
		&UTobiiInteractionsBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiInteractionsBlueprintLibrary, 1526929043);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiInteractionsBlueprintLibrary>()
	{
		return UTobiiInteractionsBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiInteractionsBlueprintLibrary(Z_Construct_UClass_UTobiiInteractionsBlueprintLibrary, &UTobiiInteractionsBlueprintLibrary::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiInteractionsBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiInteractionsBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
