// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/JamPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
struct FPlayerSave;
#ifdef COMMONUI_FPSBASE_JamPlayerCharacter_generated_h
#error "JamPlayerCharacter.generated.h already included, missing '#pragma once' in JamPlayerCharacter.h"
#endif
#define COMMONUI_FPSBASE_JamPlayerCharacter_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execSetPlayerStateFromSaveData); \
	DECLARE_FUNCTION(execGetCharacterSaveData); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_CALLBACK_WRAPPERS
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamPlayerCharacter(); \
	friend struct Z_Construct_UClass_AJamPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AJamPlayerCharacter, AJamCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(AJamPlayerCharacter)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJamPlayerCharacter(AJamPlayerCharacter&&); \
	AJamPlayerCharacter(const AJamPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamPlayerCharacter) \
	NO_API virtual ~AJamPlayerCharacter();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_19_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_CALLBACK_WRAPPERS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class AJamPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
