// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/JamGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_JamGameModeBase_generated_h
#error "JamGameModeBase.generated.h already included, missing '#pragma once' in JamGameModeBase.h"
#endif
#define COMMONUI_FPSBASE_JamGameModeBase_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamGameModeBase(); \
	friend struct Z_Construct_UClass_AJamGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AJamGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(AJamGameModeBase)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJamGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJamGameModeBase(AJamGameModeBase&&); \
	AJamGameModeBase(const AJamGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJamGameModeBase) \
	NO_API virtual ~AJamGameModeBase();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_12_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class AJamGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
