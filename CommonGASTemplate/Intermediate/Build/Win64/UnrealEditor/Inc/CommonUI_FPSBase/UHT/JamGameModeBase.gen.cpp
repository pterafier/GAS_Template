// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUI_FPSBase/Public/Game/JamGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJamGameModeBase() {}

// Begin Cross Module References
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamGameModeBase();
COMMONUI_FPSBASE_API UClass* Z_Construct_UClass_AJamGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CommonUI_FPSBase();
// End Cross Module References

// Begin Class AJamGameModeBase
void AJamGameModeBase::StaticRegisterNativesAJamGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJamGameModeBase);
UClass* Z_Construct_UClass_AJamGameModeBase_NoRegister()
{
	return AJamGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AJamGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/JamGameModeBase.h" },
		{ "ModuleRelativePath", "Public/Game/JamGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJamGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AJamGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonUI_FPSBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJamGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJamGameModeBase_Statics::ClassParams = {
	&AJamGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJamGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AJamGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJamGameModeBase()
{
	if (!Z_Registration_Info_UClass_AJamGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJamGameModeBase.OuterSingleton, Z_Construct_UClass_AJamGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJamGameModeBase.OuterSingleton;
}
template<> COMMONUI_FPSBASE_API UClass* StaticClass<AJamGameModeBase>()
{
	return AJamGameModeBase::StaticClass();
}
AJamGameModeBase::AJamGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJamGameModeBase);
AJamGameModeBase::~AJamGameModeBase() {}
// End Class AJamGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJamGameModeBase, AJamGameModeBase::StaticClass, TEXT("AJamGameModeBase"), &Z_Registration_Info_UClass_AJamGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJamGameModeBase), 1140598266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_154455211(TEXT("/Script/CommonUI_FPSBase"),
	Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CommonUI_FPSBase_Source_CommonUI_FPSBase_Public_Game_JamGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
