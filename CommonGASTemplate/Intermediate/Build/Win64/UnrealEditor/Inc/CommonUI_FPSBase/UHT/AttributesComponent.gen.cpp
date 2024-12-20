// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Components/AttributesComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributesComponent() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UAttributesComponent();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UAttributesComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class UAttributesComponent Function AddHealth
struct Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics
{
	struct AttributesComponent_eventAddHealth_Parms
	{
		float HealthToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::NewProp_HealthToAdd = { "HealthToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventAddHealth_Parms, HealthToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::NewProp_HealthToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::AttributesComponent_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::AttributesComponent_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_HealthToAdd);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function AddHealth

// Begin Class UAttributesComponent Function AddMana
struct Z_Construct_UFunction_UAttributesComponent_AddMana_Statics
{
	struct AttributesComponent_eventAddMana_Parms
	{
		float ManaToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::NewProp_ManaToAdd = { "ManaToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventAddMana_Parms, ManaToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::NewProp_ManaToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "AddMana", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::AttributesComponent_eventAddMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::AttributesComponent_eventAddMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_AddMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_AddMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execAddMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMana(Z_Param_ManaToAdd);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function AddMana

// Begin Class UAttributesComponent Function AddStamina
struct Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics
{
	struct AttributesComponent_eventAddStamina_Parms
	{
		float StaminaToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::NewProp_StaminaToAdd = { "StaminaToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventAddStamina_Parms, StaminaToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::NewProp_StaminaToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "AddStamina", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::AttributesComponent_eventAddStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::AttributesComponent_eventAddStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_AddStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_AddStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execAddStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddStamina(Z_Param_StaminaToAdd);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function AddStamina

// Begin Class UAttributesComponent Function InitializeAttributeValues
struct Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "InitializeAttributeValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execInitializeAttributeValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAttributeValues();
	P_NATIVE_END;
}
// End Class UAttributesComponent Function InitializeAttributeValues

// Begin Class UAttributesComponent Function RemoveHealth
struct Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics
{
	struct AttributesComponent_eventRemoveHealth_Parms
	{
		float HealthToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::NewProp_HealthToRemove = { "HealthToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveHealth_Parms, HealthToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::NewProp_HealthToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "RemoveHealth", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::AttributesComponent_eventRemoveHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::AttributesComponent_eventRemoveHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_RemoveHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_RemoveHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execRemoveHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveHealth(Z_Param_HealthToRemove);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function RemoveHealth

// Begin Class UAttributesComponent Function RemoveMana
struct Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics
{
	struct AttributesComponent_eventRemoveMana_Parms
	{
		float ManaToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::NewProp_ManaToRemove = { "ManaToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveMana_Parms, ManaToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::NewProp_ManaToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "RemoveMana", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::AttributesComponent_eventRemoveMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::AttributesComponent_eventRemoveMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_RemoveMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_RemoveMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execRemoveMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMana(Z_Param_ManaToRemove);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function RemoveMana

// Begin Class UAttributesComponent Function RemoveStamina
struct Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics
{
	struct AttributesComponent_eventRemoveStamina_Parms
	{
		float StaminaToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::NewProp_StaminaToRemove = { "StaminaToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttributesComponent_eventRemoveStamina_Parms, StaminaToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::NewProp_StaminaToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttributesComponent, nullptr, "RemoveStamina", nullptr, nullptr, Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::AttributesComponent_eventRemoveStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::AttributesComponent_eventRemoveStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttributesComponent_RemoveStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttributesComponent_RemoveStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttributesComponent::execRemoveStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StaminaToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStamina(Z_Param_StaminaToRemove);
	P_NATIVE_END;
}
// End Class UAttributesComponent Function RemoveStamina

// Begin Class UAttributesComponent
void UAttributesComponent::StaticRegisterNativesUAttributesComponent()
{
	UClass* Class = UAttributesComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &UAttributesComponent::execAddHealth },
		{ "AddMana", &UAttributesComponent::execAddMana },
		{ "AddStamina", &UAttributesComponent::execAddStamina },
		{ "InitializeAttributeValues", &UAttributesComponent::execInitializeAttributeValues },
		{ "RemoveHealth", &UAttributesComponent::execRemoveHealth },
		{ "RemoveMana", &UAttributesComponent::execRemoveMana },
		{ "RemoveStamina", &UAttributesComponent::execRemoveStamina },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributesComponent);
UClass* Z_Construct_UClass_UAttributesComponent_NoRegister()
{
	return UAttributesComponent::StaticClass();
}
struct Z_Construct_UClass_UAttributesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttributesComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Variables\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributesComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttributesComponent_AddHealth, "AddHealth" }, // 1203259347
		{ &Z_Construct_UFunction_UAttributesComponent_AddMana, "AddMana" }, // 3602041079
		{ &Z_Construct_UFunction_UAttributesComponent_AddStamina, "AddStamina" }, // 3292415965
		{ &Z_Construct_UFunction_UAttributesComponent_InitializeAttributeValues, "InitializeAttributeValues" }, // 2245437225
		{ &Z_Construct_UFunction_UAttributesComponent_RemoveHealth, "RemoveHealth" }, // 2199424613
		{ &Z_Construct_UFunction_UAttributesComponent_RemoveMana, "RemoveMana" }, // 1907577163
		{ &Z_Construct_UFunction_UAttributesComponent_RemoveStamina, "RemoveStamina" }, // 2977939628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributesComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, Mana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponent, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributesComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponent_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributesComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributesComponent_Statics::ClassParams = {
	&UAttributesComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAttributesComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributesComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributesComponent()
{
	if (!Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton, Z_Construct_UClass_UAttributesComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributesComponent.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<UAttributesComponent>()
{
	return UAttributesComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesComponent);
UAttributesComponent::~UAttributesComponent() {}
// End Class UAttributesComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesComponent, UAttributesComponent::StaticClass, TEXT("UAttributesComponent"), &Z_Registration_Info_UClass_UAttributesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesComponent), 60098544U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_278386889(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Components_AttributesComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
