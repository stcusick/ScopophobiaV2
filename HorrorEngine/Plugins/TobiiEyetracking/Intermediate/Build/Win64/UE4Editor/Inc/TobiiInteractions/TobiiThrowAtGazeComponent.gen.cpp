// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Common/TobiiThrowAtGazeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiThrowAtGazeComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticResult();
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execCalculateThrowArc)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetAcceleration);
		P_GET_STRUCT_REF(FTobiiBallisticResult,Z_Param_Out_OutBallisticResult);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowArc(Z_Param_Out_ThrowOrigin,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_Out_TargetAcceleration,Z_Param_Out_OutBallisticResult,Z_Param_Out_OutTracedPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execCalculateThrowAtGazeVector)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin);
		P_GET_STRUCT_REF(FTobiiBallisticResult,Z_Param_Out_OutBallisticResult);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETobiiThrowAtGazeResult*)Z_Param__Result=P_THIS->CalculateThrowAtGazeVector(Z_Param_Out_ThrowOrigin,Z_Param_Out_OutBallisticResult,Z_Param_Out_OutTracedPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execCorrectThrow)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ThrowOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OriginalThrowVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowAngleThresholdDeg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThrowSpeedThresholdCmPerSec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CorrectThrow(Z_Param_Out_ThrowOrigin,Z_Param_Out_OriginalThrowVector,Z_Param_ThrowAngleThresholdDeg,Z_Param_ThrowSpeedThresholdCmPerSec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execTraceBallisticProjectilePath)
	{
		P_GET_STRUCT(FVector,Z_Param_ProjectileOrigin);
		P_GET_STRUCT(FVector,Z_Param_ProjectileInitialVelocity);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutTracedPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TraceBallisticProjectilePath(Z_Param_ProjectileOrigin,Z_Param_ProjectileInitialVelocity,Z_Param_Out_OutTracedPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execThrowAtGazeAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ThrowAtGazeAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiThrowAtGazeComponent::execCalculateProjectileGravityVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateProjectileGravityVector();
		P_NATIVE_END;
	}
	void UTobiiThrowAtGazeComponent::StaticRegisterNativesUTobiiThrowAtGazeComponent()
	{
		UClass* Class = UTobiiThrowAtGazeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateProjectileGravityVector", &UTobiiThrowAtGazeComponent::execCalculateProjectileGravityVector },
			{ "CalculateThrowArc", &UTobiiThrowAtGazeComponent::execCalculateThrowArc },
			{ "CalculateThrowAtGazeVector", &UTobiiThrowAtGazeComponent::execCalculateThrowAtGazeVector },
			{ "CorrectThrow", &UTobiiThrowAtGazeComponent::execCorrectThrow },
			{ "ThrowAtGazeAvailable", &UTobiiThrowAtGazeComponent::execThrowAtGazeAvailable },
			{ "TraceBallisticProjectilePath", &UTobiiThrowAtGazeComponent::execTraceBallisticProjectilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateProjectileGravityVector_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateProjectileGravityVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateProjectileGravityVector", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventCalculateProjectileGravityVector_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms
		{
			FVector ThrowOrigin;
			FVector TargetLocation;
			FVector TargetVelocity;
			FVector TargetAcceleration;
			FTobiiBallisticResult OutBallisticResult;
			TArray<FVector> OutTracedPath;
			ETobiiThrowAtGazeResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAcceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBallisticResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTracedPath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTracedPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ThrowOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ThrowOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetAcceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetAcceleration = { "TargetAcceleration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, TargetAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetAcceleration_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutBallisticResult = { "OutBallisticResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, OutBallisticResult), Z_Construct_UScriptStruct_FTobiiBallisticResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutTracedPath_Inner = { "OutTracedPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutTracedPath = { "OutTracedPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, OutTracedPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ThrowOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_TargetAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutBallisticResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutTracedPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_OutTracedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "/**\n\x09  * This is a companion function to CalculateThrowAtGazeVectorComplex that lets you calculate a throw vector towards a world location.\n\x09  * You can specify target velocity and acceleration if you would like to.\n\x09  *\n\x09  * @param ThrowOrigin\x09\x09\x09This is where the projectile will start.\n\x09  * @param TargetLocation\x09\x09This is where the target is.\n\x09  * @param TargetVelocity\x09\x09This is the target's velocity. Can be zero.\n\x09  * @param TargetAcceleration\x09This is the target's acceleration. Can be zero.\n\x09  * @param OutBallisticResult\x09This are our results.\n\x09  * @param OutTracedPath\x09\x09If path tracing is on, this will contain the traced path.\n\x09  * @return\x09\x09\x09\x09\x09\x09The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed\n\x09  */" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is a companion function to CalculateThrowAtGazeVectorComplex that lets you calculate a throw vector towards a world location.\nYou can specify target velocity and acceleration if you would like to.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param TargetLocation               This is where the target is.\n@param TargetVelocity               This is the target's velocity. Can be zero.\n@param TargetAcceleration   This is the target's acceleration. Can be zero.\n@param OutBallisticResult   This are our results.\n@param OutTracedPath                If path tracing is on, this will contain the traced path.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowArc", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowArc_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms
		{
			FVector ThrowOrigin;
			FTobiiBallisticResult OutBallisticResult;
			TArray<FVector> OutTracedPath;
			ETobiiThrowAtGazeResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutBallisticResult;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTracedPath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTracedPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ThrowOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ThrowOrigin_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutBallisticResult = { "OutBallisticResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms, OutBallisticResult), Z_Construct_UScriptStruct_FTobiiBallisticResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutTracedPath_Inner = { "OutTracedPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutTracedPath = { "OutTracedPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms, OutTracedPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms, ReturnValue), Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ThrowOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutBallisticResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutTracedPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_OutTracedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "/**\n\x09  * Call this function to request an impulse vector to use for gaze throwing.\n\x09  * This function will start by testing the standard apex and force, and if that works it will just return it.\n\x09  * If no solution is found, the algorithm will test other apex heights until either MaxNrIterations is reached or a result is found.\n\x09  *\n\x09  * @param ThrowOrigin\x09\x09\x09This is where the projectile will start.\n\x09  * @param OutBallisticResult\x09This are our results.\n\x09  * @param OutTracedPath\x09\x09If path tracing is on, this will contain the traced path.\n\x09  * @return\x09\x09\x09\x09\x09\x09The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed\n\x09  */" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Call this function to request an impulse vector to use for gaze throwing.\nThis function will start by testing the standard apex and force, and if that works it will just return it.\nIf no solution is found, the algorithm will test other apex heights until either MaxNrIterations is reached or a result is found.\n\n@param ThrowOrigin                  This is where the projectile will start.\n@param OutBallisticResult   This are our results.\n@param OutTracedPath                If path tracing is on, this will contain the traced path.\n@return                                             The result of the calculation. Please note that in the case of OutOfRange, the best solution will still be returned in OutGazeThrowVector, adjusted to your max throw speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CalculateThrowAtGazeVector", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventCalculateThrowAtGazeVector_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics
	{
		struct TobiiThrowAtGazeComponent_eventCorrectThrow_Parms
		{
			FVector ThrowOrigin;
			FVector OriginalThrowVector;
			float ThrowAngleThresholdDeg;
			float ThrowSpeedThresholdCmPerSec;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalThrowVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalThrowVector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowAngleThresholdDeg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowSpeedThresholdCmPerSec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin = { "ThrowOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector = { "OriginalThrowVector", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, OriginalThrowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowAngleThresholdDeg = { "ThrowAngleThresholdDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowAngleThresholdDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowSpeedThresholdCmPerSec = { "ThrowSpeedThresholdCmPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ThrowSpeedThresholdCmPerSec), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_OriginalThrowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowAngleThresholdDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ThrowSpeedThresholdCmPerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "/**\n\x09  * This function is useful when throwing things in XR and you have a throw vector from the player's attempt to throw something.\n\x09  * Don't forget to set collision on the thing you're throwing etc before using this though, otherwise tracing might not work.\n\x09  * It will only correct trajectories where we can expect a direct hit, or where we are simply out of range.\n\x09  *\n\x09  * @param ThrowOrigin\x09\x09\x09\x09This is where the projectile will start.\n\x09  * @param OriginalThrowVector\x09\x09This is the throw vector supplied by the developer to correct.\n\x09  * @param ThrowAngleThresholdDeg\x09If the angle difference between the OriginalThrowVector and the suggested vector is greater than this parameter, the vector will not be corrected. This is not applied if it is 0.\n\x09  * @param ThrowSpeedThreshold\x09\x09If the OriginalThrowVector speed is lower than the suggested vector's speed by at least this amount, the vector will not be corrected. This is measured in centimeters per second. This is not applied if it is 0.\n\x09  * @param bUseSimple\x09\x09\x09\x09If this is true, CalculateThrowAtGazeVectorSimple is used in favor of the Complex version internally\n\x09  * @return\x09\x09\x09\x09\x09\x09\x09The potentially corrected throw vector\n\x09  */" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This function is useful when throwing things in XR and you have a throw vector from the player's attempt to throw something.\nDon't forget to set collision on the thing you're throwing etc before using this though, otherwise tracing might not work.\nIt will only correct trajectories where we can expect a direct hit, or where we are simply out of range.\n\n@param ThrowOrigin                          This is where the projectile will start.\n@param OriginalThrowVector          This is the throw vector supplied by the developer to correct.\n@param ThrowAngleThresholdDeg       If the angle difference between the OriginalThrowVector and the suggested vector is greater than this parameter, the vector will not be corrected. This is not applied if it is 0.\n@param ThrowSpeedThreshold          If the OriginalThrowVector speed is lower than the suggested vector's speed by at least this amount, the vector will not be corrected. This is measured in centimeters per second. This is not applied if it is 0.\n@param bUseSimple                           If this is true, CalculateThrowAtGazeVectorSimple is used in favor of the Complex version internally\n@return                                                     The potentially corrected throw vector" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "CorrectThrow", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventCorrectThrow_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics
	{
		struct TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms), &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "ThrowAtGazeAvailable", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventThrowAtGazeAvailable_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics
	{
		struct TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms
		{
			FVector ProjectileOrigin;
			FVector ProjectileInitialVelocity;
			TArray<FVector> OutTracedPath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileInitialVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTracedPath_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTracedPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ProjectileOrigin = { "ProjectileOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms, ProjectileOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ProjectileInitialVelocity = { "ProjectileInitialVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms, ProjectileInitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner = { "OutTracedPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath = { "OutTracedPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms, OutTracedPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms), &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ProjectileOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ProjectileInitialVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_OutTracedPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fire@gaze" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiThrowAtGazeComponent, nullptr, "TraceBallisticProjectilePath", nullptr, nullptr, sizeof(TobiiThrowAtGazeComponent_eventTraceBallisticProjectilePath_Parms), Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent_NoRegister()
	{
		return UTobiiThrowAtGazeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ThrowTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxThrowSpeedCmPerSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxThrowSpeedCmPerSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPreferLowApex_MetaData[];
#endif
		static void NewProp_bAlwaysPreferLowApex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPreferLowApex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreferLowApexForTargetsBelowThrower_MetaData[];
#endif
		static void NewProp_bPreferLowApexForTargetsBelowThrower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferLowApexForTargetsBelowThrower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTraceResult_MetaData[];
#endif
		static void NewProp_bShouldTraceResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTraceResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetMinimumCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetMinimumCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowApexOffsetMaximumCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowApexOffsetMaximumCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumApexDeltaCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumApexDeltaCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadiusCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadiusCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNrTraceSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNrTraceSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceStepSizeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceStepSizeSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoTargetAcceptanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoTargetAcceptanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldTraceIgnoreOwner_MetaData[];
#endif
		static void NewProp_bShouldTraceIgnoreOwner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldTraceIgnoreOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomGravity_MetaData[];
#endif
		static void NewProp_bUseCustomGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomProjectileGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomProjectileGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateProjectileGravityVector, "CalculateProjectileGravityVector" }, // 1758469648
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowArc, "CalculateThrowArc" }, // 998398291
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CalculateThrowAtGazeVector, "CalculateThrowAtGazeVector" }, // 285687406
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_CorrectThrow, "CorrectThrow" }, // 91795594
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_ThrowAtGazeAvailable, "ThrowAtGazeAvailable" }, // 830460764
		{ &Z_Construct_UFunction_UTobiiThrowAtGazeComponent_TraceBallisticProjectilePath, "TraceBallisticProjectilePath" }, // 3309990255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Tobii" },
		{ "Comment", "/**\n  * This component will generate gaze contingent throw vectors on demand.\n  * You can use this vector to either simulate a trajectory yourself, or simply apply it to the rigid body of some object.\n  */" },
		{ "IncludePath", "Common/TobiiThrowAtGazeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This component will generate gaze contingent throw vectors on demand.\nYou can use this vector to either simulate a trajectory yourself, or simply apply it to the rigid body of some object." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "// This is the component that you're trying to hit with the throw. You can set this on the same frame you are trying to throw, but setting it earlier will allow the component to \"aim\" a bit better. If this is not set, you can still use the component, but it will then try to simply use the gaze vector instead.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is the component that you're trying to hit with the throw. You can set this on the same frame you are trying to throw, but setting it earlier will allow the component to \"aim\" a bit better. If this is not set, you can still use the component, but it will then try to simply use the gaze vector instead." },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget = { "ThrowTarget", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowTarget), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "// Throw force applied to the throw vector can never be greater than this value.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Throw force applied to the throw vector can never be greater than this value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs = { "MaxThrowSpeedCmPerSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxThrowSpeedCmPerSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData[] = {
		{ "Category", "Throw@gaze" },
		{ "Comment", "// This is how high above the thrower the arc apex will be.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is how high above the thrower the arc apex will be." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm = { "ThrowApexOffsetCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// This is how many times we will run the angle finding code. More iterations will mean more tested apexes between the limits below. Setting this to 0 will only run one test using the average of the apexes.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is how many times we will run the angle finding code. More iterations will mean more tested apexes between the limits below. Setting this to 0 will only run one test using the average of the apexes." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxIterations), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If this is true, the algorithm will always test low apexes first.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is true, the algorithm will always test low apexes first." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bAlwaysPreferLowApex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex = { "bAlwaysPreferLowApex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If this is true, the algorithm will prefer low apexes rather than mid or high ones for a more natural looking throw.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is true, the algorithm will prefer low apexes rather than mid or high ones for a more natural looking throw." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bPreferLowApexForTargetsBelowThrower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower = { "bPreferLowApexForTargetsBelowThrower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If this is true, the algorithm will attempt to trace the solution in the world to make sure nothing is in the way.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is true, the algorithm will attempt to trace the solution in the world to make sure nothing is in the way." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bShouldTraceResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult = { "bShouldTraceResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If bShouldTraceResult is true, an apex smaller than this value will never be tested\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, an apex smaller than this value will never be tested" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm = { "ThrowApexOffsetMinimumCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetMinimumCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If bShouldTraceResult is true, an apex larger than this value will never be tested\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, an apex larger than this value will never be tested" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm = { "ThrowApexOffsetMaximumCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, ThrowApexOffsetMaximumCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// When testing different apexes, if the delta between the last test and the next one is smaller than this value, tests will be aborted\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "When testing different apexes, if the delta between the last test and the next one is smaller than this value, tests will be aborted" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm = { "MinimumApexDeltaCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MinimumApexDeltaCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If bShouldTraceResult is true, this is the size that will be used for tracing. Should be larger or equal to the projectile size.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the size that will be used for tracing. Should be larger or equal to the projectile size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm = { "TraceRadiusCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceRadiusCm), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If bShouldTraceResult is true, this is the length of each trace step done.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the length of each trace step done." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps = { "MaxNrTraceSteps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxNrTraceSteps), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If bShouldTraceResult is true, this is the length of each trace step done in seconds.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bShouldTraceResult is true, this is the length of each trace step done in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs = { "TraceStepSizeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceStepSizeSecs), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxTraceDistance_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// We don't allow traces longer than this\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "We don't allow traces longer than this" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxTraceDistance = { "MaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, MaxTraceDistance), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_NoTargetAcceptanceThreshold_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If we don't have a ThrowTarget, we will consider hits closer than this distance to the target to be \"hits\"\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If we don't have a ThrowTarget, we will consider hits closer than this distance to the target to be \"hits\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_NoTargetAcceptanceThreshold = { "NoTargetAcceptanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, NoTargetAcceptanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_NoTargetAcceptanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_NoTargetAcceptanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// This is the channel that will be used when tracing.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "This is the channel that will be used when tracing." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// If you have any additional actors that should be ignored by the tracing\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If you have any additional actors that should be ignored by the tracing" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, TraceIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData[] = {
		{ "Category", "Throw@gaze Configuration" },
		{ "Comment", "// Let's you ignore this component's owner collision when tracing.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "Let's you ignore this component's owner collision when tracing." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bShouldTraceIgnoreOwner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner = { "bShouldTraceIgnoreOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData[] = {
		{ "Category", "Throw@gaze Gravity" },
		{ "Comment", "// If this is false, the world gravity is used for calculations. If this is true, CustomProjectileGravity is used instead.\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If this is false, the world gravity is used for calculations. If this is true, CustomProjectileGravity is used instead." },
	};
#endif
	void Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_SetBit(void* Obj)
	{
		((UTobiiThrowAtGazeComponent*)Obj)->bUseCustomGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity = { "bUseCustomGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiThrowAtGazeComponent), &Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData[] = {
		{ "Category", "Throw@gaze Gravity" },
		{ "Comment", "// If bUseCustomGravity is true, this is the gravity that will be used in calculations\n" },
		{ "ModuleRelativePath", "Public/Common/TobiiThrowAtGazeComponent.h" },
		{ "ToolTip", "If bUseCustomGravity is true, this is the gravity that will be used in calculations" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity = { "CustomProjectileGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiThrowAtGazeComponent, CustomProjectileGravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxThrowSpeedCmPerSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bAlwaysPreferLowApex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bPreferLowApexForTargetsBelowThrower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMinimumCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_ThrowApexOffsetMaximumCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MinimumApexDeltaCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceRadiusCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxNrTraceSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceStepSizeSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_MaxTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_NoTargetAcceptanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_TraceIgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bShouldTraceIgnoreOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_bUseCustomGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::NewProp_CustomProjectileGravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiThrowAtGazeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::ClassParams = {
		&UTobiiThrowAtGazeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiThrowAtGazeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiThrowAtGazeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiThrowAtGazeComponent, 434545901);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiThrowAtGazeComponent>()
	{
		return UTobiiThrowAtGazeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiThrowAtGazeComponent(Z_Construct_UClass_UTobiiThrowAtGazeComponent, &UTobiiThrowAtGazeComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiThrowAtGazeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiThrowAtGazeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
