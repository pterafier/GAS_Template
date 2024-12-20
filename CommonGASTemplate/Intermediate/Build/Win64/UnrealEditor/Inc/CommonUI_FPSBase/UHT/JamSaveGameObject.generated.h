// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/JamSaveGameObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_FPSBASE_JamSaveGameObject_generated_h
#error "JamSaveGameObject.generated.h already included, missing '#pragma once' in JamSaveGameObject.h"
#endif
#define COMMONUI_FPSBASE_JamSaveGameObject_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJamSaveGameObject(); \
	friend struct Z_Construct_UClass_UJamSaveGameObject_Statics; \
public: \
	DECLARE_CLASS(UJamSaveGameObject, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(UJamSaveGameObject)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJamSaveGameObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJamSaveGameObject(UJamSaveGameObject&&); \
	UJamSaveGameObject(const UJamSaveGameObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJamSaveGameObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJamSaveGameObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJamSaveGameObject) \
	NO_API virtual ~UJamSaveGameObject();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_13_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class UJamSaveGameObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
