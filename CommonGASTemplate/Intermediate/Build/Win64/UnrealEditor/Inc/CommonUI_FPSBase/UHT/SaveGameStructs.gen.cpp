// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameStructs() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_USaveGameStructs();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_USaveGameStructs_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FControlsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphicsSettingsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin ScriptStruct FAudioSave
static_assert(std::is_polymorphic<FAudioSave>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAudioSave cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioSave;
class UScriptStruct* FAudioSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioSave, (UObject*)Z_Construct_UPackage__Script_CommonUI_FPSBase(), TEXT("AudioSave"));
	}
	return Z_Registration_Info_UScriptStruct_AudioSave.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UScriptStruct* StaticStruct<FAudioSave>()
{
	return FAudioSave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAudioSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare a struct called FAudioSaveSettings that inherits from FTableRowBase (this allows the struct to be used in data tables)\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare a struct called FAudioSaveSettings that inherits from FTableRowBase (this allows the struct to be used in data tables)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSave, MasterVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterVolume_MetaData), NewProp_MasterVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSave, MusicVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolume_MetaData), NewProp_MusicVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAudioSave, SFXVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXVolume_MetaData), NewProp_SFXVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_MasterVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_MusicVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioSave_Statics::NewProp_SFXVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AudioSave",
	Z_Construct_UScriptStruct_FAudioSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSave_Statics::PropPointers),
	sizeof(FAudioSave),
	alignof(FAudioSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAudioSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAudioSave()
{
	if (!Z_Registration_Info_UScriptStruct_AudioSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioSave.InnerSingleton, Z_Construct_UScriptStruct_FAudioSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AudioSave.InnerSingleton;
}
// End ScriptStruct FAudioSave

// Begin ScriptStruct FControlsSave
static_assert(std::is_polymorphic<FControlsSave>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FControlsSave cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlsSave;
class UScriptStruct* FControlsSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlsSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlsSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlsSave, (UObject*)Z_Construct_UPackage__Script_CommonUI_FPSBase(), TEXT("ControlsSave"));
	}
	return Z_Registration_Info_UScriptStruct_ControlsSave.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UScriptStruct* StaticStruct<FControlsSave>()
{
	return FControlsSave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlsSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static void NewProp_InvertY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlsSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FControlsSave, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
void Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_InvertY_SetBit(void* Obj)
{
	((FControlsSave*)Obj)->InvertY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FControlsSave), &Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertY_MetaData), NewProp_InvertY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlsSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlsSave_Statics::NewProp_InvertY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlsSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlsSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ControlsSave",
	Z_Construct_UScriptStruct_FControlsSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlsSave_Statics::PropPointers),
	sizeof(FControlsSave),
	alignof(FControlsSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlsSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlsSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlsSave()
{
	if (!Z_Registration_Info_UScriptStruct_ControlsSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlsSave.InnerSingleton, Z_Construct_UScriptStruct_FControlsSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlsSave.InnerSingleton;
}
// End ScriptStruct FControlsSave

// Begin ScriptStruct FPlayerSave
static_assert(std::is_polymorphic<FPlayerSave>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPlayerSave cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerSave;
class UScriptStruct* FPlayerSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerSave, (UObject*)Z_Construct_UPackage__Script_CommonUI_FPSBase(), TEXT("PlayerSave"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerSave.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UScriptStruct* StaticStruct<FPlayerSave>()
{
	return FPlayerSave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSave, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_ControlRotation = { "ControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSave, ControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRotation_MetaData), NewProp_ControlRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSave, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSave, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerSave, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_ControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerSave_Statics::NewProp_Stamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"PlayerSave",
	Z_Construct_UScriptStruct_FPlayerSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSave_Statics::PropPointers),
	sizeof(FPlayerSave),
	alignof(FPlayerSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerSave.InnerSingleton, Z_Construct_UScriptStruct_FPlayerSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerSave.InnerSingleton;
}
// End ScriptStruct FPlayerSave

// Begin ScriptStruct FGraphicsSettingsSave
static_assert(std::is_polymorphic<FGraphicsSettingsSave>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FGraphicsSettingsSave cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GraphicsSettingsSave;
class UScriptStruct* FGraphicsSettingsSave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGraphicsSettingsSave, (UObject*)Z_Construct_UPackage__Script_CommonUI_FPSBase(), TEXT("GraphicsSettingsSave"));
	}
	return Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UScriptStruct* StaticStruct<FGraphicsSettingsSave>()
{
	return FGraphicsSettingsSave::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewDistanceIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturesIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectsIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QualityIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ViewDistanceIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PostProcessingIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowsIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AntiAliasingIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TexturesIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EffectsIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGraphicsSettingsSave>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ResolutionIndex = { "ResolutionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, ResolutionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionIndex_MetaData), NewProp_ResolutionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_QualityIndex = { "QualityIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, QualityIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityIndex_MetaData), NewProp_QualityIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ViewDistanceIndex = { "ViewDistanceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, ViewDistanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewDistanceIndex_MetaData), NewProp_ViewDistanceIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_PostProcessingIndex = { "PostProcessingIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, PostProcessingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessingIndex_MetaData), NewProp_PostProcessingIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ShadowsIndex = { "ShadowsIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, ShadowsIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsIndex_MetaData), NewProp_ShadowsIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_AntiAliasingIndex = { "AntiAliasingIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, AntiAliasingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AntiAliasingIndex_MetaData), NewProp_AntiAliasingIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_TexturesIndex = { "TexturesIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, TexturesIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturesIndex_MetaData), NewProp_TexturesIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_EffectsIndex = { "EffectsIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, EffectsIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectsIndex_MetaData), NewProp_EffectsIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ShadingIndex = { "ShadingIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGraphicsSettingsSave, ShadingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingIndex_MetaData), NewProp_ShadingIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ResolutionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_QualityIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ViewDistanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_PostProcessingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ShadowsIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_AntiAliasingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_TexturesIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_EffectsIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewProp_ShadingIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"GraphicsSettingsSave",
	Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::PropPointers),
	sizeof(FGraphicsSettingsSave),
	alignof(FGraphicsSettingsSave),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGraphicsSettingsSave()
{
	if (!Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.InnerSingleton, Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GraphicsSettingsSave.InnerSingleton;
}
// End ScriptStruct FGraphicsSettingsSave

// Begin Class USaveGameStructs
void USaveGameStructs::StaticRegisterNativesUSaveGameStructs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameStructs);
UClass* Z_Construct_UClass_USaveGameStructs_NoRegister()
{
	return USaveGameStructs::StaticClass();
}
struct Z_Construct_UClass_USaveGameStructs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/SaveGameStructs.h" },
		{ "ModuleRelativePath", "Public/Data/SaveGameStructs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameStructs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGameStructs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStructs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameStructs_Statics::ClassParams = {
	&USaveGameStructs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStructs_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameStructs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameStructs()
{
	if (!Z_Registration_Info_UClass_USaveGameStructs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameStructs.OuterSingleton, Z_Construct_UClass_USaveGameStructs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameStructs.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<USaveGameStructs>()
{
	return USaveGameStructs::StaticClass();
}
USaveGameStructs::USaveGameStructs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameStructs);
USaveGameStructs::~USaveGameStructs() {}
// End Class USaveGameStructs

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAudioSave::StaticStruct, Z_Construct_UScriptStruct_FAudioSave_Statics::NewStructOps, TEXT("AudioSave"), &Z_Registration_Info_UScriptStruct_AudioSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioSave), 2814479923U) },
		{ FControlsSave::StaticStruct, Z_Construct_UScriptStruct_FControlsSave_Statics::NewStructOps, TEXT("ControlsSave"), &Z_Registration_Info_UScriptStruct_ControlsSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlsSave), 1822549222U) },
		{ FPlayerSave::StaticStruct, Z_Construct_UScriptStruct_FPlayerSave_Statics::NewStructOps, TEXT("PlayerSave"), &Z_Registration_Info_UScriptStruct_PlayerSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerSave), 700668414U) },
		{ FGraphicsSettingsSave::StaticStruct, Z_Construct_UScriptStruct_FGraphicsSettingsSave_Statics::NewStructOps, TEXT("GraphicsSettingsSave"), &Z_Registration_Info_UScriptStruct_GraphicsSettingsSave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGraphicsSettingsSave), 1779775471U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameStructs, USaveGameStructs::StaticClass, TEXT("USaveGameStructs"), &Z_Registration_Info_UClass_USaveGameStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameStructs), 1292691154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_3165672288(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Data_SaveGameStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
