// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/CannonBallComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonBallComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TPPOO_API UClass* Z_Construct_UClass_ACannonBallComponent();
TPPOO_API UClass* Z_Construct_UClass_ACannonBallComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class ACannonBallComponent
void ACannonBallComponent::StaticRegisterNativesACannonBallComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonBallComponent);
UClass* Z_Construct_UClass_ACannonBallComponent_NoRegister()
{
	return ACannonBallComponent::StaticClass();
}
struct Z_Construct_UClass_ACannonBallComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CannonBallComponent.h" },
		{ "ModuleRelativePath", "CannonBallComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonBallComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACannonBallComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBallComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonBallComponent_Statics::ClassParams = {
	&ACannonBallComponent::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBallComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ACannonBallComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACannonBallComponent()
{
	if (!Z_Registration_Info_UClass_ACannonBallComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonBallComponent.OuterSingleton, Z_Construct_UClass_ACannonBallComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACannonBallComponent.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<ACannonBallComponent>()
{
	return ACannonBallComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonBallComponent);
ACannonBallComponent::~ACannonBallComponent() {}
// End Class ACannonBallComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonBallComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACannonBallComponent, ACannonBallComponent::StaticClass, TEXT("ACannonBallComponent"), &Z_Registration_Info_UClass_ACannonBallComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonBallComponent), 2339835376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonBallComponent_h_4085493263(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonBallComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonBallComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
