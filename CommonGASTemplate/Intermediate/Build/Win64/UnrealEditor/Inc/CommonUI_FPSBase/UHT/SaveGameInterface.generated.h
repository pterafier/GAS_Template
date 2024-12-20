// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/SaveGameInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UJamSaveGameObject;
struct FAudioSave;
struct FControlsSave;
struct FGraphicsSettingsSave;
struct FPlayerSave;
#ifdef COMMONUI_FPSBASE_SaveGameInterface_generated_h
#error "SaveGameInterface.generated.h already included, missing '#pragma once' in SaveGameInterface.h"
#endif
#define COMMONUI_FPSBASE_SaveGameInterface_generated_h

#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAudioSettingsSaveData); \
	DECLARE_FUNCTION(execSetGraphicsSaveData); \
	DECLARE_FUNCTION(execSetControlsSaveData); \
	DECLARE_FUNCTION(execSetPlayerSaveData); \
	DECLARE_FUNCTION(execSaveGameData); \
	DECLARE_FUNCTION(execLoadGameData); \
	DECLARE_FUNCTION(execGetSaveGameData);


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_CALLBACK_WRAPPERS
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONUI_FPSBASE_API USaveGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveGameInterface(USaveGameInterface&&); \
	USaveGameInterface(const USaveGameInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONUI_FPSBASE_API, USaveGameInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameInterface) \
	COMMONUI_FPSBASE_API virtual ~USaveGameInterface();


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveGameInterface(); \
	friend struct Z_Construct_UClass_USaveGameInterface_Statics; \
public: \
	DECLARE_CLASS(USaveGameInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI_FPSBase"), COMMONUI_FPSBASE_API) \
	DECLARE_SERIALIZER(USaveGameInterface)


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveGameInterface() {} \
public: \
	typedef USaveGameInterface UClassType; \
	typedef ISaveGameInterface ThisClass; \
	static UJamSaveGameObject* Execute_GetSaveGameData(const UObject* O); \
	static void Execute_LoadGameData(UObject* O); \
	static void Execute_SaveGameData(UObject* O); \
	static void Execute_SetAudioSettingsSaveData(UObject* O, FAudioSave const& AudioData); \
	static void Execute_SetControlsSaveData(UObject* O, FControlsSave const& SavedControlsData); \
	static void Execute_SetGraphicsSaveData(UObject* O, FGraphicsSettingsSave const& GraphicsData); \
	static void Execute_SetPlayerSaveData(UObject* O, FPlayerSave const& PlayerData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_14_PROLOG
#define FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_CALLBACK_WRAPPERS \
	FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_FPSBASE_API UClass* StaticClass<class USaveGameInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
