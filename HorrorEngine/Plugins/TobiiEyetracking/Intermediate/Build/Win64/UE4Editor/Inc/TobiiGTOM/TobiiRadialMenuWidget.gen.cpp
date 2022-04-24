// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/GTOMAwareUI/TobiiRadialMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiRadialMenuWidget() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuWidget_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiRadialMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execGetAlpha)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAlpha();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execSetAlpha)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlpha(Z_Param_InAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execGetScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execSetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execGetOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuSlot::execSetOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOffset(Z_Param_InOffset);
		P_NATIVE_END;
	}
	void UTobiiRadialMenuSlot::StaticRegisterNativesUTobiiRadialMenuSlot()
	{
		UClass* Class = UTobiiRadialMenuSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlpha", &UTobiiRadialMenuSlot::execGetAlpha },
			{ "GetOffset", &UTobiiRadialMenuSlot::execGetOffset },
			{ "GetScale", &UTobiiRadialMenuSlot::execGetScale },
			{ "SetAlpha", &UTobiiRadialMenuSlot::execSetAlpha },
			{ "SetOffset", &UTobiiRadialMenuSlot::execSetOffset },
			{ "SetScale", &UTobiiRadialMenuSlot::execSetScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics
	{
		struct TobiiRadialMenuSlot_eventGetAlpha_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetAlpha", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventGetAlpha_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics
	{
		struct TobiiRadialMenuSlot_eventGetOffset_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetOffset", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventGetOffset_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics
	{
		struct TobiiRadialMenuSlot_eventGetScale_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventGetScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "GetScale", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventGetScale_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics
	{
		struct TobiiRadialMenuSlot_eventSetAlpha_Parms
		{
			float InAlpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::NewProp_InAlpha = { "InAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetAlpha_Parms, InAlpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::NewProp_InAlpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetAlpha", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventSetAlpha_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics
	{
		struct TobiiRadialMenuSlot_eventSetOffset_Parms
		{
			FVector2D InOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetOffset_Parms, InOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::NewProp_InOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetOffset", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventSetOffset_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics
	{
		struct TobiiRadialMenuSlot_eventSetScale_Parms
		{
			float InScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuSlot_eventSetScale_Parms, InScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuSlot, nullptr, "SetScale", nullptr, nullptr, sizeof(TobiiRadialMenuSlot_eventSetScale_Parms), Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister()
	{
		return UTobiiRadialMenuSlot::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiRadialMenuSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetAlpha, "GetAlpha" }, // 3718644412
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetOffset, "GetOffset" }, // 3746066367
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_GetScale, "GetScale" }, // 1340121717
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetAlpha, "SetAlpha" }, // 354589132
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetOffset, "SetOffset" }, // 3802547862
		{ &Z_Construct_UFunction_UTobiiRadialMenuSlot_SetScale, "SetScale" }, // 3672129685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Scale), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Layout|Radial Menu Slot" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuSlot, Alpha), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiRadialMenuSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::ClassParams = {
		&UTobiiRadialMenuSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiRadialMenuSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiRadialMenuSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiRadialMenuSlot, 1988944586);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiRadialMenuSlot>()
	{
		return UTobiiRadialMenuSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiRadialMenuSlot(Z_Construct_UClass_UTobiiRadialMenuSlot, &UTobiiRadialMenuSlot::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiRadialMenuSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiRadialMenuSlot);
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execAddRadialMenuChild)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTobiiRadialMenuSlot**)Z_Param__Result=P_THIS->AddRadialMenuChild(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetVertexCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewVertexCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexCount(Z_Param_NewVertexCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetRadiusPx)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadiusPx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadiusPx(Z_Param_NewRadiusPx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetAngularDisplacementDeg)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAngularDisplacementDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAngularDisplacementDeg(Z_Param_NewAngularDisplacementDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetSegmentSeparationPx)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSegmentSeparationPx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSegmentSeparationPx(Z_Param_NewSegmentSeparationPx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetBorderThicknessPx)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewBorderThicknessPx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBorderThicknessPx(Z_Param_NewBorderThicknessPx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetPanelColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewPanelColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPanelColor(Z_Param_NewPanelColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetBorderColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewBorderColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBorderColor(Z_Param_NewBorderColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiRadialMenuWidget::execSetUseHardBorder)
	{
		P_GET_UBOOL(Z_Param_bNewUseHardBorder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseHardBorder(Z_Param_bNewUseHardBorder);
		P_NATIVE_END;
	}
	void UTobiiRadialMenuWidget::StaticRegisterNativesUTobiiRadialMenuWidget()
	{
		UClass* Class = UTobiiRadialMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRadialMenuChild", &UTobiiRadialMenuWidget::execAddRadialMenuChild },
			{ "SetAngularDisplacementDeg", &UTobiiRadialMenuWidget::execSetAngularDisplacementDeg },
			{ "SetBorderColor", &UTobiiRadialMenuWidget::execSetBorderColor },
			{ "SetBorderThicknessPx", &UTobiiRadialMenuWidget::execSetBorderThicknessPx },
			{ "SetPanelColor", &UTobiiRadialMenuWidget::execSetPanelColor },
			{ "SetRadiusPx", &UTobiiRadialMenuWidget::execSetRadiusPx },
			{ "SetSegmentSeparationPx", &UTobiiRadialMenuWidget::execSetSegmentSeparationPx },
			{ "SetUseHardBorder", &UTobiiRadialMenuWidget::execSetUseHardBorder },
			{ "SetVertexCount", &UTobiiRadialMenuWidget::execSetVertexCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics
	{
		struct TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms
		{
			UWidget* Content;
			UTobiiRadialMenuSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms, ReturnValue), Z_Construct_UClass_UTobiiRadialMenuSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "AddRadialMenuChild", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventAddRadialMenuChild_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics
	{
		struct TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms
		{
			float NewAngularDisplacementDeg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAngularDisplacementDeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::NewProp_NewAngularDisplacementDeg = { "NewAngularDisplacementDeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms, NewAngularDisplacementDeg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::NewProp_NewAngularDisplacementDeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetAngularDisplacementDeg", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetAngularDisplacementDeg_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics
	{
		struct TobiiRadialMenuWidget_eventSetBorderColor_Parms
		{
			FColor NewBorderColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBorderColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::NewProp_NewBorderColor = { "NewBorderColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetBorderColor_Parms, NewBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::NewProp_NewBorderColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetBorderColor", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetBorderColor_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms
		{
			float NewBorderThicknessPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBorderThicknessPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::NewProp_NewBorderThicknessPx = { "NewBorderThicknessPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms, NewBorderThicknessPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::NewProp_NewBorderThicknessPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetBorderThicknessPx", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetBorderThicknessPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics
	{
		struct TobiiRadialMenuWidget_eventSetPanelColor_Parms
		{
			FColor NewPanelColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPanelColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::NewProp_NewPanelColor = { "NewPanelColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetPanelColor_Parms, NewPanelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::NewProp_NewPanelColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetPanelColor", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetPanelColor_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetRadiusPx_Parms
		{
			float NewRadiusPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewRadiusPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::NewProp_NewRadiusPx = { "NewRadiusPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetRadiusPx_Parms, NewRadiusPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::NewProp_NewRadiusPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetRadiusPx", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetRadiusPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics
	{
		struct TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms
		{
			float NewSegmentSeparationPx;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSegmentSeparationPx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::NewProp_NewSegmentSeparationPx = { "NewSegmentSeparationPx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms, NewSegmentSeparationPx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::NewProp_NewSegmentSeparationPx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetSegmentSeparationPx", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetSegmentSeparationPx_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics
	{
		struct TobiiRadialMenuWidget_eventSetUseHardBorder_Parms
		{
			bool bNewUseHardBorder;
		};
		static void NewProp_bNewUseHardBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewUseHardBorder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder_SetBit(void* Obj)
	{
		((TobiiRadialMenuWidget_eventSetUseHardBorder_Parms*)Obj)->bNewUseHardBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder = { "bNewUseHardBorder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiRadialMenuWidget_eventSetUseHardBorder_Parms), &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::NewProp_bNewUseHardBorder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetUseHardBorder", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetUseHardBorder_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics
	{
		struct TobiiRadialMenuWidget_eventSetVertexCount_Parms
		{
			int32 NewVertexCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewVertexCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::NewProp_NewVertexCount = { "NewVertexCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiRadialMenuWidget_eventSetVertexCount_Parms, NewVertexCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::NewProp_NewVertexCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radial Menu" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiRadialMenuWidget, nullptr, "SetVertexCount", nullptr, nullptr, sizeof(TobiiRadialMenuWidget_eventSetVertexCount_Parms), Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiRadialMenuWidget_NoRegister()
	{
		return UTobiiRadialMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiRadialMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHardBorder_MetaData[];
#endif
		static void NewProp_bUseHardBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHardBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PanelColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderThicknessPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BorderThicknessPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentSeparationPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SegmentSeparationPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularDisplacementDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngularDisplacementDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadiusPx_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadiusPx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VertexCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_AddRadialMenuChild, "AddRadialMenuChild" }, // 3004288625
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetAngularDisplacementDeg, "SetAngularDisplacementDeg" }, // 1203421485
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderColor, "SetBorderColor" }, // 231942973
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetBorderThicknessPx, "SetBorderThicknessPx" }, // 4015671183
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetPanelColor, "SetPanelColor" }, // 3016542130
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetRadiusPx, "SetRadiusPx" }, // 2615284895
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetSegmentSeparationPx, "SetSegmentSeparationPx" }, // 1405618487
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetUseHardBorder, "SetUseHardBorder" }, // 1747538768
		{ &Z_Construct_UFunction_UTobiiRadialMenuWidget_SetVertexCount, "SetVertexCount" }, // 293810272
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  */" },
		{ "DisplayName", "Tobii Radial Menu" },
		{ "IncludePath", "GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//A hard border will not be blended with the panel, while a soft border will be blended\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "A hard border will not be blended with the panel, while a soft border will be blended" },
	};
#endif
	void Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_SetBit(void* Obj)
	{
		((UTobiiRadialMenuWidget*)Obj)->bUseHardBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder = { "bUseHardBorder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTobiiRadialMenuWidget), &Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//The color of the borders around each panel\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The color of the borders around each panel" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//The color of the panels themselves\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The color of the panels themselves" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor = { "PanelColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, PanelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//The thickness of the border area\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The thickness of the border area" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx = { "BorderThicknessPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, BorderThicknessPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//The amount of pixels separating each segment\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The amount of pixels separating each segment" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx = { "SegmentSeparationPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, SegmentSeparationPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//This is how rotated the panel is. Useful if you want another orientation.\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "This is how rotated the panel is. Useful if you want another orientation." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg = { "AngularDisplacementDeg", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, AngularDisplacementDeg), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//This is the preferred radius. This will inform the desired size of the widget\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "This is the preferred radius. This will inform the desired size of the widget" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx = { "RadiusPx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, RadiusPx), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData[] = {
		{ "Category", "Radial Menu" },
		{ "Comment", "//The amount of vertices that will be used for the outside of the circle segments in total.\n" },
		{ "ModuleRelativePath", "Public/GTOMAwareUI/TobiiRadialMenuWidget.h" },
		{ "ToolTip", "The amount of vertices that will be used for the outside of the circle segments in total." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount = { "VertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTobiiRadialMenuWidget, VertexCount), METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_bUseHardBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_PanelColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_BorderThicknessPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_SegmentSeparationPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_AngularDisplacementDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_RadiusPx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::NewProp_VertexCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiRadialMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::ClassParams = {
		&UTobiiRadialMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiRadialMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiRadialMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiRadialMenuWidget, 3118690998);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiRadialMenuWidget>()
	{
		return UTobiiRadialMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiRadialMenuWidget(Z_Construct_UClass_UTobiiRadialMenuWidget, &UTobiiRadialMenuWidget::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiRadialMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiRadialMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
