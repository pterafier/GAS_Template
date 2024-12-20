// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Interfaces/SaveGameInterface.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameInterface() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UJamSaveGameObject_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_USaveGameInterface();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FControlsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphicsSettingsSave();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Interface USaveGameInterface Function GetSaveGameData
struct SaveGameInterface_eventGetSaveGameData_Parms
{
	UJamSaveGameObject* ReturnValue;

	/** Constructor, initializes return property only **/
	SaveGameInterface_eventGetSaveGameData_Parms()
		: ReturnValue(NULL)
	{
	}
};
UJamSaveGameObject* ISaveGameInterface::GetSaveGameData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSaveGameData instead.");
	SaveGameInterface_eventGetSaveGameData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USaveGameInterface_GetSaveGameData = FName(TEXT("GetSaveGameData"));
UJamSaveGameObject* ISaveGameInterface::Execute_GetSaveGameData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	SaveGameInterface_eventGetSaveGameData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_GetSaveGameData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSaveGameData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function used to return save data from the class that implements this interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function used to return save data from the class that implements this interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameInterface_eventGetSaveGameData_Parms, ReturnValue), Z_Construct_UClass_UJamSaveGameObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "GetSaveGameData", nullptr, nullptr, Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::PropPointers), sizeof(SaveGameInterface_eventGetSaveGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveGameInterface_eventGetSaveGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameInterface_GetSaveGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_GetSaveGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execGetSaveGameData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UJamSaveGameObject**)Z_Param__Result=P_THIS->GetSaveGameData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function GetSaveGameData

// Begin Interface USaveGameInterface Function LoadGameData
void ISaveGameInterface::LoadGameData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LoadGameData instead.");
}
static FName NAME_USaveGameInterface_LoadGameData = FName(TEXT("LoadGameData"));
void ISaveGameInterface::Execute_LoadGameData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_LoadGameData);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->LoadGameData_Implementation();
	}
}
struct Z_Construct_UFunction_USaveGameInterface_LoadGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_LoadGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "LoadGameData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_LoadGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_LoadGameData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveGameInterface_LoadGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_LoadGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execLoadGameData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGameData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function LoadGameData

// Begin Interface USaveGameInterface Function SaveGameData
void ISaveGameInterface::SaveGameData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveGameData instead.");
}
static FName NAME_USaveGameInterface_SaveGameData = FName(TEXT("SaveGameData"));
void ISaveGameInterface::Execute_SaveGameData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_SaveGameData);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->SaveGameData_Implementation();
	}
}
struct Z_Construct_UFunction_USaveGameInterface_SaveGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SaveGameData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SaveGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SaveGameData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveGameInterface_SaveGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SaveGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSaveGameData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGameData_Implementation();
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SaveGameData

