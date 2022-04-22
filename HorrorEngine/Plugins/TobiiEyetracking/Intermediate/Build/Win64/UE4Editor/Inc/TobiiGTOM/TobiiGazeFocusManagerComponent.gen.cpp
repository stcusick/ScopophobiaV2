// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGazeFocusManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGazeFocusManagerComponent() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	TOBIIGTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeFocusData();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiGazeFocusManagerComponent::execGetAllFilteredFocusData)
	{
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllFilteredFocusData(Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGazeFocusManagerComponent::execGetBestFilteredWidgetComponentFocusData)
	{
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBestFilteredWidgetComponentFocusData(Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGazeFocusManagerComponent::execGetBestFilteredPrimitiveComponentFocusData)
	{
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBestFilteredPrimitiveComponentFocusData(Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	void UTobiiGazeFocusManagerComponent::StaticRegisterNativesUTobiiGazeFocusManagerComponent()
	{
		UClass* Class = UTobiiGazeFocusManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllFilteredFocusData", &UTobiiGazeFocusManagerComponent::execGetAllFilteredFocusData },
			{ "GetBestFilteredPrimitiveComponentFocusData", &UTobiiGazeFocusManagerComponent::execGetBestFilteredPrimitiveComponentFocusData },
			{ "GetBestFilteredWidgetComponentFocusData", &UTobiiGazeFocusManagerComponent::execGetBestFilteredWidgetComponentFocusData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics
	{
		struct TobiiGazeFocusManagerComponent_eventGetAllFilteredFocusData_Parms
		{
			TArray<FTobiiGazeFocusData> OutFocusData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFocusData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::NewProp_OutFocusData_Inner = { "OutFocusData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGazeFocusManagerComponent_eventGetAllFilteredFocusData_Parms, OutFocusData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::NewProp_OutFocusData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::NewProp_OutFocusData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//Get a sorted list of components that the focus system believes the user is looking at, given the filters the focus manager is configured with.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "Get a sorted list of components that the focus system believes the user is looking at, given the filters the focus manager is configured with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusManagerComponent, nullptr, "GetAllFilteredFocusData", nullptr, nullptr, sizeof(TobiiGazeFocusManagerComponent_eventGetAllFilteredFocusData_Parms), Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics
	{
		struct TobiiGazeFocusManagerComponent_eventGetBestFilteredPrimitiveComponentFocusData_Parms
		{
			FTobiiGazeFocusData OutFocusData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGazeFocusManagerComponent_eventGetBestFilteredPrimitiveComponentFocusData_Parms, OutFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::NewProp_OutFocusData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//Get the component the focus system believes the user is looking at, given the filters the focus manager is configured with.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "Get the component the focus system believes the user is looking at, given the filters the focus manager is configured with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusManagerComponent, nullptr, "GetBestFilteredPrimitiveComponentFocusData", nullptr, nullptr, sizeof(TobiiGazeFocusManagerComponent_eventGetBestFilteredPrimitiveComponentFocusData_Parms), Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics
	{
		struct TobiiGazeFocusManagerComponent_eventGetBestFilteredWidgetComponentFocusData_Parms
		{
			FTobiiGazeFocusData OutFocusData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGazeFocusManagerComponent_eventGetBestFilteredWidgetComponentFocusData_Parms, OutFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::NewProp_OutFocusData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gaze Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusManagerComponent, nullptr, "GetBestFilteredWidgetComponentFocusData", nullptr, nullptr, sizeof(TobiiGazeFocusManagerComponent_eventGetBestFilteredWidgetComponentFocusData_Parms), Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent_NoRegister()
	{
		return UTobiiGazeFocusManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantPrimitives_MetaData[];
#endif
		static void NewProp_bWantPrimitives_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantPrimitives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantWidgets_MetaData[];
#endif
		static void NewProp_bWantWidgets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantWidgets;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrimitiveReceivedGazeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrimitiveReceivedGazeFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPrimitiveLostGazeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrimitiveLostGazeFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWidgetReceivedGazeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetReceivedGazeFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWidgetLostGazeFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetLostGazeFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetAllFilteredFocusData, "GetAllFilteredFocusData" }, // 466565506
		{ &Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredPrimitiveComponentFocusData, "GetBestFilteredPrimitiveComponentFocusData" }, // 1970359143
		{ &Z_Construct_UFunction_UTobiiGazeFocusManagerComponent_GetBestFilteredWidgetComponentFocusData, "GetBestFilteredWidgetComponentFocusData" }, // 1829580077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Tobii focus managers are an easier way to set up focus layer filters and access the focusables associated with them.\n * It also offers a way to get notified of changes in gaze focus via events.\n */" },
		{ "IncludePath", "TobiiGazeFocusManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "* Tobii focus managers are an easier way to set up focus layer filters and access the focusables associated with them.\n* It also offers a way to get notified of changes in gaze focus via events." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//If this is true, focus data with valid UPrimitiveComponents will be included in the output results.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "If this is true, focus data with valid UPrimitiveComponents will be included in the output results." },
	};
#endif
	void Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives_SetBit(void* Obj)
	{
		((UTobiiGazeFocusManagerComponent*)Obj)->bWantPrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives = { "bWantPrimitives", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiGazeFocusManagerComponent), &Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//If this is true, focus data with valid UWidgets will be included in the output results\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "If this is true, focus data with valid UWidgets will be included in the output results" },
	};
#endif
	void Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets_SetBit(void* Obj)
	{
		((UTobiiGazeFocusManagerComponent*)Obj)->bWantWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets = { "bWantWidgets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiGazeFocusManagerComponent), &Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array." },
	};
#endif
	void Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_SetBit(void* Obj)
	{
		((UTobiiGazeFocusManagerComponent*)Obj)->bIsWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList = { "bIsWhiteList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiGazeFocusManagerComponent), &Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters_Inner = { "FocusLayerFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters = { "FocusLayerFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, FocusLayerFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "Comment", "//These functions will notify when gaze focus is lost for this focus manager's filtered set.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
		{ "ToolTip", "These functions will notify when gaze focus is lost for this focus manager's filtered set." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus = { "OnPrimitiveReceivedGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnPrimitiveReceivedGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveLostGazeFocus = { "OnPrimitiveLostGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnPrimitiveLostGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetReceivedGazeFocus = { "OnWidgetReceivedGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnWidgetReceivedGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus Management" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetLostGazeFocus = { "OnWidgetLostGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusManagerComponent, OnWidgetLostGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bWantWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_bIsWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_FocusLayerFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnPrimitiveLostGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetReceivedGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::NewProp_OnWidgetLostGazeFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiGazeFocusManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::ClassParams = {
		&UTobiiGazeFocusManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiGazeFocusManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiGazeFocusManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiGazeFocusManagerComponent, 3761785149);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiGazeFocusManagerComponent>()
	{
		return UTobiiGazeFocusManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiGazeFocusManagerComponent(Z_Construct_UClass_UTobiiGazeFocusManagerComponent, &UTobiiGazeFocusManagerComponent::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiGazeFocusManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiGazeFocusManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
