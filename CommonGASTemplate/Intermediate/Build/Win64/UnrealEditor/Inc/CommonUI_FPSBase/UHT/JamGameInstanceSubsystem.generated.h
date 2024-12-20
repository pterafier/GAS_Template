// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/JamGameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_JamGameInstanceSubsystem_generated_h
#error "JamGameInstanceSubsystem.generated.h already included, missing '#pragma once' in JamGameInstanceSubsystem.h"
#endif
#define COMMONUI_FPSBASE_JamGameInstanceSubsystem_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGraphicsSettingsFromSaveData); \
	DECLARE_FUNCTION(execClearPlayerSaveData);


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJamGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UJamGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UJamGameInstanceSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(UJamGameInstanceSubsystem) \
	virtual UObject* _getUObject() const override { return const_cast<UJamGameInstanceSubsystem*>(this); }


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJamGameInstanceSubsystem(UJamGameInstanceSubsystem&&); \
	UJamGameInstanceSubsystem(const UJamGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJamGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJamGameInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJamGameInstanceSubsystem) \
	NO_API virtual ~UJamGameInstanceSubsystem();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_19_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class UJamGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
