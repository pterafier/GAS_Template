// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AttributesComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_AttributesComponent_generated_h
#error "AttributesComponent.generated.h already included, missing '#pragma once' in AttributesComponent.h"
#endif
#define COMMONUI_FPSBASE_AttributesComponent_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveMana); \
	DECLARE_FUNCTION(execRemoveStamina); \
	DECLARE_FUNCTION(execRemoveHealth); \
	DECLARE_FUNCTION(execAddMana); \
	DECLARE_FUNCTION(execAddStamina); \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execInitializeAttributeValues);


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributesComponent(); \
	friend struct Z_Construct_UClass_UAttributesComponent_Statics; \
public: \
	DECLARE_CLASS(UAttributesComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(UAttributesComponent)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAttributesComponent(UAttributesComponent&&); \
	UAttributesComponent(const UAttributesComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributesComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributesComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributesComponent) \
	NO_API virtual ~UAttributesComponent();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_10_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class UAttributesComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
