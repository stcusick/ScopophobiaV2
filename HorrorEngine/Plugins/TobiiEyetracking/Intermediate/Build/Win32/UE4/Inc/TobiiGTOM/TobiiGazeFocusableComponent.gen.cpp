// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGazeFocusableComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGazeFocusableComponent() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusableComponent_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGazeFocusableComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiGazeFocusableComponent::execRefreshOwnedWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshOwnedWidgets();
		P_NATIVE_END;
	}
	void UTobiiGazeFocusableComponent::StaticRegisterNativesUTobiiGazeFocusableComponent()
	{
		UClass* Class = UTobiiGazeFocusableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RefreshOwnedWidgets", &UTobiiGazeFocusableComponent::execRefreshOwnedWidgets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "CleanUI" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGazeFocusableComponent, nullptr, "RefreshOwnedWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiGazeFocusableComponent_NoRegister()
	{
		return UTobiiGazeFocusableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultIsFocusable_MetaData[];
#endif
		static void NewProp_bDefaultIsFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultIsFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFocusPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultFocusPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxFocusDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxFocusDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFocusLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultFocusLayer;
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
	UObject* (*const Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiGazeFocusableComponent_RefreshOwnedWidgets, "RefreshOwnedWidgets" }, // 1571782324
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * This component is a helper that can make it easier to setup GTOM, as well as provide an focus event interface for this object.\n  * If you don't use specific tags on your primitive components, the values on this component will be used instead.\n  * This component is REQUIRED for GPU based GTOM.\n  * This component is also REQUIRED for world space widget focus.\n  * This should be placed on the root actor for every component tree. This means that if you have an actor that has a child actor that has primitive components you would like to control, you need to add one of these components to that child actor as well.\n  * Having more than one of these components on one actor is not recommended, as it is unclear which focusable component's values will be used.\n  * If you want world space UI widgets to participate in GTOM, you must attach one of these components to the actor carrying the WidgetComponent(s) to affect\n  */" },
		{ "IncludePath", "TobiiGazeFocusableComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "This component is a helper that can make it easier to setup GTOM, as well as provide an focus event interface for this object.\nIf you don't use specific tags on your primitive components, the values on this component will be used instead.\nThis component is REQUIRED for GPU based GTOM.\nThis component is also REQUIRED for world space widget focus.\nThis should be placed on the root actor for every component tree. This means that if you have an actor that has a child actor that has primitive components you would like to control, you need to add one of these components to that child actor as well.\nHaving more than one of these components on one actor is not recommended, as it is unclear which focusable component's values will be used.\nIf you want world space UI widgets to participate in GTOM, you must attach one of these components to the actor carrying the WidgetComponent(s) to affect" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable_MetaData[] = {
		{ "Category", "Default Focus Settings" },
		{ "Comment", "//The default value for focusability to be used by all primitives on the same actor as this component. It can be useful to set this to false if you only want a few primitives on the actor to be focusable.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "The default value for focusability to be used by all primitives on the same actor as this component. It can be useful to set this to false if you only want a few primitives on the actor to be focusable." },
	};
#endif
	void Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable_SetBit(void* Obj)
	{
		((UTobiiGazeFocusableComponent*)Obj)->bDefaultIsFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable = { "bDefaultIsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiGazeFocusableComponent), &Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusPriority_MetaData[] = {
		{ "Category", "Default Focus Settings" },
		{ "Comment", "//The focus priority is optional input that you can provide to GTOM. Objects with higher focus priority are more \"important\" and are therefore more likely to be construed as being in focus.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "The focus priority is optional input that you can provide to GTOM. Objects with higher focus priority are more \"important\" and are therefore more likely to be construed as being in focus." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusPriority = { "DefaultFocusPriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, DefaultFocusPriority), METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultMaxFocusDistance_MetaData[] = {
		{ "Category", "Default Focus Settings" },
		{ "Comment", "//If this object is at least this far away from the player, it will not participate in GTOM. This will only be in effect if it is greater than zero.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "If this object is at least this far away from the player, it will not participate in GTOM. This will only be in effect if it is greater than zero." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultMaxFocusDistance = { "DefaultMaxFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, DefaultMaxFocusDistance), METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultMaxFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultMaxFocusDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusLayer_MetaData[] = {
		{ "Category", "Default Focus Settings" },
		{ "Comment", "//A developer can opt to only query a subset of focusables by using a focus layer. This is the default layer that will be used if none is set with tags on primitives or on a gazefocusablewidget.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "A developer can opt to only query a subset of focusables by using a focus layer. This is the default layer that will be used if none is set with tags on primitives or on a gazefocusablewidget." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusLayer = { "DefaultFocusLayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, DefaultFocusLayer), METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus" },
		{ "Comment", "//These functions will notify when gaze focus is lost or gained irregardless of focus layers.\n" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
		{ "ToolTip", "These functions will notify when gaze focus is lost or gained irregardless of focus layers." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus = { "OnPrimitiveReceivedGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, OnPrimitiveReceivedGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveLostGazeFocus = { "OnPrimitiveLostGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, OnPrimitiveLostGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveLostGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetReceivedGazeFocus = { "OnWidgetReceivedGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, OnWidgetReceivedGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetReceivedGazeFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData[] = {
		{ "Category", "Gaze Focus" },
		{ "ModuleRelativePath", "Public/TobiiGazeFocusableComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetLostGazeFocus = { "OnWidgetLostGazeFocus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiGazeFocusableComponent, OnWidgetLostGazeFocus), Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetLostGazeFocus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_bDefaultIsFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultMaxFocusDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_DefaultFocusLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveReceivedGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnPrimitiveLostGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetReceivedGazeFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::NewProp_OnWidgetLostGazeFocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiGazeFocusableComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::ClassParams = {
		&UTobiiGazeFocusableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiGazeFocusableComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiGazeFocusableComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiGazeFocusableComponent, 3853713365);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiGazeFocusableComponent>()
	{
		return UTobiiGazeFocusableComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiGazeFocusableComponent(Z_Construct_UClass_UTobiiGazeFocusableComponent, &UTobiiGazeFocusableComponent::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiGazeFocusableComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiGazeFocusableComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