// Begin Interface USaveGameInterface Function SetAudioSettingsSaveData
struct SaveGameInterface_eventSetAudioSettingsSaveData_Parms
{
	FAudioSave AudioData;
};
void ISaveGameInterface::SetAudioSettingsSaveData(FAudioSave const& AudioData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAudioSettingsSaveData instead.");
}
static FName NAME_USaveGameInterface_SetAudioSettingsSaveData = FName(TEXT("SetAudioSettingsSaveData"));
void ISaveGameInterface::Execute_SetAudioSettingsSaveData(UObject* O, FAudioSave const& AudioData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	SaveGameInterface_eventSetAudioSettingsSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_SetAudioSettingsSaveData);
	if (Func)
	{
		Parms.AudioData=AudioData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->SetAudioSettingsSaveData_Implementation(AudioData);
	}
}
struct Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AudioData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::NewProp_AudioData = { "AudioData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameInterface_eventSetAudioSettingsSaveData_Parms, AudioData), Z_Construct_UScriptStruct_FAudioSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioData_MetaData), NewProp_AudioData_MetaData) }; // 2814479923
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::NewProp_AudioData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SetAudioSettingsSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::PropPointers), sizeof(SaveGameInterface_eventSetAudioSettingsSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveGameInterface_eventSetAudioSettingsSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSetAudioSettingsSaveData)
{
	P_GET_STRUCT_REF(FAudioSave,Z_Param_Out_AudioData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioSettingsSaveData_Implementation(Z_Param_Out_AudioData);
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SetAudioSettingsSaveData

// Begin Interface USaveGameInterface Function SetControlsSaveData
struct SaveGameInterface_eventSetControlsSaveData_Parms
{
	FControlsSave SavedControlsData;
};
void ISaveGameInterface::SetControlsSaveData(FControlsSave const& SavedControlsData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetControlsSaveData instead.");
}
static FName NAME_USaveGameInterface_SetControlsSaveData = FName(TEXT("SetControlsSaveData"));
void ISaveGameInterface::Execute_SetControlsSaveData(UObject* O, FControlsSave const& SavedControlsData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	SaveGameInterface_eventSetControlsSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_SetControlsSaveData);
	if (Func)
	{
		Parms.SavedControlsData=SavedControlsData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->SetControlsSaveData_Implementation(SavedControlsData);
	}
}
struct Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedControlsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedControlsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::NewProp_SavedControlsData = { "SavedControlsData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameInterface_eventSetControlsSaveData_Parms, SavedControlsData), Z_Construct_UScriptStruct_FControlsSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedControlsData_MetaData), NewProp_SavedControlsData_MetaData) }; // 1822549222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::NewProp_SavedControlsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SetControlsSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::PropPointers), sizeof(SaveGameInterface_eventSetControlsSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveGameInterface_eventSetControlsSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSetControlsSaveData)
{
	P_GET_STRUCT_REF(FControlsSave,Z_Param_Out_SavedControlsData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlsSaveData_Implementation(Z_Param_Out_SavedControlsData);
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SetControlsSaveData

// Begin Interface USaveGameInterface Function SetGraphicsSaveData
struct SaveGameInterface_eventSetGraphicsSaveData_Parms
{
	FGraphicsSettingsSave GraphicsData;
};
void ISaveGameInterface::SetGraphicsSaveData(FGraphicsSettingsSave const& GraphicsData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetGraphicsSaveData instead.");
}
static FName NAME_USaveGameInterface_SetGraphicsSaveData = FName(TEXT("SetGraphicsSaveData"));
void ISaveGameInterface::Execute_SetGraphicsSaveData(UObject* O, FGraphicsSettingsSave const& GraphicsData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	SaveGameInterface_eventSetGraphicsSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_SetGraphicsSaveData);
	if (Func)
	{
		Parms.GraphicsData=GraphicsData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->SetGraphicsSaveData_Implementation(GraphicsData);
	}
}
struct Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphicsData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::NewProp_GraphicsData = { "GraphicsData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameInterface_eventSetGraphicsSaveData_Parms, GraphicsData), Z_Construct_UScriptStruct_FGraphicsSettingsSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphicsData_MetaData), NewProp_GraphicsData_MetaData) }; // 1779775471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::NewProp_GraphicsData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SetGraphicsSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::PropPointers), sizeof(SaveGameInterface_eventSetGraphicsSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveGameInterface_eventSetGraphicsSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSetGraphicsSaveData)
{
	P_GET_STRUCT_REF(FGraphicsSettingsSave,Z_Param_Out_GraphicsData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGraphicsSaveData_Implementation(Z_Param_Out_GraphicsData);
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SetGraphicsSaveData

// Begin Interface USaveGameInterface Function SetPlayerSaveData
struct SaveGameInterface_eventSetPlayerSaveData_Parms
{
	FPlayerSave PlayerData;
};
void ISaveGameInterface::SetPlayerSaveData(FPlayerSave const& PlayerData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerSaveData instead.");
}
static FName NAME_USaveGameInterface_SetPlayerSaveData = FName(TEXT("SetPlayerSaveData"));
void ISaveGameInterface::Execute_SetPlayerSaveData(UObject* O, FPlayerSave const& PlayerData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USaveGameInterface::StaticClass()));
	SaveGameInterface_eventSetPlayerSaveData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USaveGameInterface_SetPlayerSaveData);
	if (Func)
	{
		Parms.PlayerData=PlayerData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISaveGameInterface*)(O->GetNativeInterfaceAddress(USaveGameInterface::StaticClass())))
	{
		I->SetPlayerSaveData_Implementation(PlayerData);
	}
}
struct Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveGameInterface_eventSetPlayerSaveData_Parms, PlayerData), Z_Construct_UScriptStruct_FPlayerSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerData_MetaData), NewProp_PlayerData_MetaData) }; // 700668414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::NewProp_PlayerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SetPlayerSaveData", nullptr, nullptr, Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::PropPointers), sizeof(SaveGameInterface_eventSetPlayerSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(SaveGameInterface_eventSetPlayerSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSetPlayerSaveData)
{
	P_GET_STRUCT_REF(FPlayerSave,Z_Param_Out_PlayerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerSaveData_Implementation(Z_Param_Out_PlayerData);
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SetPlayerSaveData

// Begin Interface USaveGameInterface
void USaveGameInterface::StaticRegisterNativesUSaveGameInterface()
{
	UClass* Class = USaveGameInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSaveGameData", &ISaveGameInterface::execGetSaveGameData },
		{ "LoadGameData", &ISaveGameInterface::execLoadGameData },
		{ "SaveGameData", &ISaveGameInterface::execSaveGameData },
		{ "SetAudioSettingsSaveData", &ISaveGameInterface::execSetAudioSettingsSaveData },
		{ "SetControlsSaveData", &ISaveGameInterface::execSetControlsSaveData },
		{ "SetGraphicsSaveData", &ISaveGameInterface::execSetGraphicsSaveData },
		{ "SetPlayerSaveData", &ISaveGameInterface::execSetPlayerSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameInterface);
UClass* Z_Construct_UClass_USaveGameInterface_NoRegister()
{
	return USaveGameInterface::StaticClass();
}
struct Z_Construct_UClass_USaveGameInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameInterface_GetSaveGameData, "GetSaveGameData" }, // 3836623566
		{ &Z_Construct_UFunction_USaveGameInterface_LoadGameData, "LoadGameData" }, // 18476737
		{ &Z_Construct_UFunction_USaveGameInterface_SaveGameData, "SaveGameData" }, // 2728386766
		{ &Z_Construct_UFunction_USaveGameInterface_SetAudioSettingsSaveData, "SetAudioSettingsSaveData" }, // 1737259347
		{ &Z_Construct_UFunction_USaveGameInterface_SetControlsSaveData, "SetControlsSaveData" }, // 3554077714
		{ &Z_Construct_UFunction_USaveGameInterface_SetGraphicsSaveData, "SetGraphicsSaveData" }, // 2851779372
		{ &Z_Construct_UFunction_USaveGameInterface_SetPlayerSaveData, "SetPlayerSaveData" }, // 3326672340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveGameInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGameInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameInterface_Statics::ClassParams = {
	&USaveGameInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameInterface()
{
	if (!Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton, Z_Construct_UClass_USaveGameInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<USaveGameInterface>()
{
	return USaveGameInterface::StaticClass();
}
USaveGameInterface::USaveGameInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameInterface);
USaveGameInterface::~USaveGameInterface() {}
// End Interface USaveGameInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameInterface, USaveGameInterface::StaticClass, TEXT("USaveGameInterface"), &Z_Registration_Info_UClass_USaveGameInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameInterface), 25152403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_1731785067(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Interfaces_SaveGameInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
