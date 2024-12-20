// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/JamCharacterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_JamCharacterBase_generated_h
#error "JamCharacterBase.generated.h already included, missing '#pragma once' in JamCharacterBase.h"
#endif
#define COMMONUI_FPSBASE_JamCharacterBase_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamCharacterBase(); \
	friend struct Z_Construct_UClass_AJamCharacterBase_Statics; \
public: \
	DECLARE_CLASS(AJamCharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(AJamCharacterBase)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJamCharacterBase(AJamCharacterBase&&); \
	AJamCharacterBase(const AJamCharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamCharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamCharacterBase) \
	NO_API virtual ~AJamCharacterBase();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_9_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class AJamCharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
