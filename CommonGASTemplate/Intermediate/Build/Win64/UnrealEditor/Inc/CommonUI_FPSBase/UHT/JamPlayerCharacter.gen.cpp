// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Player/JamPlayerCharacter.h"
#include "CommonUI_FPSBase/Public/Data/SaveGameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamPlayerCharacter() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamCharacterBase();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerCharacter();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerCharacter_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerController_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamPlayerState_NoRegister();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
COMMONUI_FPSBASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerSave();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class AJamPlayerCharacter Function Die
struct Z_Construct_UFunction_AJamPlayerCharacter_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "Die", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_Die_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJamPlayerCharacter::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// End Class AJamPlayerCharacter Function Die

// Begin Class AJamPlayerCharacter Function GetCharacterSaveData
struct Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics
{
	struct JamPlayerCharacter_eventGetCharacterSaveData_Parms
	{
		FPlayerSave ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventGetCharacterSaveData_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerSave, METADATA_PARAMS(0, nullptr) }; // 700668414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "GetCharacterSaveData", nullptr, nullptr, Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::JamPlayerCharacter_eventGetCharacterSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::JamPlayerCharacter_eventGetCharacterSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJamPlayerCharacter::execGetCharacterSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerSave*)Z_Param__Result=P_THIS->GetCharacterSaveData();
	P_NATIVE_END;
}
// End Class AJamPlayerCharacter Function GetCharacterSaveData

