// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/TPPOOGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPPOOGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPPOO_API UClass* Z_Construct_UClass_ATPPOOGameMode();
TPPOO_API UClass* Z_Construct_UClass_ATPPOOGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class ATPPOOGameMode
void ATPPOOGameMode::StaticRegisterNativesATPPOOGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPPOOGameMode);
UClass* Z_Construct_UClass_ATPPOOGameMode_NoRegister()
{
	return ATPPOOGameMode::StaticClass();
}
struct Z_Construct_UClass_ATPPOOGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPPOOGameMode.h" },
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPPOOGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPPOOGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPOOGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPPOOGameMode_Statics::ClassParams = {
	&ATPPOOGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPOOGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPPOOGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPPOOGameMode()
{
	if (!Z_Registration_Info_UClass_ATPPOOGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPPOOGameMode.OuterSingleton, Z_Construct_UClass_ATPPOOGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPPOOGameMode.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<ATPPOOGameMode>()
{
	return ATPPOOGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPPOOGameMode);
ATPPOOGameMode::~ATPPOOGameMode() {}
// End Class ATPPOOGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPPOOGameMode, ATPPOOGameMode::StaticClass, TEXT("ATPPOOGameMode"), &Z_Registration_Info_UClass_ATPPOOGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPPOOGameMode), 685182470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_3429172132(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
