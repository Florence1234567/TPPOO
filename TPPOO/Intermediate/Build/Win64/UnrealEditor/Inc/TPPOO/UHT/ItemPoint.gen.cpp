// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/ItemPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemPoint() {}

// Begin Cross Module References
TPPOO_API UClass* Z_Construct_UClass_AItem();
TPPOO_API UClass* Z_Construct_UClass_AItemPoint();
TPPOO_API UClass* Z_Construct_UClass_AItemPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class AItemPoint
void AItemPoint::StaticRegisterNativesAItemPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemPoint);
UClass* Z_Construct_UClass_AItemPoint_NoRegister()
{
	return AItemPoint::StaticClass();
}
struct Z_Construct_UClass_AItemPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemPoint.h" },
		{ "ModuleRelativePath", "ItemPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AItemPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemPoint_Statics::ClassParams = {
	&AItemPoint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemPoint()
{
	if (!Z_Registration_Info_UClass_AItemPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemPoint.OuterSingleton, Z_Construct_UClass_AItemPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemPoint.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<AItemPoint>()
{
	return AItemPoint::StaticClass();
}
AItemPoint::AItemPoint() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemPoint);
AItemPoint::~AItemPoint() {}
// End Class AItemPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemPoint, AItemPoint::StaticClass, TEXT("AItemPoint"), &Z_Registration_Info_UClass_AItemPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemPoint), 1325000484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemPoint_h_2756941683(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_ItemPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
