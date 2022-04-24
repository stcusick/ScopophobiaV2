// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTobiiGazeFocusableWidget;
class UWidgetComponent;
#ifdef TOBIIGTOM_TobiiGazeFocusableWidget_generated_h
#error "TobiiGazeFocusableWidget.generated.h already included, missing '#pragma once' in TobiiGazeFocusableWidget.h"
#endif
#define TOBIIGTOM_TobiiGazeFocusableWidget_generated_h

#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_23_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetHoverSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetHoverSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetHoverSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetHoverSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetHoverSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_22_DELEGATE \
struct _Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms \
{ \
	UTobiiGazeFocusableWidget* FocusedWidget; \
}; \
static inline void FWidgetGazeFocusSignature_DelegateWrapper(const FMulticastScriptDelegate& WidgetGazeFocusSignature, UTobiiGazeFocusableWidget* FocusedWidget) \
{ \
	_Script_TobiiGTOM_eventWidgetGazeFocusSignature_Parms Parms; \
	Parms.FocusedWidget=FocusedWidget; \
	WidgetGazeFocusSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_SPARSE_DATA
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom); \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom); \
	DECLARE_FUNCTION(execGetCleanUIAlpha); \
	DECLARE_FUNCTION(execIsInFocusCollection); \
	DECLARE_FUNCTION(execHasFocus); \
	DECLARE_FUNCTION(execIsWorldSpaceWidget); \
	DECLARE_FUNCTION(execIsHoveredByPointer); \
	DECLARE_FUNCTION(execGetWorldSpaceHostWidgetComponent); \
	DECLARE_FUNCTION(execRegisterWidgetToGTOM);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGazeFocusableWidgetToPollHitsFrom); \
	DECLARE_FUNCTION(execAddGazeFocusableWidgetToPollHitsFrom); \
	DECLARE_FUNCTION(execGetCleanUIAlpha); \
	DECLARE_FUNCTION(execIsInFocusCollection); \
	DECLARE_FUNCTION(execHasFocus); \
	DECLARE_FUNCTION(execIsWorldSpaceWidget); \
	DECLARE_FUNCTION(execIsHoveredByPointer); \
	DECLARE_FUNCTION(execGetWorldSpaceHostWidgetComponent); \
	DECLARE_FUNCTION(execRegisterWidgetToGTOM);


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUTobiiGazeFocusableWidget(); \
	friend struct Z_Construct_UClass_UTobiiGazeFocusableWidget_Statics; \
public: \
	DECLARE_CLASS(UTobiiGazeFocusableWidget, USizeBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TobiiGTOM"), NO_API) \
	DECLARE_SERIALIZER(UTobiiGazeFocusableWidget)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public:


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTobiiGazeFocusableWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTobiiGazeFocusableWidget(UTobiiGazeFocusableWidget&&); \
	NO_API UTobiiGazeFocusableWidget(const UTobiiGazeFocusableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTobiiGazeFocusableWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTobiiGazeFocusableWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTobiiGazeFocusableWidget)


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_37_PROLOG
#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_SPARSE_DATA \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TobiiGazeFocusableWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOBIIGTOM_API UClass* StaticClass<class UTobiiGazeFocusableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_TobiiEyetracking_Source_TobiiGTOM_Public_GTOMAwareUI_TobiiGazeFocusableWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
