// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/JamPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FControlsSave;
#ifdef COMMONUI_FPSBASE_JamPlayerController_generated_h
#error "JamPlayerController.generated.h already included, missing '#pragma once' in JamPlayerController.h"
#endif
#define COMMONUI_FPSBASE_JamPlayerController_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetControlsFromSaveData);


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJamPlayerController(); \
	friend struct Z_Construct_UClass_AJamPlayerController_Statics; \
public: \
	DECLARE_CLASS(AJamPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), NO_API) \
	DECLARE_SERIALIZER(AJamPlayerController)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJamPlayerController(AJamPlayerController&&); \
	AJamPlayerController(const AJamPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJamPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJamPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJamPlayerController) \
	NO_API virtual ~AJamPlayerController();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_17_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class AJamPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
