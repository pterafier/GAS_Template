// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Player/JamPlayerController.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamPlayerController() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerController();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerController_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FControlsSave();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class AJamPlayerController Function SetControlsFromSaveData
struct Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics
{
	struct JamPlayerController_eventSetControlsFromSaveData_Parms
	{
		FControlsSave ControlsSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets player controller's current controls equal to the controls found in the save data\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets player controller's current controls equal to the controls found in the save data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlsSaveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlsSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::NewProp_ControlsSaveData = { "ControlsSaveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerController_eventSetControlsFromSaveData_Parms, ControlsSaveData), Z_Construct_UScriptStruct_FControlsSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlsSaveData_MetaData), NewProp_ControlsSaveData_MetaData) }; // 1822549222
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::NewProp_ControlsSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerController, nullptr, "SetControlsFromSaveData", nullptr, nullptr, Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::JamPlayerController_eventSetControlsFromSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::JamPlayerController_eventSetControlsFromSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJamPlayerController::execSetControlsFromSaveData)
{
	P_GET_STRUCT_REF(FControlsSave,Z_Param_Out_ControlsSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControlsFromSaveData(Z_Param_Out_ControlsSaveData);
	P_NATIVE_END;
}
// End Class AJamPlayerController Function SetControlsFromSaveData

// Begin Class AJamPlayerController
void AJamPlayerController::StaticRegisterNativesAJamPlayerController()
{
	UClass* Class = AJamPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetControlsFromSaveData", &AJamPlayerController::execSetControlsFromSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamPlayerController);
UClass* Z_Construct_UClass_AJamPlayerController_NoRegister()
{
	return AJamPlayerController::StaticClass();
}
struct Z_Construct_UClass_AJamPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/JamPlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Public/Player/JamPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
	static void NewProp_InvertY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJamPlayerController_SetControlsFromSaveData, "SetControlsFromSaveData" }, // 288303816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawn_MetaData), NewProp_PlayerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, BaseTurnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTurnRate_MetaData), NewProp_BaseTurnRate_MetaData) };
void Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InvertY_SetBit(void* Obj)
{
	((AJamPlayerController*)Obj)->InvertY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AJamPlayerController), &Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertY_MetaData), NewProp_InvertY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_PlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_BaseTurnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InvertY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJamPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamPlayerController_Statics::ClassParams = {
	&AJamPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJamPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJamPlayerController()
{
	if (!Z_Registration_Info_UClass_AJamPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamPlayerController.OuterSingleton, Z_Construct_UClass_AJamPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJamPlayerController.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<AJamPlayerController>()
{
	return AJamPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJamPlayerController);
AJamPlayerController::~AJamPlayerController() {}
// End Class AJamPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJamPlayerController, AJamPlayerController::StaticClass, TEXT("AJamPlayerController"), &Z_Registration_Info_UClass_AJamPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamPlayerController), 2255761492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_884247925(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
