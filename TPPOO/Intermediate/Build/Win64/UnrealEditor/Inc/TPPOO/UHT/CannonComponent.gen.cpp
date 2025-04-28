// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/CannonComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TPPOO_API UClass* Z_Construct_UClass_ACannonComponent();
TPPOO_API UClass* Z_Construct_UClass_ACannonComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class ACannonComponent
void ACannonComponent::StaticRegisterNativesACannonComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonComponent);
UClass* Z_Construct_UClass_ACannonComponent_NoRegister()
{
	return ACannonComponent::StaticClass();
}
struct Z_Construct_UClass_ACannonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CannonComponent.h" },
		{ "ModuleRelativePath", "CannonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "CannonComponent" },
		{ "ModuleRelativePath", "CannonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannonComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannonComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonComponent_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACannonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonComponent_Statics::ClassParams = {
	&ACannonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACannonComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACannonComponent_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ACannonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACannonComponent()
{
	if (!Z_Registration_Info_UClass_ACannonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonComponent.OuterSingleton, Z_Construct_UClass_ACannonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACannonComponent.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<ACannonComponent>()
{
	return ACannonComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonComponent);
ACannonComponent::~ACannonComponent() {}
// End Class ACannonComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACannonComponent, ACannonComponent::StaticClass, TEXT("ACannonComponent"), &Z_Registration_Info_UClass_ACannonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonComponent), 2476227439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonComponent_h_1701904910(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_CannonComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
