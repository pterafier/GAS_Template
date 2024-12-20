// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Game/JamSaveGameObject.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamSaveGameObject() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamSaveGameObject();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamSaveGameObject_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FControlsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphicsSettingsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class UJamSaveGameObject
void UJamSaveGameObject::StaticRegisterNativesUJamSaveGameObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamSaveGameObject);
UClass* Z_Construct_UClass_UJamSaveGameObject_NoRegister()
{
	return UJamSaveGameObject::StaticClass();
}
struct Z_Construct_UClass_UJamSaveGameObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Game/JamSaveGameObject.h" },
		{ "ModuleRelativePath", "Public/Game/JamSaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "Category", "Saves" },
		{ "ModuleRelativePath", "Public/Game/JamSaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedControlsData_MetaData[] = {
		{ "Category", "Saves" },
		{ "ModuleRelativePath", "Public/Game/JamSaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "Category", "Saves" },
		{ "ModuleRelativePath", "Public/Game/JamSaveGameObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsData_MetaData[] = {
		{ "Category", "Saves" },
		{ "ModuleRelativePath", "Public/Game/JamSaveGameObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedControlsData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphicsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamSaveGameObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamSaveGameObject, AudioData), Z_Construct_UScriptStruct_FAudioSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) }; // 2814479923
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_SavedControlsData = { "SavedControlsData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamSaveGameObject, SavedControlsData), Z_Construct_UScriptStruct_FControlsSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedControlsData_MetaData), NewProp_SavedControlsData_MetaData) }; // 1822549222
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamSaveGameObject, PlayerData), Z_Construct_UScriptStruct_FPlayerSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 700668414
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_GraphicsData = { "GraphicsData", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamSaveGameObject, GraphicsData), Z_Construct_UScriptStruct_FGraphicsSettingsSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsData_MetaData), NewProp_GraphicsData_MetaData) }; // 1779775471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamSaveGameObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_AudioData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_SavedControlsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_PlayerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamSaveGameObject_Statics::NewProp_GraphicsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamSaveGameObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJamSaveGameObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamSaveGameObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamSaveGameObject_Statics::ClassParams = {
	&UJamSaveGameObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJamSaveGameObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJamSaveGameObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamSaveGameObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamSaveGameObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJamSaveGameObject()
{
	if (!Z_Registration_Info_UClass_UJamSaveGameObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamSaveGameObject.OuterSingleton, Z_Construct_UClass_UJamSaveGameObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJamSaveGameObject.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<UJamSaveGameObject>()
{
	return UJamSaveGameObject::StaticClass();
}
UJamSaveGameObject::UJamSaveGameObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJamSaveGameObject);
UJamSaveGameObject::~UJamSaveGameObject() {}
// End Class UJamSaveGameObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJamSaveGameObject, UJamSaveGameObject::StaticClass, TEXT("UJamSaveGameObject"), &Z_Registration_Info_UClass_UJamSaveGameObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamSaveGameObject), 837982503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_3969020219(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamSaveGameObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
