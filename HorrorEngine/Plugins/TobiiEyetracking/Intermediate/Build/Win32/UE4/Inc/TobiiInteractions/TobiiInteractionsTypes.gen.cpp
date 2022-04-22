// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/TobiiInteractionsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiInteractionsTypes() {}
// Cross Module References
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
	TOBIIINTERACTIONS_API UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiProjectileTraceData();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticResult();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticData();
	TOBIIINTERACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData();
// End Cross Module References
	static UEnum* ETobiiThrowAtGazeResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("ETobiiThrowAtGazeResult"));
		}
		return Singleton;
	}
	template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiThrowAtGazeResult>()
	{
		return ETobiiThrowAtGazeResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiThrowAtGazeResult(ETobiiThrowAtGazeResult_StaticEnum, TEXT("/Script/TobiiInteractions"), TEXT("ETobiiThrowAtGazeResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult_Hash() { return 3349863887U; }
	UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiThrowAtGazeResult"), 0, Get_Z_Construct_UEnum_TobiiInteractions_ETobiiThrowAtGazeResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiThrowAtGazeResult::UnknownError", (int64)ETobiiThrowAtGazeResult::UnknownError },
				{ "ETobiiThrowAtGazeResult::NoEyetrackingInput", (int64)ETobiiThrowAtGazeResult::NoEyetrackingInput },
				{ "ETobiiThrowAtGazeResult::NoPath", (int64)ETobiiThrowAtGazeResult::NoPath },
				{ "ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange", (int64)ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange },
				{ "ETobiiThrowAtGazeResult::BlockedByWorldInRange", (int64)ETobiiThrowAtGazeResult::BlockedByWorldInRange },
				{ "ETobiiThrowAtGazeResult::OutOfRange", (int64)ETobiiThrowAtGazeResult::OutOfRange },
				{ "ETobiiThrowAtGazeResult::DirectHit", (int64)ETobiiThrowAtGazeResult::DirectHit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlockedByWorldAndOutOfRange.Comment", "// A path is mathematically possible, but it is blocked by something and out of range.\n" },
				{ "BlockedByWorldAndOutOfRange.Name", "ETobiiThrowAtGazeResult::BlockedByWorldAndOutOfRange" },
				{ "BlockedByWorldAndOutOfRange.ToolTip", "A path is mathematically possible, but it is blocked by something and out of range." },
				{ "BlockedByWorldInRange.Comment", "// A path is mathematically possible and is within range, but it is blocked by something.\n" },
				{ "BlockedByWorldInRange.Name", "ETobiiThrowAtGazeResult::BlockedByWorldInRange" },
				{ "BlockedByWorldInRange.ToolTip", "A path is mathematically possible and is within range, but it is blocked by something." },
				{ "BlueprintType", "true" },
				{ "DirectHit.Comment", "// If a valid path exists and the force requirement is within limits\n" },
				{ "DirectHit.Name", "ETobiiThrowAtGazeResult::DirectHit" },
				{ "DirectHit.ToolTip", "If a valid path exists and the force requirement is within limits" },
				{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
				{ "NoEyetrackingInput.Comment", "// Neither a throw target, nor gaze input is available\n" },
				{ "NoEyetrackingInput.Name", "ETobiiThrowAtGazeResult::NoEyetrackingInput" },
				{ "NoEyetrackingInput.ToolTip", "Neither a throw target, nor gaze input is available" },
				{ "NoPath.Comment", "// If no valid path could be found\n" },
				{ "NoPath.Name", "ETobiiThrowAtGazeResult::NoPath" },
				{ "NoPath.ToolTip", "If no valid path could be found" },
				{ "OutOfRange.Comment", "// If a valid path could be found, but it requires more throw force than allowed\n" },
				{ "OutOfRange.Name", "ETobiiThrowAtGazeResult::OutOfRange" },
				{ "OutOfRange.ToolTip", "If a valid path could be found, but it requires more throw force than allowed" },
				{ "UnknownError.Comment", "// Bad input in some way\n" },
				{ "UnknownError.Name", "ETobiiThrowAtGazeResult::UnknownError" },
				{ "UnknownError.ToolTip", "Bad input in some way" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiInteractions,
				nullptr,
				"ETobiiThrowAtGazeResult",
				"ETobiiThrowAtGazeResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETobiiInterceptType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("ETobiiInterceptType"));
		}
		return Singleton;
	}
	template<> TOBIIINTERACTIONS_API UEnum* StaticEnum<ETobiiInterceptType>()
	{
		return ETobiiInterceptType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETobiiInterceptType(ETobiiInterceptType_StaticEnum, TEXT("/Script/TobiiInteractions"), TEXT("ETobiiInterceptType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType_Hash() { return 2540028006U; }
	UEnum* Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETobiiInterceptType"), 0, Get_Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETobiiInterceptType::ClosestApproach", (int64)ETobiiInterceptType::ClosestApproach },
				{ "ETobiiInterceptType::DirectHit", (int64)ETobiiInterceptType::DirectHit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClosestApproach.Name", "ETobiiInterceptType::ClosestApproach" },
				{ "DirectHit.Name", "ETobiiInterceptType::DirectHit" },
				{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TobiiInteractions,
				nullptr,
				"ETobiiInterceptType",
				"ETobiiInterceptType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTobiiProjectileTraceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIINTERACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiProjectileTraceData, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("TobiiProjectileTraceData"), sizeof(FTobiiProjectileTraceData), Get_Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Hash());
	}
	return Singleton;
}
template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<FTobiiProjectileTraceData>()
{
	return FTobiiProjectileTraceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiProjectileTraceData(FTobiiProjectileTraceData::StaticStruct, TEXT("/Script/TobiiInteractions"), TEXT("TobiiProjectileTraceData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiProjectileTraceData
{
	FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiProjectileTraceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiProjectileTraceData")),new UScriptStruct::TCppStructOps<FTobiiProjectileTraceData>);
	}
} ScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiProjectileTraceData;
	struct Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNrSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNrSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSizeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSizeSecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceRadiusCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceRadiusCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInitialPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileInitialPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiProjectileTraceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceChannel_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_MaxNrSteps_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_MaxNrSteps = { "MaxNrSteps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, MaxNrSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_MaxNrSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_MaxNrSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_StepSizeSecs_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_StepSizeSecs = { "StepSizeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, StepSizeSecs), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_StepSizeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_StepSizeSecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceRadiusCm_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceRadiusCm = { "TraceRadiusCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, TraceRadiusCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceRadiusCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceRadiusCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileInitialPosition_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileInitialPosition = { "ProjectileInitialPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, ProjectileInitialPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileInitialPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileInitialPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileVelocity_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileVelocity = { "ProjectileVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, ProjectileVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileAcceleration_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileAcceleration = { "ProjectileAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiProjectileTraceData, ProjectileAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_IgnoredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_MaxNrSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_StepSizeSecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_TraceRadiusCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileInitialPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::NewProp_ProjectileAcceleration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
		nullptr,
		&NewStructOps,
		"TobiiProjectileTraceData",
		sizeof(FTobiiProjectileTraceData),
		alignof(FTobiiProjectileTraceData),
		Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiProjectileTraceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiProjectileTraceData"), sizeof(FTobiiProjectileTraceData), Get_Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiProjectileTraceData_Hash() { return 2391377418U; }
class UScriptStruct* FTobiiBallisticResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIINTERACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiBallisticResult, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("TobiiBallisticResult"), sizeof(FTobiiBallisticResult), Get_Z_Construct_UScriptStruct_FTobiiBallisticResult_Hash());
	}
	return Singleton;
}
template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<FTobiiBallisticResult>()
{
	return FTobiiBallisticResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiBallisticResult(FTobiiBallisticResult::StaticStruct, TEXT("/Script/TobiiInteractions"), TEXT("TobiiBallisticResult"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticResult
{
	FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiBallisticResult")),new UScriptStruct::TCppStructOps<FTobiiBallisticResult>);
	}
} ScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticResult;
	struct Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestedInitialVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuggestedInitialVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedInterceptLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedInterceptLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedInterceptTimeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedInterceptTimeSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiBallisticResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_SuggestedInitialVelocity_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_SuggestedInitialVelocity = { "SuggestedInitialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticResult, SuggestedInitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_SuggestedInitialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_SuggestedInitialVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptLocation_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptLocation = { "ExpectedInterceptLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticResult, ExpectedInterceptLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptTimeSecs = { "ExpectedInterceptTimeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticResult, ExpectedInterceptTimeSecs), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_SuggestedInitialVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::NewProp_ExpectedInterceptTimeSecs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
		nullptr,
		&NewStructOps,
		"TobiiBallisticResult",
		sizeof(FTobiiBallisticResult),
		alignof(FTobiiBallisticResult),
		Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiBallisticResult"), sizeof(FTobiiBallisticResult), Get_Z_Construct_UScriptStruct_FTobiiBallisticResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiBallisticResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticResult_Hash() { return 1300111043U; }
class UScriptStruct* FTobiiAccelerationBasedHomingResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIINTERACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("TobiiAccelerationBasedHomingResult"), sizeof(FTobiiAccelerationBasedHomingResult), Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Hash());
	}
	return Singleton;
}
template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<FTobiiAccelerationBasedHomingResult>()
{
	return FTobiiAccelerationBasedHomingResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiAccelerationBasedHomingResult(FTobiiAccelerationBasedHomingResult::StaticStruct, TEXT("/Script/TobiiInteractions"), TEXT("TobiiAccelerationBasedHomingResult"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingResult
{
	FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiAccelerationBasedHomingResult")),new UScriptStruct::TCppStructOps<FTobiiAccelerationBasedHomingResult>);
	}
} ScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingResult;
	struct Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestedAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuggestedAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedInterceptLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpectedInterceptLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedInterceptTimeSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExpectedInterceptTimeSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiAccelerationBasedHomingResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingResult, Type), Z_Construct_UEnum_TobiiInteractions_ETobiiInterceptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_SuggestedAcceleration_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_SuggestedAcceleration = { "SuggestedAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingResult, SuggestedAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_SuggestedAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_SuggestedAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptLocation_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptLocation = { "ExpectedInterceptLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingResult, ExpectedInterceptLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData[] = {
		{ "Category", "Intercept Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptTimeSecs = { "ExpectedInterceptTimeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingResult, ExpectedInterceptTimeSecs), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptTimeSecs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_SuggestedAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::NewProp_ExpectedInterceptTimeSecs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
		nullptr,
		&NewStructOps,
		"TobiiAccelerationBasedHomingResult",
		sizeof(FTobiiAccelerationBasedHomingResult),
		alignof(FTobiiAccelerationBasedHomingResult),
		Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiAccelerationBasedHomingResult"), sizeof(FTobiiAccelerationBasedHomingResult), Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingResult_Hash() { return 1516993153U; }
class UScriptStruct* FTobiiBallisticData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIINTERACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiBallisticData, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("TobiiBallisticData"), sizeof(FTobiiBallisticData), Get_Z_Construct_UScriptStruct_FTobiiBallisticData_Hash());
	}
	return Singleton;
}
template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<FTobiiBallisticData>()
{
	return FTobiiBallisticData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiBallisticData(FTobiiBallisticData::StaticStruct, TEXT("/Script/TobiiInteractions"), TEXT("TobiiBallisticData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticData
{
	FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiBallisticData")),new UScriptStruct::TCppStructOps<FTobiiBallisticData>);
	}
} ScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiBallisticData;
	struct Z_Construct_UScriptStruct_FTobiiBallisticData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileApexOffsetCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileApexOffsetCm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInitialPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileInitialPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiBallisticData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileApexOffsetCm_MetaData[] = {
		{ "Category", "General Data" },
		{ "Comment", "//This is how high the projectile should be above the initial position at it's midpoint\n" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
		{ "ToolTip", "This is how high the projectile should be above the initial position at it's midpoint" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileApexOffsetCm = { "ProjectileApexOffsetCm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, ProjectileApexOffsetCm), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileApexOffsetCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileApexOffsetCm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileInitialPosition_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileInitialPosition = { "ProjectileInitialPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, ProjectileInitialPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileInitialPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileInitialPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileAcceleration_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileAcceleration = { "ProjectileAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, ProjectileAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetAcceleration_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetAcceleration = { "TargetAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiBallisticData, TargetAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileApexOffsetCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileInitialPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_ProjectileAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::NewProp_TargetAcceleration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
		nullptr,
		&NewStructOps,
		"TobiiBallisticData",
		sizeof(FTobiiBallisticData),
		alignof(FTobiiBallisticData),
		Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiBallisticData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiBallisticData"), sizeof(FTobiiBallisticData), Get_Z_Construct_UScriptStruct_FTobiiBallisticData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiBallisticData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiBallisticData_Hash() { return 2606964971U; }
class UScriptStruct* FTobiiAccelerationBasedHomingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOBIIINTERACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData, Z_Construct_UPackage__Script_TobiiInteractions(), TEXT("TobiiAccelerationBasedHomingData"), sizeof(FTobiiAccelerationBasedHomingData), Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Hash());
	}
	return Singleton;
}
template<> TOBIIINTERACTIONS_API UScriptStruct* StaticStruct<FTobiiAccelerationBasedHomingData>()
{
	return FTobiiAccelerationBasedHomingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTobiiAccelerationBasedHomingData(FTobiiAccelerationBasedHomingData::StaticStruct, TEXT("/Script/TobiiInteractions"), TEXT("TobiiAccelerationBasedHomingData"), false, nullptr, nullptr);
static struct FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingData
{
	FScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TobiiAccelerationBasedHomingData")),new UScriptStruct::TCppStructOps<FTobiiAccelerationBasedHomingData>);
	}
} ScriptStruct_TobiiInteractions_StaticRegisterNativesFTobiiAccelerationBasedHomingData;
	struct Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttemptClosestApproachSolution_MetaData[];
#endif
		static void NewProp_bAttemptClosestApproachSolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttemptClosestApproachSolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectilePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileAccelerationMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileAccelerationMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetAcceleration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTobiiAccelerationBasedHomingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution_MetaData[] = {
		{ "Category", "General Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution_SetBit(void* Obj)
	{
		((FTobiiAccelerationBasedHomingData*)Obj)->bAttemptClosestApproachSolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution = { "bAttemptClosestApproachSolution", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTobiiAccelerationBasedHomingData), &Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectilePosition_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectilePosition = { "ProjectilePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, ProjectilePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectilePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectilePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileVelocity_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileVelocity = { "ProjectileVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, ProjectileVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileAccelerationMagnitude_MetaData[] = {
		{ "Category", "Source Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileAccelerationMagnitude = { "ProjectileAccelerationMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, ProjectileAccelerationMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileAccelerationMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileAccelerationMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetPosition_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetVelocity_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetAcceleration_MetaData[] = {
		{ "Category", "Target Data" },
		{ "ModuleRelativePath", "Public/TobiiInteractionsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetAcceleration = { "TargetAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTobiiAccelerationBasedHomingData, TargetAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetAcceleration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_bAttemptClosestApproachSolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectilePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_ProjectileAccelerationMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::NewProp_TargetAcceleration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
		nullptr,
		&NewStructOps,
		"TobiiAccelerationBasedHomingData",
		sizeof(FTobiiAccelerationBasedHomingData),
		alignof(FTobiiAccelerationBasedHomingData),
		Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TobiiInteractions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TobiiAccelerationBasedHomingData"), sizeof(FTobiiAccelerationBasedHomingData), Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTobiiAccelerationBasedHomingData_Hash() { return 3549408442U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
