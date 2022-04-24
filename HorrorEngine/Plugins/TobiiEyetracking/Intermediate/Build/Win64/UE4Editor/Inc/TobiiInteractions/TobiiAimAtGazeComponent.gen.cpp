// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiInteractions/Public/Desktop/TobiiAimAtGazeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiAimAtGazeComponent() {}
// Cross Module References
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent_NoRegister();
	TOBIIINTERACTIONS_API UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiInteractions();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiAimAtGazeComponent::execContinuousAimAtGaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ContinuousAimAtGaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiAimAtGazeComponent::execAimAtGaze)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AimAtGaze();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiAimAtGazeComponent::execAimAtGazeAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AimAtGazeAvailable();
		P_NATIVE_END;
	}
	void UTobiiAimAtGazeComponent::StaticRegisterNativesUTobiiAimAtGazeComponent()
	{
		UClass* Class = UTobiiAimAtGazeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AimAtGaze", &UTobiiAimAtGazeComponent::execAimAtGaze },
			{ "AimAtGazeAvailable", &UTobiiAimAtGazeComponent::execAimAtGazeAvailable },
			{ "ContinuousAimAtGaze", &UTobiiAimAtGazeComponent::execContinuousAimAtGaze },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "Comment", "//Trigger an aim@gaze\n" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Trigger an aim@gaze" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, nullptr, "AimAtGaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics
	{
		struct TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms
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
	void Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms), &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "Comment", "//Use this to test if the user has turned aim@gaze on and it is available.\n" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Use this to test if the user has turned aim@gaze on and it is available." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, nullptr, "AimAtGazeAvailable", nullptr, nullptr, sizeof(TobiiAimAtGazeComponent_eventAimAtGazeAvailable_Parms), Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams[] = {
		{ "Category", "Aim@gaze" },
		{ "Comment", "//Call this every frame you want to continually track the aim@gaze target\n" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "Call this every frame you want to continually track the aim@gaze target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiAimAtGazeComponent, nullptr, "ContinuousAimAtGaze", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent_NoRegister()
	{
		return UTobiiAimAtGazeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteList_MetaData[];
#endif
		static void NewProp_bIsWhiteList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteList;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FocusLayerFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusLayerFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FocusLayerFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRetarget_MetaData[];
#endif
		static void NewProp_bAllowRetarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRetarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiInteractions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGaze, "AimAtGaze" }, // 3999898220
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_AimAtGazeAvailable, "AimAtGazeAvailable" }, // 652530011
		{ &Z_Construct_UFunction_UTobiiAimAtGazeComponent_ContinuousAimAtGaze, "ContinuousAimAtGaze" }, // 1063952327
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Desktop/TobiiAimAtGazeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array." },
	};
#endif
	void Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList_SetBit(void* Obj)
	{
		((UTobiiAimAtGazeComponent*)Obj)->bIsWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList = { "bIsWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiAimAtGazeComponent), &Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters_Inner = { "FocusLayerFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
		{ "ToolTip", "These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters = { "FocusLayerFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiAimAtGazeComponent, FocusLayerFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_SetBit(void* Obj)
	{
		((UTobiiAimAtGazeComponent*)Obj)->bAllowRetarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget = { "bAllowRetarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiAimAtGazeComponent), &Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData[] = {
		{ "Category", "Aim@gaze" },
		{ "ModuleRelativePath", "Public/Desktop/TobiiAimAtGazeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed = { "AimSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiAimAtGazeComponent, AimSpeed), METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bIsWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_FocusLayerFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_bAllowRetarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::NewProp_AimSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiAimAtGazeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::ClassParams = {
		&UTobiiAimAtGazeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiAimAtGazeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiAimAtGazeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiAimAtGazeComponent, 2124853268);
	template<> TOBIIINTERACTIONS_API UClass* StaticClass<UTobiiAimAtGazeComponent>()
	{
		return UTobiiAimAtGazeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiAimAtGazeComponent(Z_Construct_UClass_UTobiiAimAtGazeComponent, &UTobiiAimAtGazeComponent::StaticClass, TEXT("/Script/TobiiInteractions"), TEXT("UTobiiAimAtGazeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiAimAtGazeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
