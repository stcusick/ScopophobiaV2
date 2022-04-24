// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TobiiGTOM/Public/TobiiGTOMBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTobiiGTOMBlueprintLibrary() {}
// Cross Module References
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_NoRegister();
	TOBIIGTOM_API UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TobiiGTOM();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOBIIGTOM_API UScriptStruct* Z_Construct_UScriptStruct_FTobiiGazeFocusData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetUniformlyDistributedRandomCirclePoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CircleRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetUniformlyDistributedRandomCirclePoint(Z_Param_CircleRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execTestRectEllipseIntersection)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleCenter);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleRightAxis);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleUpAxis);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RectangleExtents);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseCenter);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EllipseRadii);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EllipseRotationDeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestRectEllipseIntersection(Z_Param_Out_RectangleCenter,Z_Param_Out_RectangleRightAxis,Z_Param_Out_RectangleUpAxis,Z_Param_Out_RectangleExtents,Z_Param_Out_EllipseCenter,Z_Param_Out_EllipseRadii,Z_Param_Out_EllipseRotationDeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execTestConeSphereIntersection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeApex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ConeDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ConeAngleDeg);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_SphereCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TestConeSphereIntersection(Z_Param_Out_ConeApex,Z_Param_Out_ConeDirection,Z_Param_ConeAngleDeg,Z_Param_Out_SphereCenter,Z_Param_SphereRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execTransformWorldPointToWidgetLocal)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutLocalWidgetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TransformWorldPointToWidgetLocal(Z_Param_Component,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection,Z_Param_Out_OutLocalWidgetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execTransformWidgetLocalPointToWorld)
	{
		P_GET_OBJECT(UWidgetComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalWidgetLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(Z_Param_Component,Z_Param_Out_LocalWidgetLocation,Z_Param_Out_OutWorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execFindLargestInscribedAlignedRect)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CircleSegmentAngleRad);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CircleRadius);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LargestInscribedRectSize);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DistanceToCenter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::FindLargestInscribedAlignedRect(Z_Param_CircleSegmentAngleRad,Z_Param_CircleRadius,Z_Param_Out_LargestInscribedRectSize,Z_Param_Out_DistanceToCenter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execEmulateGazeFocusUsingWidgetInteractionComponent)
	{
		P_GET_OBJECT(UWidgetInteractionComponent,Z_Param_WidgetInteraction);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiGTOMBlueprintLibrary::EmulateGazeFocusUsingWidgetInteractionComponent(Z_Param_WidgetInteraction,ECollisionChannel(Z_Param_CollisionChannel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execMakeGazeFocusDataForWidgetInteractionComponent)
	{
		P_GET_OBJECT(UWidgetInteractionComponent,Z_Param_WidgetInteraction);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutGazeFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::MakeGazeFocusDataForWidgetInteractionComponent(Z_Param_WidgetInteraction,ECollisionChannel(Z_Param_CollisionChannel),Z_Param_Out_OutGazeFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execRegisterScreenSpaceGazeFocusableWidgets)
	{
		P_GET_OBJECT(UWidget,Z_Param_Root);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiGTOMBlueprintLibrary::RegisterScreenSpaceGazeFocusableWidgets(Z_Param_Root);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetPrimitiveComponentFocusLocation)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutFocusLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetPrimitiveComponentFocusLocation(Z_Param_Component,Z_Param_Out_OutFocusLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetPrimitiveComponentFocusOffset)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutFocusOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetPrimitiveComponentFocusOffset(Z_Param_Component,Z_Param_Out_OutFocusOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execIsWidgetGazeFocusable)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::IsWidgetGazeFocusable(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execIsPrimitiveComponentGazeFocusable)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::IsPrimitiveComponentGazeFocusable(Z_Param_PrimitiveComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetNaiveGazeHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHitResult*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetNaiveGazeHit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetAllFilteredGazeFocusData)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_FocusLayerFilterList);
		P_GET_UBOOL(Z_Param_bIsWhiteList);
		P_GET_UBOOL(Z_Param_bWantPrimitives);
		P_GET_UBOOL(Z_Param_bWantWidgets);
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetAllFilteredGazeFocusData(Z_Param_Out_FocusLayerFilterList,Z_Param_bIsWhiteList,Z_Param_bWantPrimitives,Z_Param_bWantWidgets,Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetFilteredGazeFocusData)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_FocusLayerFilterList);
		P_GET_UBOOL(Z_Param_bIsWhiteList);
		P_GET_UBOOL(Z_Param_bWantPrimitives);
		P_GET_UBOOL(Z_Param_bWantWidgets);
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetFilteredGazeFocusData(Z_Param_Out_FocusLayerFilterList,Z_Param_bIsWhiteList,Z_Param_bWantPrimitives,Z_Param_bWantWidgets,Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetAllGazeFocusData)
	{
		P_GET_TARRAY_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetAllGazeFocusData(Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execGetGazeFocusData)
	{
		P_GET_STRUCT_REF(FTobiiGazeFocusData,Z_Param_Out_OutFocusData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTobiiGTOMBlueprintLibrary::GetGazeFocusData(Z_Param_Out_OutFocusData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTobiiGTOMBlueprintLibrary::execSetGTOMPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_NewGTOMPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTobiiGTOMBlueprintLibrary::SetGTOMPlayerController(Z_Param_NewGTOMPlayerController);
		P_NATIVE_END;
	}
	void UTobiiGTOMBlueprintLibrary::StaticRegisterNativesUTobiiGTOMBlueprintLibrary()
	{
		UClass* Class = UTobiiGTOMBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EmulateGazeFocusUsingWidgetInteractionComponent", &UTobiiGTOMBlueprintLibrary::execEmulateGazeFocusUsingWidgetInteractionComponent },
			{ "FindLargestInscribedAlignedRect", &UTobiiGTOMBlueprintLibrary::execFindLargestInscribedAlignedRect },
			{ "GetAllFilteredGazeFocusData", &UTobiiGTOMBlueprintLibrary::execGetAllFilteredGazeFocusData },
			{ "GetAllGazeFocusData", &UTobiiGTOMBlueprintLibrary::execGetAllGazeFocusData },
			{ "GetFilteredGazeFocusData", &UTobiiGTOMBlueprintLibrary::execGetFilteredGazeFocusData },
			{ "GetGazeFocusData", &UTobiiGTOMBlueprintLibrary::execGetGazeFocusData },
			{ "GetNaiveGazeHit", &UTobiiGTOMBlueprintLibrary::execGetNaiveGazeHit },
			{ "GetPrimitiveComponentFocusLocation", &UTobiiGTOMBlueprintLibrary::execGetPrimitiveComponentFocusLocation },
			{ "GetPrimitiveComponentFocusOffset", &UTobiiGTOMBlueprintLibrary::execGetPrimitiveComponentFocusOffset },
			{ "GetUniformlyDistributedRandomCirclePoint", &UTobiiGTOMBlueprintLibrary::execGetUniformlyDistributedRandomCirclePoint },
			{ "IsPrimitiveComponentGazeFocusable", &UTobiiGTOMBlueprintLibrary::execIsPrimitiveComponentGazeFocusable },
			{ "IsWidgetGazeFocusable", &UTobiiGTOMBlueprintLibrary::execIsWidgetGazeFocusable },
			{ "MakeGazeFocusDataForWidgetInteractionComponent", &UTobiiGTOMBlueprintLibrary::execMakeGazeFocusDataForWidgetInteractionComponent },
			{ "RegisterScreenSpaceGazeFocusableWidgets", &UTobiiGTOMBlueprintLibrary::execRegisterScreenSpaceGazeFocusableWidgets },
			{ "SetGTOMPlayerController", &UTobiiGTOMBlueprintLibrary::execSetGTOMPlayerController },
			{ "TestConeSphereIntersection", &UTobiiGTOMBlueprintLibrary::execTestConeSphereIntersection },
			{ "TestRectEllipseIntersection", &UTobiiGTOMBlueprintLibrary::execTestRectEllipseIntersection },
			{ "TransformWidgetLocalPointToWorld", &UTobiiGTOMBlueprintLibrary::execTransformWidgetLocalPointToWorld },
			{ "TransformWorldPointToWidgetLocal", &UTobiiGTOMBlueprintLibrary::execTransformWorldPointToWidgetLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventEmulateGazeFocusUsingWidgetInteractionComponent_Parms
		{
			UWidgetInteractionComponent* WidgetInteraction;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInteraction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_WidgetInteraction = { "WidgetInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventEmulateGazeFocusUsingWidgetInteractionComponent_Parms, WidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventEmulateGazeFocusUsingWidgetInteractionComponent_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_WidgetInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::NewProp_CollisionChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Helper function to simulate gaze focus using a widget interaction component\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Helper function to simulate gaze focus using a widget interaction component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "EmulateGazeFocusUsingWidgetInteractionComponent", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventEmulateGazeFocusUsingWidgetInteractionComponent_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms
		{
			float CircleSegmentAngleRad;
			float CircleRadius;
			FVector2D LargestInscribedRectSize;
			float DistanceToCenter;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleSegmentAngleRad;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LargestInscribedRectSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToCenter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleSegmentAngleRad = { "CircleSegmentAngleRad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, CircleSegmentAngleRad), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, CircleRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_LargestInscribedRectSize = { "LargestInscribedRectSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, LargestInscribedRectSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_DistanceToCenter = { "DistanceToCenter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms, DistanceToCenter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleSegmentAngleRad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_CircleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_LargestInscribedRectSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_DistanceToCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils Utils" },
		{ "Comment", "/**\n\x09  * This function will find the largest possible rectangle that can be inscribed into a given circle.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will find the largest possible rectangle that can be inscribed into a given circle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "FindLargestInscribedAlignedRect", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventFindLargestInscribedAlignedRect_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms
		{
			TArray<FName> FocusLayerFilterList;
			bool bIsWhiteList;
			bool bWantPrimitives;
			bool bWantWidgets;
			TArray<FTobiiGazeFocusData> OutFocusData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FocusLayerFilterList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusLayerFilterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FocusLayerFilterList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteList_MetaData[];
#endif
		static void NewProp_bIsWhiteList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteList;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFocusData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_Inner = { "FocusLayerFilterList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList = { "FocusLayerFilterList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms, FocusLayerFilterList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms*)Obj)->bIsWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList = { "bIsWhiteList", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms*)Obj)->bWantPrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives = { "bWantPrimitives", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms*)Obj)->bWantWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets = { "bWantWidgets", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_OutFocusData_Inner = { "OutFocusData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms, OutFocusData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bIsWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_bWantWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_OutFocusData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_OutFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "Comment", "/**\n\x09  * Get a sorted list of components that the focus system believes the user is looking at. This variant allows you to filter out certain objects in accordance with a filter list.\n\x09  *\n\x09  * @param FocusLayerFilterList\x09These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n\x09  * @param bIsWhiteList\x09\x09\x09This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n\x09  * @param bWantPrimitives\x09\x09If this is true, focus data with valid UPrimitiveComponents will be included in the output results.\n\x09  * @param bWantWidgets\x09\x09\x09If this is true, focus data with valid UWidgets will be included in the output results.\n\x09  * @param OutFocusData\x09\x09\x09Output focus data.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Get a sorted list of components that the focus system believes the user is looking at. This variant allows you to filter out certain objects in accordance with a filter list.\n\n@param FocusLayerFilterList These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n@param bIsWhiteList                 This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n@param bWantPrimitives              If this is true, focus data with valid UPrimitiveComponents will be included in the output results.\n@param bWantWidgets                 If this is true, focus data with valid UWidgets will be included in the output results.\n@param OutFocusData                 Output focus data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetAllFilteredGazeFocusData", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetAllFilteredGazeFocusData_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetAllGazeFocusData_Parms
		{
			TArray<FTobiiGazeFocusData> OutFocusData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFocusData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_OutFocusData_Inner = { "OutFocusData", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetAllGazeFocusData_Parms, OutFocusData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetAllGazeFocusData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetAllGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_OutFocusData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_OutFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "Comment", "/**\n\x09  * Get a sorted list of components that the focus system believes the user is looking at.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Get a sorted list of components that the focus system believes the user is looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetAllGazeFocusData", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetAllGazeFocusData_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms
		{
			TArray<FName> FocusLayerFilterList;
			bool bIsWhiteList;
			bool bWantPrimitives;
			bool bWantWidgets;
			FTobiiGazeFocusData OutFocusData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FocusLayerFilterList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusLayerFilterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FocusLayerFilterList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWhiteList_MetaData[];
#endif
		static void NewProp_bIsWhiteList_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWhiteList;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_Inner = { "FocusLayerFilterList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList = { "FocusLayerFilterList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms, FocusLayerFilterList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms*)Obj)->bIsWhiteList = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList = { "bIsWhiteList", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms*)Obj)->bWantPrimitives = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives = { "bWantPrimitives", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms*)Obj)->bWantWidgets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets = { "bWantWidgets", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms, OutFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_FocusLayerFilterList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bIsWhiteList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantPrimitives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_bWantWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_OutFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "Comment", "/**\n\x09  * Get the component the focus system believes the user is looking at. This variant allows you to filter out certain objects in accordance with a filter list.\n\x09  *\n\x09  * @param FocusLayerFilterList\x09These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n\x09  * @param bIsWhiteList\x09\x09\x09This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n\x09  * @param bWantPrimitives\x09\x09If this is true, focus data with valid UPrimitiveComponents will be included in the output results.\n\x09  * @param bWantWidgets\x09\x09\x09If this is true, focus data with valid UWidgets will be included in the output results.\n\x09  * @param OutFocusData\x09\x09\x09Output focus data.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Get the component the focus system believes the user is looking at. This variant allows you to filter out certain objects in accordance with a filter list.\n\n@param FocusLayerFilterList These are the filters that will determine what focus data you will receive. The behavior of the filters are controlled by bIsWhiteList.\n@param bIsWhiteList                 This controls how the filters in FocusFilterList are used. If this is true, only focusables with a layer that is in the FocusFilterList will be considered. If this is false, the FocusFilterList will act like a black list, excluding any focusables whos layer can be found in the array.\n@param bWantPrimitives              If this is true, focus data with valid UPrimitiveComponents will be included in the output results.\n@param bWantWidgets                 If this is true, focus data with valid UWidgets will be included in the output results.\n@param OutFocusData                 Output focus data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetFilteredGazeFocusData", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetFilteredGazeFocusData_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetGazeFocusData_Parms
		{
			FTobiiGazeFocusData OutFocusData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_OutFocusData = { "OutFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetGazeFocusData_Parms, OutFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetGazeFocusData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetGazeFocusData_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_OutFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "Comment", "/**\n\x09  * Get the component the focus system believes the user is looking at.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Get the component the focus system believes the user is looking at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetGazeFocusData", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetGazeFocusData_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetNaiveGazeHit_Parms
		{
			FHitResult ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetNaiveGazeHit_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n \x09 * Gets a simple ray hit along combined gaze\n\x09 */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Gets a simple ray hit along combined gaze" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetNaiveGazeHit", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetNaiveGazeHit_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms
		{
			USceneComponent* Component;
			FVector OutFocusLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_OutFocusLocation = { "OutFocusLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms, OutFocusLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_OutFocusLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Gets the focus point on the primitive.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Gets the focus point on the primitive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetPrimitiveComponentFocusLocation", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusLocation_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms
		{
			USceneComponent* Component;
			FVector OutFocusOffset;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFocusOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_OutFocusOffset = { "OutFocusOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms, OutFocusOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_OutFocusOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Gets the *untransformed* focus offset for a primitive component.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Gets the *untransformed* focus offset for a primitive component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetPrimitiveComponentFocusOffset", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetPrimitiveComponentFocusOffset_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventGetUniformlyDistributedRandomCirclePoint_Parms
		{
			float CircleRadius;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetUniformlyDistributedRandomCirclePoint_Parms, CircleRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventGetUniformlyDistributedRandomCirclePoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::NewProp_CircleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * Get a random point on a circle centered at the origin that is uniformly distributed.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Get a random point on a circle centered at the origin that is uniformly distributed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "GetUniformlyDistributedRandomCirclePoint", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventGetUniformlyDistributedRandomCirclePoint_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent_MetaData)) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Tests to see whether a primitive component is gaze focusable\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Tests to see whether a primitive component is gaze focusable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "IsPrimitiveComponentGazeFocusable", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventIsPrimitiveComponentGazeFocusable_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventIsWidgetGazeFocusable_Parms
		{
			UWidget* Widget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventIsWidgetGazeFocusable_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventIsWidgetGazeFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventIsWidgetGazeFocusable_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Tests to see whether a widget is gaze focusable\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Tests to see whether a widget is gaze focusable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "IsWidgetGazeFocusable", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventIsWidgetGazeFocusable_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms
		{
			UWidgetInteractionComponent* WidgetInteraction;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			FTobiiGazeFocusData OutGazeFocusData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetInteraction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutGazeFocusData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_WidgetInteraction = { "WidgetInteraction", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms, WidgetInteraction), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_WidgetInteraction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_OutGazeFocusData = { "OutGazeFocusData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms, OutGazeFocusData), Z_Construct_UScriptStruct_FTobiiGazeFocusData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_WidgetInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_OutGazeFocusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/**\n\x09  * Helper function to simulate gaze focus using a widget interaction component\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Helper function to simulate gaze focus using a widget interaction component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "MakeGazeFocusDataForWidgetInteractionComponent", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventMakeGazeFocusDataForWidgetInteractionComponent_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventRegisterScreenSpaceGazeFocusableWidgets_Parms
		{
			UWidget* Root;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventRegisterScreenSpaceGazeFocusableWidgets_Parms, Root), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::NewProp_Root,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM Utils" },
		{ "Comment", "/* \n\x09 * This function will traverse a widget tree given a root and add any UTobiiGazeFocusableWidget to the screen space widget collection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "* This function will traverse a widget tree given a root and add any UTobiiGazeFocusableWidget to the screen space widget collection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "RegisterScreenSpaceGazeFocusableWidgets", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventRegisterScreenSpaceGazeFocusableWidgets_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventSetGTOMPlayerController_Parms
		{
			APlayerController* NewGTOMPlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGTOMPlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::NewProp_NewGTOMPlayerController = { "NewGTOMPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventSetGTOMPlayerController_Parms, NewGTOMPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::NewProp_NewGTOMPlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii GTOM" },
		{ "Comment", "/**\n\x09  * Set which player controller should be used for GTOM.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Set which player controller should be used for GTOM." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "SetGTOMPlayerController", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventSetGTOMPlayerController_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms
		{
			FVector ConeApex;
			FVector ConeDirection;
			float ConeAngleDeg;
			FVector SphereCenter;
			float SphereRadius;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeApex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeApex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeAngleDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ConeAngleDeg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SphereCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex = { "ConeApex", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeApex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection = { "ConeDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg = { "ConeAngleDeg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, ConeAngleDeg), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter = { "SphereCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, SphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms, SphereRadius), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius_MetaData)) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeApex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ConeAngleDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_SphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will test whether a right angle cone and a sphere intersects. Very useful for world space eye tracking.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will test whether a right angle cone and a sphere intersects. Very useful for world space eye tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TestConeSphereIntersection", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventTestConeSphereIntersection_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms
		{
			FVector2D RectangleCenter;
			FVector2D RectangleRightAxis;
			FVector2D RectangleUpAxis;
			FVector2D RectangleExtents;
			FVector2D EllipseCenter;
			FVector2D EllipseRadii;
			float EllipseRotationDeg;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleRightAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleRightAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleUpAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleUpAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RectangleExtents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RectangleExtents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EllipseCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseRadii_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EllipseRadii;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EllipseRotationDeg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EllipseRotationDeg;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter = { "RectangleCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis = { "RectangleRightAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleRightAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis = { "RectangleUpAxis", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleUpAxis), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents = { "RectangleExtents", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, RectangleExtents), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter = { "EllipseCenter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseCenter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii = { "EllipseRadii", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseRadii), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg = { "EllipseRotationDeg", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms, EllipseRotationDeg), METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg_MetaData)) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleRightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleUpAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_RectangleExtents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRadii,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_EllipseRotationDeg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will test whether a rectangle and a rotated ellipse intersects. Very useful for screen space eye tracking.\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will test whether a rectangle and a rotated ellipse intersects. Very useful for screen space eye tracking." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TestRectEllipseIntersection", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventTestRectEllipseIntersection_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms
		{
			UWidgetComponent* Component;
			FVector2D LocalWidgetLocation;
			FVector OutWorldLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalWidgetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalWidgetLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, Component), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation = { "LocalWidgetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, LocalWidgetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_OutWorldLocation = { "OutWorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms, OutWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_LocalWidgetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_OutWorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n      * This function will project a local point in a widget hosted by a widget component into world space\n      */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will project a local point in a widget hosted by a widget component into world space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TransformWidgetLocalPointToWorld", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventTransformWidgetLocalPointToWorld_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics
	{
		struct TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms
		{
			UWidgetComponent* Component;
			FVector WorldLocation;
			FVector WorldDirection;
			FVector2D OutLocalWidgetLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLocalWidgetLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms, Component), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldDirection_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_OutLocalWidgetLocation = { "OutLocalWidgetLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms, OutLocalWidgetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms), &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_OutLocalWidgetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tobii Math Utils" },
		{ "Comment", "/**\n\x09  * This function will project a world point to the widget's local space\n\x09  */" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "This function will project a world point to the widget's local space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, nullptr, "TransformWorldPointToWidgetLocal", nullptr, nullptr, sizeof(TobiiGTOMBlueprintLibrary_eventTransformWorldPointToWidgetLocal_Parms), Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_NoRegister()
	{
		return UTobiiGTOMBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TobiiGTOM,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_EmulateGazeFocusUsingWidgetInteractionComponent, "EmulateGazeFocusUsingWidgetInteractionComponent" }, // 1803781454
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_FindLargestInscribedAlignedRect, "FindLargestInscribedAlignedRect" }, // 136741067
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllFilteredGazeFocusData, "GetAllFilteredGazeFocusData" }, // 2315680597
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetAllGazeFocusData, "GetAllGazeFocusData" }, // 1934018305
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetFilteredGazeFocusData, "GetFilteredGazeFocusData" }, // 3837638709
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetGazeFocusData, "GetGazeFocusData" }, // 2319530409
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetNaiveGazeHit, "GetNaiveGazeHit" }, // 2163434072
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusLocation, "GetPrimitiveComponentFocusLocation" }, // 39359169
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetPrimitiveComponentFocusOffset, "GetPrimitiveComponentFocusOffset" }, // 2027799178
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_GetUniformlyDistributedRandomCirclePoint, "GetUniformlyDistributedRandomCirclePoint" }, // 4235445850
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsPrimitiveComponentGazeFocusable, "IsPrimitiveComponentGazeFocusable" }, // 1639091801
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_IsWidgetGazeFocusable, "IsWidgetGazeFocusable" }, // 807122650
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_MakeGazeFocusDataForWidgetInteractionComponent, "MakeGazeFocusDataForWidgetInteractionComponent" }, // 2702745370
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_RegisterScreenSpaceGazeFocusableWidgets, "RegisterScreenSpaceGazeFocusableWidgets" }, // 3607831406
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_SetGTOMPlayerController, "SetGTOMPlayerController" }, // 1705759608
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestConeSphereIntersection, "TestConeSphereIntersection" }, // 1242250441
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TestRectEllipseIntersection, "TestRectEllipseIntersection" }, // 4004771769
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWidgetLocalPointToWorld, "TransformWidgetLocalPointToWorld" }, // 3663439325
		{ &Z_Construct_UFunction_UTobiiGTOMBlueprintLibrary_TransformWorldPointToWidgetLocal, "TransformWorldPointToWidgetLocal" }, // 3912170920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP.\n  */" },
		{ "IncludePath", "TobiiGTOMBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/TobiiGTOMBlueprintLibrary.h" },
		{ "ToolTip", "Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTobiiGTOMBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::ClassParams = {
		&UTobiiGTOMBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTobiiGTOMBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTobiiGTOMBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTobiiGTOMBlueprintLibrary, 904167035);
	template<> TOBIIGTOM_API UClass* StaticClass<UTobiiGTOMBlueprintLibrary>()
	{
		return UTobiiGTOMBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTobiiGTOMBlueprintLibrary(Z_Construct_UClass_UTobiiGTOMBlueprintLibrary, &UTobiiGTOMBlueprintLibrary::StaticClass, TEXT("/Script/TobiiGTOM"), TEXT("UTobiiGTOMBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTobiiGTOMBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
