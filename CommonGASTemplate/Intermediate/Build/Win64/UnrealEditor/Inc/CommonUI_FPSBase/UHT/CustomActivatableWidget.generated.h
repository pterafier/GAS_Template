// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CustomActivatableWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_CustomActivatableWidget_generated_h
#error "CustomActivatableWidget.generated.h already included, missing '#pragma once' in CustomActivatableWidget.h"
#endif
#define COMMONUI_FPSBASE_CustomActivatableWidget_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomActivatableWidget(); \
	friend struct Z_Construct_UClass_UCustomActivatableWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomActivatableWidget, UCommonActivatableWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(UCustomActivatableWidget)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomActivatableWidget(UCustomActivatableWidget&&); \
	UCustomActivatableWidget(const UCustomActivatableWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomActivatableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomActivatableWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomActivatableWidget) \
	NO_API virtual ~UCustomActivatableWidget();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_25_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class UCustomActivatableWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h


#define FOREACH_ENUM_EWIDGETINPUTMODE(op) \
	op(EWidgetInputMode::Default) \
	op(EWidgetInputMode::GameAndMenu) \
	op(EWidgetInputMode::Game) \
	op(EWidgetInputMode::Menu) 

enum class EWidgetInputMode : uint8;
template<> struct TIsUEnumClass<EWidgetInputMode> { enum { Value = true }; };
template<> COMMONUI_FPSBASE_API UEnum* StaticEnum<EWidgetInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
