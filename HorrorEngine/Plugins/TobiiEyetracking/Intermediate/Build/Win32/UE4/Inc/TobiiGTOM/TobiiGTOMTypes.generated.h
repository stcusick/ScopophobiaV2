// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTobiiGazeFocusableWidget;
class UPrimitiveComponent;
#ifdef TOBIIGTOM_TobiiGTOMTypes_generated_h
#error "TobiiGTOMTypes.generated.h already included, missing '#pragma once' in TobiiGTOMTypes.h"
#endif
#define TOBIIGTOM_TobiiGTOMTypes_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTobiiGazeFocusData_Statics; \
	TOBIIGTOM_API static class UScriptStruct* StaticStruct();


template<> TOBIIGTOM_API UScriptStruct* StaticStruct<struct FTobiiGazeFocusData>();

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_21_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetLostGazeFocusSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetLostGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetLostGazeFocusSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetLostGazeFocusSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetLostGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_20_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetReceivedGazeFocusSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetReceivedGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetReceivedGazeFocusSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetReceivedGazeFocusSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetReceivedGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_19_DELEGATE \
struct _Script_TobiiGTOM_eventPrimitiveLostGazeFocusSignature_Parms \
{ \
	UPrimitiveComponent* FocusedComponent; \
}; \
static inline void FPrimitiveLostGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& PrimitiveLostGazeFocusSignature, UPrimitiveComponent* FocusedComponent) \
{ \
	_Script_TobiiGTOM_eventPrimitiveLostGazeFocusSignature_Parms Parms; \
	Parms.FocusedComponent=FocusedComponent; \
	PrimitiveLostGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h_18_DELEGATE \
struct _Script_TobiiGTOM_eventPrimitiveReceivedGazeFocusSignature_Parms \
{ \
	UPrimitiveComponent* FocusedComponent; \
}; \
static inline void FPrimitiveReceivedGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& PrimitiveReceivedGazeFocusSignature, UPrimitiveComponent* FocusedComponent) \
{ \
	_Script_TobiiGTOM_eventPrimitiveReceivedGazeFocusSignature_Parms Parms; \
	Parms.FocusedComponent=FocusedComponent; \
	PrimitiveReceivedGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_TobiiGTOMTypes_h


#define FOREACH_ENUM_ETOBIICLEANUIMODE(op) \
	op(ETobiiCleanUIMode::Disabled) \
	op(ETobiiCleanUIMode::Normal) \
	op(ETobiiCleanUIMode::FocusExclusive) \
	op(ETobiiCleanUIMode::Silent) 

enum class ETobiiCleanUIMode : uint8;
template<> TOBIIGTOM_API UEnum* StaticEnum<ETobiiCleanUIMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
