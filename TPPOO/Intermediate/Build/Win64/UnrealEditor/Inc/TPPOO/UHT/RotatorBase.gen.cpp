// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/RotatorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TPPOO_API UClass* Z_Construct_UClass_URotatorBase();
TPPOO_API UClass* Z_Construct_UClass_URotatorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class URotatorBase
void URotatorBase::StaticRegisterNativesURotatorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URotatorBase);
UClass* Z_Construct_UClass_URotatorBase_NoRegister()
{
	return URotatorBase::StaticClass();
}
struct Z_Construct_UClass_URotatorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RotatorBase.h" },
		{ "ModuleRelativePath", "RotatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "RotatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationRange_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "RotatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotationAxis_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "RotatorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRotateBackAndForth_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "RotatorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotationAxis;
	static void NewProp_bCanRotateBackAndForth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRotateBackAndForth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URotatorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatorBase, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationSpeed_MetaData), NewProp_rotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationRange = { "rotationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatorBase, rotationRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationRange_MetaData), NewProp_rotationRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationAxis = { "rotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URotatorBase, rotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotationAxis_MetaData), NewProp_rotationAxis_MetaData) };
void Z_Construct_UClass_URotatorBase_Statics::NewProp_bCanRotateBackAndForth_SetBit(void* Obj)
{
	((URotatorBase*)Obj)->bCanRotateBackAndForth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URotatorBase_Statics::NewProp_bCanRotateBackAndForth = { "bCanRotateBackAndForth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URotatorBase), &Z_Construct_UClass_URotatorBase_Statics::NewProp_bCanRotateBackAndForth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRotateBackAndForth_MetaData), NewProp_bCanRotateBackAndForth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URotatorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatorBase_Statics::NewProp_rotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URotatorBase_Statics::NewProp_bCanRotateBackAndForth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URotatorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URotatorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URotatorBase_Statics::ClassParams = {
	&URotatorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URotatorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URotatorBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URotatorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URotatorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URotatorBase()
{
	if (!Z_Registration_Info_UClass_URotatorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URotatorBase.OuterSingleton, Z_Construct_UClass_URotatorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URotatorBase.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<URotatorBase>()
{
	return URotatorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URotatorBase);
URotatorBase::~URotatorBase() {}
// End Class URotatorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_RotatorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URotatorBase, URotatorBase::StaticClass, TEXT("URotatorBase"), &Z_Registration_Info_UClass_URotatorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URotatorBase), 3886899469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_RotatorBase_h_1331281593(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_RotatorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_RotatorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
