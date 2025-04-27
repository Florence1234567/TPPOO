// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/ItemSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSpeed() {}

// Begin Cross Module References
TPPOO_API UClass* Z_Construct_UClass_AItem();
TPPOO_API UClass* Z_Construct_UClass_AItemSpeed();
TPPOO_API UClass* Z_Construct_UClass_AItemSpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class AItemSpeed
void AItemSpeed::StaticRegisterNativesAItemSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemSpeed);
UClass* Z_Construct_UClass_AItemSpeed_NoRegister()
{
	return AItemSpeed::StaticClass();
}
struct Z_Construct_UClass_AItemSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSpeed.h" },
		{ "ModuleRelativePath", "ItemSpeed.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemSpeed_Statics::ClassParams = {
	&AItemSpeed::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemSpeed()
{
	if (!Z_Registration_Info_UClass_AItemSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemSpeed.OuterSingleton, Z_Construct_UClass_AItemSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemSpeed.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<AItemSpeed>()
{
	return AItemSpeed::StaticClass();
}
AItemSpeed::AItemSpeed() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemSpeed);
AItemSpeed::~AItemSpeed() {}
// End Class AItemSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemSpeed, AItemSpeed::StaticClass, TEXT("AItemSpeed"), &Z_Registration_Info_UClass_AItemSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemSpeed), 332753583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemSpeed_h_1560497083(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
