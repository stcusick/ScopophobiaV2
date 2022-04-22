// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGTOM_init() {}
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetGazeFocusSignature__DelegateSignature();
	TOBIIGTOM_API UFunction* Z_Construct_UDelegateFunction_TobiiGTOM_WidgetHoverSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveReceivedGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_PrimitiveLostGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetReceivedGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetLostGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetGazeFocusSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TobiiGTOM_WidgetHoverSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TobiiGTOM",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA5A3B4E7,
				0x3AE27318,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
