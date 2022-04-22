// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiCore/Public/TobiiBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiBlueprintLibrary() {}
// Cross Module References
	TOBIICORE_API UClass* Z_Construct_UClass_UTobiiBlueprintLibrary_NoRegister();
	TOBIICORE_API UClass* Z_Construct_UClass_UTobiiBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiCore();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDesktopTrackBox();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiDisplayInfo();
	TOBIICORE_API UEnum* Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus();
	TOBIICORE_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiHeadPoseData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execIsXRPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::IsXRPlayerController(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execConvertGazeToUserSpace)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldSpaceGazeDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UTobiiBlueprintLibrary::ConvertGazeToUserSpace(Z_Param_PlayerController,Z_Param_Out_WorldSpaceGazeDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execViewportUNormCoordToPixelCoord)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinateUNorm);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinatePx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportUNormCoordToPixelCoord(Z_Param_Out_InCoordinateUNorm,Z_Param_Out_OutCoordinatePx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execViewportPixelCoordToUNormCoord)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinatePx);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinateUNorm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportPixelCoordToUNormCoord(Z_Param_Out_InCoordinatePx,Z_Param_Out_OutCoordinateUNorm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execViewportCmCoordToPixelCoord)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinateCm);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinatePx);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportCmCoordToPixelCoord(Z_Param_Out_InCoordinateCm,Z_Param_Out_OutCoordinatePx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execViewportPixelCoordToCmCoord)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InCoordinatePx);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutCoordinateCm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportPixelCoordToCmCoord(Z_Param_Out_InCoordinatePx,Z_Param_Out_OutCoordinateCm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execViewportCoordinateUNormToVirtualDesktopPixel)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportCoordinateUNorm);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutVirtualDesktopPixel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::ViewportCoordinateUNormToVirtualDesktopPixel(Z_Param_Out_ViewportCoordinateUNorm,Z_Param_Out_OutVirtualDesktopPixel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execVirtualDesktopPixelToViewportCoordinateUNorm)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VirtualDesktopPixel);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportCoordinateUNorm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::VirtualDesktopPixelToViewportCoordinateUNorm(Z_Param_Out_VirtualDesktopPixel,Z_Param_Out_OutViewportCoordinateUNorm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execSaveTobiiSetting)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVarSettingToSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::SaveTobiiSetting(Z_Param_CVarSettingToSave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execLoadTobiiSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::LoadTobiiSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execSetTobiiFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVarName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::SetTobiiFloat(Z_Param_CVarName,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiFloat(Z_Param_CVarName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execSetTobiiInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::SetTobiiInt(Z_Param_CVarName,Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CVarName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiInt(Z_Param_CVarName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiDesktopTrackBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiDesktopTrackBox*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiDesktopTrackBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiHeadPoseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiHeadPoseData*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiHeadPoseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiInfiniteScreenAngles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiInfiniteScreenAngles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiDisplayInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiDisplayInfo*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiDisplayInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiGazeTrackerStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETobiiGazeTrackerStatus*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiGazeTrackerStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiCombinedWorldGazeHitData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiCombinedWorldGazeHitData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiRightGazeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiRightGazeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiLeftGazeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiLeftGazeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiCombinedGazeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTobiiGazeData*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiCombinedGazeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiEyetrackingFrozen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiEyetrackingFrozen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execSetTobiiEyetrackingFrozen)
	{
		P_GET_UBOOL(Z_Param_bEyetrackingFrozen);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::SetTobiiEyetrackingFrozen(Z_Param_bEyetrackingFrozen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execGetTobiiEyetrackingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiBlueprintLibrary::GetTobiiEyetrackingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiBlueprintLibrary::execSetTobiiEyetrackingEnabled)
	{
		P_GET_UBOOL(Z_Param_bEyetrackingEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiBlueprintLibrary::SetTobiiEyetrackingEnabled(Z_Param_bEyetrackingEnabled);
		P_NATIVE_END;
	}
	void UTobiiBlueprintLibrary::StaticRegisterNativesUTobiiBlueprintLibrary()
	{
		UClass* Class = UTobiiBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertGazeToUserSpace", &UTobiiBlueprintLibrary::execConvertGazeToUserSpace },
			{ "GetTobiiCombinedGazeData", &UTobiiBlueprintLibrary::execGetTobiiCombinedGazeData },
			{ "GetTobiiCombinedWorldGazeHitData", &UTobiiBlueprintLibrary::execGetTobiiCombinedWorldGazeHitData },
			{ "GetTobiiDesktopTrackBox", &UTobiiBlueprintLibrary::execGetTobiiDesktopTrackBox },
			{ "GetTobiiDisplayInformation", &UTobiiBlueprintLibrary::execGetTobiiDisplayInformation },
			{ "GetTobiiEyetrackingEnabled", &UTobiiBlueprintLibrary::execGetTobiiEyetrackingEnabled },
			{ "GetTobiiEyetrackingFrozen", &UTobiiBlueprintLibrary::execGetTobiiEyetrackingFrozen },
			{ "GetTobiiFloat", &UTobiiBlueprintLibrary::execGetTobiiFloat },
			{ "GetTobiiGazeTrackerStatus", &UTobiiBlueprintLibrary::execGetTobiiGazeTrackerStatus },
			{ "GetTobiiHeadPoseData", &UTobiiBlueprintLibrary::execGetTobiiHeadPoseData },
			{ "GetTobiiInfiniteScreenAngles", &UTobiiBlueprintLibrary::execGetTobiiInfiniteScreenAngles },
			{ "GetTobiiInt", &UTobiiBlueprintLibrary::execGetTobiiInt },
			{ "GetTobiiLeftGazeData", &UTobiiBlueprintLibrary::execGetTobiiLeftGazeData },
			{ "GetTobiiRightGazeData", &UTobiiBlueprintLibrary::execGetTobiiRightGazeData },
			{ "IsXRPlayerController", &UTobiiBlueprintLibrary::execIsXRPlayerController },
			{ "LoadTobiiSettings", &UTobiiBlueprintLibrary::execLoadTobiiSettings },
			{ "SaveTobiiSetting", &UTobiiBlueprintLibrary::execSaveTobiiSetting },
			{ "SetTobiiEyetrackingEnabled", &UTobiiBlueprintLibrary::execSetTobiiEyetrackingEnabled },
			{ "SetTobiiEyetrackingFrozen", &UTobiiBlueprintLibrary::execSetTobiiEyetrackingFrozen },
			{ "SetTobiiFloat", &UTobiiBlueprintLibrary::execSetTobiiFloat },
			{ "SetTobiiInt", &UTobiiBlueprintLibrary::execSetTobiiInt },
			{ "ViewportCmCoordToPixelCoord", &UTobiiBlueprintLibrary::execViewportCmCoordToPixelCoord },
			{ "ViewportCoordinateUNormToVirtualDesktopPixel", &UTobiiBlueprintLibrary::execViewportCoordinateUNormToVirtualDesktopPixel },
			{ "ViewportPixelCoordToCmCoord", &UTobiiBlueprintLibrary::execViewportPixelCoordToCmCoord },
			{ "ViewportPixelCoordToUNormCoord", &UTobiiBlueprintLibrary::execViewportPixelCoordToUNormCoord },
			{ "ViewportUNormCoordToPixelCoord", &UTobiiBlueprintLibrary::execViewportUNormCoordToPixelCoord },
			{ "VirtualDesktopPixelToViewportCoordinateUNorm", &UTobiiBlueprintLibrary::execVirtualDesktopPixelToViewportCoordinateUNorm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics
	{
		struct TobiiBlueprintLibrary_eventConvertGazeToUserSpace_Parms
		{
			APlayerController* PlayerController;
			FVector WorldSpaceGazeDirection;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceGazeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpaceGazeDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertGazeToUserSpace_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_WorldSpaceGazeDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_WorldSpaceGazeDirection = { "WorldSpaceGazeDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertGazeToUserSpace_Parms, WorldSpaceGazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_WorldSpaceGazeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_WorldSpaceGazeDirection_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventConvertGazeToUserSpace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_WorldSpaceGazeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function lets you move from world space to the local space of the user. In XR this would be head space, and for desktop it would be relative to the scene camera.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This function lets you move from world space to the local space of the user. In XR this would be head space, and for desktop it would be relative to the scene camera." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ConvertGazeToUserSpace", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventConvertGazeToUserSpace_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiCombinedGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiCombinedGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "Comment", "/**\n\x09  * This is the main method to get basic eye tracking data. You should not be using this though for most things. Use the focus system instead if you can.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is the main method to get basic eye tracking data. You should not be using this though for most things. Use the focus system instead if you can." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiCombinedGazeData", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiCombinedGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiCombinedWorldGazeHitData_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiCombinedWorldGazeHitData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiCombinedWorldGazeHitData", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiCombinedWorldGazeHitData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiDesktopTrackBox_Parms
		{
			FTobiiDesktopTrackBox ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiDesktopTrackBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiDesktopTrackBox, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Eyetracking" },
		{ "Comment", "/**\n\x09  * Track box information.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Track box information." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiDesktopTrackBox", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiDesktopTrackBox_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiDisplayInformation_Parms
		{
			FTobiiDisplayInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiDisplayInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiDisplayInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "Comment", "/**\n\x09  * Gets information about the display device and window used for the application.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Gets information about the display device and window used for the application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiDisplayInformation", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiDisplayInformation_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiEyetrackingEnabled_Parms
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
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventGetTobiiEyetrackingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventGetTobiiEyetrackingEnabled_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiEyetrackingEnabled", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiEyetrackingEnabled_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiEyetrackingFrozen_Parms
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
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventGetTobiiEyetrackingFrozen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventGetTobiiEyetrackingFrozen_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiEyetrackingFrozen", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiEyetrackingFrozen_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiFloat_Parms
		{
			FString CVarName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_CVarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiFloat", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiFloat_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiGazeTrackerStatus_Parms
		{
			ETobiiGazeTrackerStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiGazeTrackerStatus_Parms, ReturnValue), Z_Construct_UEnum_TobiiCore_ETobiiGazeTrackerStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "Comment", "/**\n\x09  * This will indicate the readiness of the gaze tracking subsystem. For most applications this will also indicate head tracking readiness.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This will indicate the readiness of the gaze tracking subsystem. For most applications this will also indicate head tracking readiness." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiGazeTrackerStatus", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiGazeTrackerStatus_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiHeadPoseData_Parms
		{
			FTobiiHeadPoseData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiHeadPoseData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiHeadPoseData, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Desktop Eyetracking" },
		{ "Comment", "/**\n\x09  * This is the main method to get basic head pose data.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is the main method to get basic head pose data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiHeadPoseData", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiHeadPoseData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiInfiniteScreenAngles_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiInfiniteScreenAngles_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiInfiniteScreenAngles", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiInfiniteScreenAngles_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiInt_Parms
		{
			FString CVarName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiInt_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_CVarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "Comment", "//Use these functions to get and set CVars in runtime.\n" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Use these functions to get and set CVars in runtime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiInt", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiInt_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiLeftGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiLeftGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiLeftGazeData", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiLeftGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics
	{
		struct TobiiBlueprintLibrary_eventGetTobiiRightGazeData_Parms
		{
			FTobiiGazeData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventGetTobiiRightGazeData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTobiiGazeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "GetTobiiRightGazeData", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventGetTobiiRightGazeData_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics
	{
		struct TobiiBlueprintLibrary_eventIsXRPlayerController_Parms
		{
			const APlayerController* PlayerController;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController_MetaData)) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventIsXRPlayerController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii XR Utils" },
		{ "Comment", "/**\n\x09* Tests if a given player controller is XR enabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Tests if a given player controller is XR enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "IsXRPlayerController", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventIsXRPlayerController_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "Comment", "//If you are persisting your custom CVar values, you should call this function when you start your application.\n" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "If you are persisting your custom CVar values, you should call this function when you start your application." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "LoadTobiiSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics
	{
		struct TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms
		{
			FString CVarSettingToSave;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarSettingToSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::NewProp_CVarSettingToSave = { "CVarSettingToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms, CVarSettingToSave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::NewProp_CVarSettingToSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "Comment", "//If you want to persist a CVar to .ini, use this function.\n" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "If you want to persist a CVar to .ini, use this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "SaveTobiiSetting", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventSaveTobiiSetting_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiEyetrackingEnabled_Parms
		{
			bool bEyetrackingEnabled;
		};
		static void NewProp_bEyetrackingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEyetrackingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventSetTobiiEyetrackingEnabled_Parms*)Obj)->bEyetrackingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled = { "bEyetrackingEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventSetTobiiEyetrackingEnabled_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::NewProp_bEyetrackingEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "Comment", "/**\n\x09  * This is just a helper function to set the eyetracking enabled CVar for blueprint convenience.\n\x09  * Set eyetracking disabled if you don't need tracking and don't want to pay the CPU cost in some parts of your program.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is just a helper function to set the eyetracking enabled CVar for blueprint convenience.\nSet eyetracking disabled if you don't need tracking and don't want to pay the CPU cost in some parts of your program." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "SetTobiiEyetrackingEnabled", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventSetTobiiEyetrackingEnabled_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiEyetrackingFrozen_Parms
		{
			bool bEyetrackingFrozen;
		};
		static void NewProp_bEyetrackingFrozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEyetrackingFrozen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventSetTobiiEyetrackingFrozen_Parms*)Obj)->bEyetrackingFrozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen = { "bEyetrackingFrozen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventSetTobiiEyetrackingFrozen_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::NewProp_bEyetrackingFrozen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Eyetracking" },
		{ "Comment", "/**\n\x09  * This is just a helper function to set the eyetracking frozen CVar for blueprint convenience.\n\x09  * Freezing the eyetracking can be very useful for debugging as well as when trying to show someone what effect eyetracking has.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "This is just a helper function to set the eyetracking frozen CVar for blueprint convenience.\nFreezing the eyetracking can be very useful for debugging as well as when trying to show someone what effect eyetracking has." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "SetTobiiEyetrackingFrozen", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventSetTobiiEyetrackingFrozen_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiFloat_Parms
		{
			FString CVarName;
			float NewValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_CVarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "SetTobiiFloat", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventSetTobiiFloat_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics
	{
		struct TobiiBlueprintLibrary_eventSetTobiiInt_Parms
		{
			FString CVarName;
			int32 NewValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CVarName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiInt_Parms, CVarName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventSetTobiiInt_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_CVarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Settings" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "SetTobiiInt", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventSetTobiiInt_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms
		{
			FVector2D InCoordinateCm;
			FVector2D OutCoordinatePx;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinateCm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinateCm;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinatePx;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm = { "InCoordinateCm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms, InCoordinateCm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_OutCoordinatePx = { "OutCoordinatePx", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms, OutCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_InCoordinateCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_OutCoordinatePx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ViewportCmCoordToPixelCoord", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventViewportCmCoordToPixelCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms
		{
			FVector2D ViewportCoordinateUNorm;
			FVector2D OutVirtualDesktopPixel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewportCoordinateUNorm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewportCoordinateUNorm;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutVirtualDesktopPixel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm = { "ViewportCoordinateUNorm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms, ViewportCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_OutVirtualDesktopPixel = { "OutVirtualDesktopPixel", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms, OutVirtualDesktopPixel), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ViewportCoordinateUNorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_OutVirtualDesktopPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ViewportCoordinateUNormToVirtualDesktopPixel", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventViewportCoordinateUNormToVirtualDesktopPixel_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms
		{
			FVector2D InCoordinatePx;
			FVector2D OutCoordinateCm;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinatePx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinatePx;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinateCm;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx = { "InCoordinatePx", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms, InCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_OutCoordinateCm = { "OutCoordinateCm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms, OutCoordinateCm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_InCoordinatePx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_OutCoordinateCm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ViewportPixelCoordToCmCoord", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventViewportPixelCoordToCmCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms
		{
			FVector2D InCoordinatePx;
			FVector2D OutCoordinateUNorm;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinatePx_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinatePx;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinateUNorm;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_InCoordinatePx_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_InCoordinatePx = { "InCoordinatePx", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms, InCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_InCoordinatePx_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_InCoordinatePx_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_OutCoordinateUNorm = { "OutCoordinateUNorm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms, OutCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_InCoordinatePx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_OutCoordinateUNorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ViewportPixelCoordToUNormCoord", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventViewportPixelCoordToUNormCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics
	{
		struct TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms
		{
			FVector2D InCoordinateUNorm;
			FVector2D OutCoordinatePx;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCoordinateUNorm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InCoordinateUNorm;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutCoordinatePx;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_InCoordinateUNorm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_InCoordinateUNorm = { "InCoordinateUNorm", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms, InCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_InCoordinateUNorm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_InCoordinateUNorm_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_OutCoordinatePx = { "OutCoordinatePx", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms, OutCoordinatePx), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_InCoordinateUNorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_OutCoordinatePx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "ViewportUNormCoordToPixelCoord", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventViewportUNormCoordToPixelCoord_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics
	{
		struct TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms
		{
			FVector2D VirtualDesktopPixel;
			FVector2D OutViewportCoordinateUNorm;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualDesktopPixel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VirtualDesktopPixel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutViewportCoordinateUNorm;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel = { "VirtualDesktopPixel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms, VirtualDesktopPixel), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_OutViewportCoordinateUNorm = { "OutViewportCoordinateUNorm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms, OutViewportCoordinateUNorm), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms), &Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_VirtualDesktopPixel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_OutViewportCoordinateUNorm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * Use this function if you want to project slate information to viewport space. Includes DPI adjustments\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Use this function if you want to project slate information to viewport space. Includes DPI adjustments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiBlueprintLibrary, nullptr, "VirtualDesktopPixelToViewportCoordinateUNorm", nullptr, nullptr, sizeof(TobiiBlueprintLibrary_eventVirtualDesktopPixelToViewportCoordinateUNorm_Parms), Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiBlueprintLibrary_NoRegister()
	{
		return UTobiiBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ConvertGazeToUserSpace, "ConvertGazeToUserSpace" }, // 3209115480
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedGazeData, "GetTobiiCombinedGazeData" }, // 2022338817
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiCombinedWorldGazeHitData, "GetTobiiCombinedWorldGazeHitData" }, // 1288177839
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDesktopTrackBox, "GetTobiiDesktopTrackBox" }, // 1351891869
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiDisplayInformation, "GetTobiiDisplayInformation" }, // 985301151
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingEnabled, "GetTobiiEyetrackingEnabled" }, // 394738562
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiEyetrackingFrozen, "GetTobiiEyetrackingFrozen" }, // 366128087
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiFloat, "GetTobiiFloat" }, // 2501726109
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiGazeTrackerStatus, "GetTobiiGazeTrackerStatus" }, // 1558834915
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiHeadPoseData, "GetTobiiHeadPoseData" }, // 127576632
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInfiniteScreenAngles, "GetTobiiInfiniteScreenAngles" }, // 3329935316
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiInt, "GetTobiiInt" }, // 639102444
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiLeftGazeData, "GetTobiiLeftGazeData" }, // 1831490603
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_GetTobiiRightGazeData, "GetTobiiRightGazeData" }, // 2455256607
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_IsXRPlayerController, "IsXRPlayerController" }, // 1416707905
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_LoadTobiiSettings, "LoadTobiiSettings" }, // 142256580
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SaveTobiiSetting, "SaveTobiiSetting" }, // 2445493884
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingEnabled, "SetTobiiEyetrackingEnabled" }, // 3256246210
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiEyetrackingFrozen, "SetTobiiEyetrackingFrozen" }, // 3790206338
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiFloat, "SetTobiiFloat" }, // 2618782639
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_SetTobiiInt, "SetTobiiInt" }, // 1449092382
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCmCoordToPixelCoord, "ViewportCmCoordToPixelCoord" }, // 3308556741
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportCoordinateUNormToVirtualDesktopPixel, "ViewportCoordinateUNormToVirtualDesktopPixel" }, // 1316189067
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToCmCoord, "ViewportPixelCoordToCmCoord" }, // 143817908
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportPixelCoordToUNormCoord, "ViewportPixelCoordToUNormCoord" }, // 1278710103
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_ViewportUNormCoordToPixelCoord, "ViewportUNormCoordToPixelCoord" }, // 360481150
		{ &Z_Construct_UFunction_UTobiiBlueprintLibrary_VirtualDesktopPixelToViewportCoordinateUNorm, "VirtualDesktopPixelToViewportCoordinateUNorm" }, // 4149904288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP.\n  */" },
		{ "IncludePath", "TobiiBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::ClassParams = {
		&UTobiiBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiBlueprintLibrary, 3271565222);
	template<> TOBIICORE_API UClass* StaticClass<UTobiiBlueprintLibrary>()
	{
		return UTobiiBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiBlueprintLibrary(Z_Construct_UClass_UTobiiBlueprintLibrary, &UTobiiBlueprintLibrary::StaticClass, TEXT("/Script/TobiiCore"), TEXT("UTobiiBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