// Begin Class AJamPlayerCharacter Function OnDamageReceived
struct JamPlayerCharacter_eventOnDamageReceived_Parms
{
	float DamageAmount;
};
static const FName NAME_AJamPlayerCharacter_OnDamageReceived = FName(TEXT("OnDamageReceived"));
void AJamPlayerCharacter::OnDamageReceived(float DamageAmount)
{
	JamPlayerCharacter_eventOnDamageReceived_Parms Parms;
	Parms.DamageAmount=DamageAmount;
	UFunction* Func = FindFunctionChecked(NAME_AJamPlayerCharacter_OnDamageReceived);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventOnDamageReceived_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "OnDamageReceived", nullptr, nullptr, Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::PropPointers), sizeof(JamPlayerCharacter_eventOnDamageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(JamPlayerCharacter_eventOnDamageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AJamPlayerCharacter Function OnDamageReceived

// Begin Class AJamPlayerCharacter Function OnDeath
static const FName NAME_AJamPlayerCharacter_OnDeath = FName(TEXT("OnDeath"));
void AJamPlayerCharacter::OnDeath()
{
	UFunction* Func = FindFunctionChecked(NAME_AJamPlayerCharacter_OnDeath);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AJamPlayerCharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AJamPlayerCharacter Function OnDeath

// Begin Class AJamPlayerCharacter Function OnPlayerDataLoaded
static const FName NAME_AJamPlayerCharacter_OnPlayerDataLoaded = FName(TEXT("OnPlayerDataLoaded"));
void AJamPlayerCharacter::OnPlayerDataLoaded()
{
	UFunction* Func = FindFunctionChecked(NAME_AJamPlayerCharacter_OnPlayerDataLoaded);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "OnPlayerDataLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AJamPlayerCharacter Function OnPlayerDataLoaded

// Begin Class AJamPlayerCharacter Function SetPlayerStateFromSaveData
struct Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics
{
	struct JamPlayerCharacter_eventSetPlayerStateFromSaveData_Parms
	{
		FPlayerSave PlayerSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSaveData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::NewProp_PlayerSaveData = { "PlayerSaveData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventSetPlayerStateFromSaveData_Parms, PlayerSaveData), Z_Construct_UScriptStruct_FPlayerSave, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSaveData_MetaData), NewProp_PlayerSaveData_MetaData) }; // 700668414
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::NewProp_PlayerSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "SetPlayerStateFromSaveData", nullptr, nullptr, Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::JamPlayerCharacter_eventSetPlayerStateFromSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::JamPlayerCharacter_eventSetPlayerStateFromSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJamPlayerCharacter::execSetPlayerStateFromSaveData)
{
	P_GET_STRUCT_REF(FPlayerSave,Z_Param_Out_PlayerSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerStateFromSaveData(Z_Param_Out_PlayerSaveData);
	P_NATIVE_END;
}
// End Class AJamPlayerCharacter Function SetPlayerStateFromSaveData

// Begin Class AJamPlayerCharacter Function TakeDamage
struct Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics
{
	struct JamPlayerCharacter_eventTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JamPlayerCharacter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJamPlayerCharacter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::JamPlayerCharacter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::JamPlayerCharacter_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AJamPlayerCharacter::execTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class AJamPlayerCharacter Function TakeDamage

// Begin Class AJamPlayerCharacter
void AJamPlayerCharacter::StaticRegisterNativesAJamPlayerCharacter()
{
	UClass* Class = AJamPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Die", &AJamPlayerCharacter::execDie },
		{ "GetCharacterSaveData", &AJamPlayerCharacter::execGetCharacterSaveData },
		{ "SetPlayerStateFromSaveData", &AJamPlayerCharacter::execSetPlayerStateFromSaveData },
		{ "TakeDamage", &AJamPlayerCharacter::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamPlayerCharacter);
UClass* Z_Construct_UClass_AJamPlayerCharacter_NoRegister()
{
	return AJamPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_AJamPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/JamPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "JamPlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The main camera for the player\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main camera for the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "JamPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how far the line trace will go from the camera\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how far the line trace will go from the camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtActor_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the actor the InteractTrace hits\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the actor the InteractTrace hits" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStateRef_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAttributes_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/JamPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAtActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStateRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AJamPlayerCharacter_Die, "Die" }, // 346129115
		{ &Z_Construct_UFunction_AJamPlayerCharacter_GetCharacterSaveData, "GetCharacterSaveData" }, // 3006568784
		{ &Z_Construct_UFunction_AJamPlayerCharacter_OnDamageReceived, "OnDamageReceived" }, // 2473455515
		{ &Z_Construct_UFunction_AJamPlayerCharacter_OnDeath, "OnDeath" }, // 3242525253
		{ &Z_Construct_UFunction_AJamPlayerCharacter_OnPlayerDataLoaded, "OnPlayerDataLoaded" }, // 3013844013
		{ &Z_Construct_UFunction_AJamPlayerCharacter_SetPlayerStateFromSaveData, "SetPlayerStateFromSaveData" }, // 3073446042
		{ &Z_Construct_UFunction_AJamPlayerCharacter_TakeDamage, "TakeDamage" }, // 1565815204
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, InteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractDistance_MetaData), NewProp_InteractDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_LookAtActor = { "LookAtActor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, LookAtActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtActor_MetaData), NewProp_LookAtActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, PlayerController), Z_Construct_UClass_AJamPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerStateRef = { "PlayerStateRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, PlayerStateRef), Z_Construct_UClass_AJamPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStateRef_MetaData), NewProp_PlayerStateRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerAttributes = { "PlayerAttributes", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJamPlayerCharacter, PlayerAttributes), Z_Construct_UClass_UAttributesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAttributes_MetaData), NewProp_PlayerAttributes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJamPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_InteractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_LookAtActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerStateRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJamPlayerCharacter_Statics::NewProp_PlayerAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJamPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AJamCharacterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamPlayerCharacter_Statics::ClassParams = {
	&AJamPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AJamPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJamPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_AJamPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamPlayerCharacter.OuterSingleton, Z_Construct_UClass_AJamPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJamPlayerCharacter.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<AJamPlayerCharacter>()
{
	return AJamPlayerCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJamPlayerCharacter);
AJamPlayerCharacter::~AJamPlayerCharacter() {}
// End Class AJamPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJamPlayerCharacter, AJamPlayerCharacter::StaticClass, TEXT("AJamPlayerCharacter"), &Z_Registration_Info_UClass_AJamPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamPlayerCharacter), 3758503611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_1234818452(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Player_JamPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
