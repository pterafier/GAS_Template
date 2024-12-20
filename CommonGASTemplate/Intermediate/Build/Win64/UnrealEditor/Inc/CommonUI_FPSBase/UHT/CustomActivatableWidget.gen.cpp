// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/UI/CustomActivatableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UCustomActivatableWidget();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_UCustomActivatableWidget_NoRegister();
COMMONUI_FPSBASE_API UEnum* Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Enum EWidgetInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetInputMode;
static UEnum* EWidgetInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWidgetInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWidgetInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode, (UObject*)Z_Construct_UPackage__Script_CommonUI_FPSBase(), TEXT("EWidgetInputMode"));
	}
	return Z_Registration_Info_UEnum_EWidgetInputMode.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UEnum* StaticEnum<EWidgetInputMode>()
{
	return EWidgetInputMode_StaticEnum();
}
struct Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Name", "EWidgetInputMode::Default" },
		{ "Game.Name", "EWidgetInputMode::Game" },
		{ "GameAndMenu.Name", "EWidgetInputMode::GameAndMenu" },
		{ "Menu.Name", "EWidgetInputMode::Menu" },
		{ "ModuleRelativePath", "Public/UI/CustomActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWidgetInputMode::Default", (int64)EWidgetInputMode::Default },
		{ "EWidgetInputMode::GameAndMenu", (int64)EWidgetInputMode::GameAndMenu },
		{ "EWidgetInputMode::Game", (int64)EWidgetInputMode::Game },
		{ "EWidgetInputMode::Menu", (int64)EWidgetInputMode::Menu },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
	nullptr,
	"EWidgetInputMode",
	"EWidgetInputMode",
	Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode()
{
	if (!Z_Registration_Info_UEnum_EWidgetInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetInputMode.InnerSingleton, Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWidgetInputMode.InnerSingleton;
}
// End Enum EWidgetInputMode

// Begin Class UCustomActivatableWidget
void UCustomActivatableWidget::StaticRegisterNativesUCustomActivatableWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomActivatableWidget);
UClass* Z_Construct_UClass_UCustomActivatableWidget_NoRegister()
{
	return UCustomActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UCustomActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An activatable widget that automatically drives the desired input config when activated\n" },
#endif
		{ "IncludePath", "UI/CustomActivatableWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/CustomActivatableWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An activatable widget that automatically drives the desired input config when activated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller? */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CustomActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired input mode to use while this UI is activated, for example do you want key presses to still reach the game/player controller?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMouseCaptureMode_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The desired mouse behavior when the game gets input. */" },
#endif
		{ "ModuleRelativePath", "Public/UI/CustomActivatableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The desired mouse behavior when the game gets input." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputConfig_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameMouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameMouseCaptureMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_InputConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActivatableWidget, InputConfig), Z_Construct_UEnum_CommonUI_FPSBase_EWidgetInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) }; // 391877515
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_GameMouseCaptureMode = { "GameMouseCaptureMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomActivatableWidget, GameMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMouseCaptureMode_MetaData), NewProp_GameMouseCaptureMode_MetaData) }; // 2576598572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_InputConfig_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_GameMouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomActivatableWidget_Statics::NewProp_GameMouseCaptureMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomActivatableWidget_Statics::ClassParams = {
	&UCustomActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCustomActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActivatableWidget_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UCustomActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomActivatableWidget.OuterSingleton, Z_Construct_UClass_UCustomActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomActivatableWidget.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<UCustomActivatableWidget>()
{
	return UCustomActivatableWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomActivatableWidget);
UCustomActivatableWidget::~UCustomActivatableWidget() {}
// End Class UCustomActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWidgetInputMode_StaticEnum, TEXT("EWidgetInputMode"), &Z_Registration_Info_UEnum_EWidgetInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 391877515U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomActivatableWidget, UCustomActivatableWidget::StaticClass, TEXT("UCustomActivatableWidget"), &Z_Registration_Info_UClass_UCustomActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomActivatableWidget), 1785007652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_952584138(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_UI_CustomActivatableWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
