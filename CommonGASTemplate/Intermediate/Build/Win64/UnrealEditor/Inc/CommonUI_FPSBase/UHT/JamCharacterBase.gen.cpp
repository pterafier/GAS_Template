// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Character/JamCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamCharacterBase() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamCharacterBase();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class AJamCharacterBase
void AJamCharacterBase::StaticRegisterNativesAJamCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamCharacterBase);
UClass* Z_Construct_UClass_AJamCharacterBase_NoRegister()
{
	return AJamCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AJamCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/JamCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/JamCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AJamCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamCharacterBase_Statics::ClassParams = {
	&AJamCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJamCharacterBase()
{
	if (!Z_Registration_Info_UClass_AJamCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamCharacterBase.OuterSingleton, Z_Construct_UClass_AJamCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJamCharacterBase.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<AJamCharacterBase>()
{
	return AJamCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJamCharacterBase);
AJamCharacterBase::~AJamCharacterBase() {}
// End Class AJamCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJamCharacterBase, AJamCharacterBase::StaticClass, TEXT("AJamCharacterBase"), &Z_Registration_Info_UClass_AJamCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamCharacterBase), 601880934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_521508130(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Character_JamCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
