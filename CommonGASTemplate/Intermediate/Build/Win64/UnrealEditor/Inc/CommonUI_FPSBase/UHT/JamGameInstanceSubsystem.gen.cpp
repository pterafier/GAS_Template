// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Game/JamGameInstanceSubsystem.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamGameInstanceSubsystem() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamGameInstanceSubsystem();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamGameInstanceSubsystem_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamSaveGameObject_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class UJamGameInstanceSubsystem Function ClearPlayerSaveData
struct Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used when the player clicks \"New Game\" - this will wipe Player Data, but not controls, audio, or graphics settings. Basically just restarts gameplay from 0\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used when the player clicks \"New Game\" - this will wipe Player Data, but not controls, audio, or graphics settings. Basically just restarts gameplay from 0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJamGameInstanceSubsystem, nullptr, "ClearPlayerSaveData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJamGameInstanceSubsystem::execClearPlayerSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearPlayerSaveData();
	P_NATIVE_END;
}
// End Class UJamGameInstanceSubsystem Function ClearPlayerSaveData

// Begin Class UJamGameInstanceSubsystem Function SetGraphicsSettingsFromSaveData
struct Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJamGameInstanceSubsystem, nullptr, "SetGraphicsSettingsFromSaveData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UJamGameInstanceSubsystem::execSetGraphicsSettingsFromSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphicsSettingsFromSaveData();
	P_NATIVE_END;
}
// End Class UJamGameInstanceSubsystem Function SetGraphicsSettingsFromSaveData

// Begin Class UJamGameInstanceSubsystem
void UJamGameInstanceSubsystem::StaticRegisterNativesUJamGameInstanceSubsystem()
{
	UClass* Class = UJamGameInstanceSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearPlayerSaveData", &UJamGameInstanceSubsystem::execClearPlayerSaveData },
		{ "SetGraphicsSettingsFromSaveData", &UJamGameInstanceSubsystem::execSetGraphicsSettingsFromSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJamGameInstanceSubsystem);
UClass* Z_Construct_UClass_UJamGameInstanceSubsystem_NoRegister()
{
	return UJamGameInstanceSubsystem::StaticClass();
}
struct Z_Construct_UClass_UJamGameInstanceSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/JamGameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameSaveObject_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object that stores the actual data\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object that stores the actual data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The save name of the slot we want to save to\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The save name of the slot we want to save to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDataCleared_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A bool that checks whether or not we wiped our player save data (like if the player clicked \"New Game\" instead of \"Continue\" - set in ClearPlayerSaveData and dictates various button states in the UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A bool that checks whether or not we wiped our player save data (like if the player clicked \"New Game\" instead of \"Continue\" - set in ClearPlayerSaveData and dictates various button states in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPlayerDataStruct_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows us to replace any saved Player Data with blank data\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows us to replace any saved Player Data with blank data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoesSaveExist_MetaData[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to dictate the state of various buttons in the UI\n" },
#endif
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to dictate the state of various buttons in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveObjectClass_MetaData[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Game/JamGameInstanceSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameSaveObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static void NewProp_PlayerDataCleared_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayerDataCleared;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmptyPlayerDataStruct;
	static void NewProp_DoesSaveExist_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DoesSaveExist;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveObjectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UJamGameInstanceSubsystem_ClearPlayerSaveData, "ClearPlayerSaveData" }, // 2207522783
		{ &Z_Construct_UFunction_UJamGameInstanceSubsystem_SetGraphicsSettingsFromSaveData, "SetGraphicsSettingsFromSaveData" }, // 1205118107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJamGameInstanceSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_GameSaveObject = { "GameSaveObject", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamGameInstanceSubsystem, GameSaveObject), Z_Construct_UClass_UJamSaveGameObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameSaveObject_MetaData), NewProp_GameSaveObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamGameInstanceSubsystem, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
void Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_PlayerDataCleared_SetBit(void* Obj)
{
	((UJamGameInstanceSubsystem*)Obj)->PlayerDataCleared = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_PlayerDataCleared = { "PlayerDataCleared", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamGameInstanceSubsystem), &Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_PlayerDataCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDataCleared_MetaData), NewProp_PlayerDataCleared_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_EmptyPlayerDataStruct = { "EmptyPlayerDataStruct", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamGameInstanceSubsystem, EmptyPlayerDataStruct), Z_Construct_UScriptStruct_FPlayerSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyPlayerDataStruct_MetaData), NewProp_EmptyPlayerDataStruct_MetaData) }; // 700668414
void Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_DoesSaveExist_SetBit(void* Obj)
{
	((UJamGameInstanceSubsystem*)Obj)->DoesSaveExist = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_DoesSaveExist = { "DoesSaveExist", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJamGameInstanceSubsystem), &Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_DoesSaveExist_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoesSaveExist_MetaData), NewProp_DoesSaveExist_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_SaveObjectClass = { "SaveObjectClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJamGameInstanceSubsystem, SaveObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveObjectClass_MetaData), NewProp_SaveObjectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_GameSaveObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_PlayerDataCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_EmptyPlayerDataStruct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_DoesSaveExist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::NewProp_SaveObjectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(UJamGameInstanceSubsystem, ISaveGameInterface), false },  // 25152403
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::ClassParams = {
	&UJamGameInstanceSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJamGameInstanceSubsystem()
{
	if (!Z_Registration_Info_UClass_UJamGameInstanceSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJamGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UJamGameInstanceSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJamGameInstanceSubsystem.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<UJamGameInstanceSubsystem>()
{
	return UJamGameInstanceSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJamGameInstanceSubsystem);
UJamGameInstanceSubsystem::~UJamGameInstanceSubsystem() {}
// End Class UJamGameInstanceSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJamGameInstanceSubsystem, UJamGameInstanceSubsystem::StaticClass, TEXT("UJamGameInstanceSubsystem"), &Z_Registration_Info_UClass_UJamGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJamGameInstanceSubsystem), 3243382699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_1170157229(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameInstanceSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
