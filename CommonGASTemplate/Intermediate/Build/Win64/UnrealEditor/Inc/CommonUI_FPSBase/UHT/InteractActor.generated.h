// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/InteractActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_InteractActor_generated_h
#error "InteractActor.generated.h already included, missing '#pragma once' in InteractActor.h"
#endif
#define COMMONUI_FPSBASE_InteractActor_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractActor(); \
	friend struct Z_Construct_UClass_AInteractActor_Statics; \
public: \
	DECLARE_CLASS(AInteractActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(AInteractActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractActor*>(this); }


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractActor(AInteractActor&&); \
	AInteractActor(const AInteractActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractActor) \
	NO_API virtual ~AInteractActor();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_13_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class AInteractActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Actors_InteractActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
