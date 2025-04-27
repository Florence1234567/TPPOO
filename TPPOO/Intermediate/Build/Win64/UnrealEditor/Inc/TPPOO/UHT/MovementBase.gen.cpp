// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/MovementBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TPPOO_API UClass* Z_Construct_UClass_UMovementBase();
TPPOO_API UClass* Z_Construct_UClass_UMovementBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class UMovementBase
void UMovementBase::StaticRegisterNativesUMovementBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovementBase);
UClass* Z_Construct_UClass_UMovementBase_NoRegister()
{
	return UMovementBase::StaticClass();
}
struct Z_Construct_UClass_UMovementBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MovementBase.h" },
		{ "ModuleRelativePath", "MovementBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovementBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementDirection_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovementBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_movementRange_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovementBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanMoveBackAndForth_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovementBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_movementDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_movementRange;
	static void NewProp_bCanMoveBackAndForth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMoveBackAndForth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovementBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovementBase_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementBase, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovementBase_Statics::NewProp_movementDirection = { "movementDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementBase, movementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementDirection_MetaData), NewProp_movementDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovementBase_Statics::NewProp_movementRange = { "movementRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovementBase, movementRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_movementRange_MetaData), NewProp_movementRange_MetaData) };
void Z_Construct_UClass_UMovementBase_Statics::NewProp_bCanMoveBackAndForth_SetBit(void* Obj)
{
	((UMovementBase*)Obj)->bCanMoveBackAndForth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovementBase_Statics::NewProp_bCanMoveBackAndForth = { "bCanMoveBackAndForth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovementBase), &Z_Construct_UClass_UMovementBase_Statics::NewProp_bCanMoveBackAndForth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanMoveBackAndForth_MetaData), NewProp_bCanMoveBackAndForth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovementBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementBase_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementBase_Statics::NewProp_movementDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementBase_Statics::NewProp_movementRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovementBase_Statics::NewProp_bCanMoveBackAndForth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovementBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementBase_Statics::ClassParams = {
	&UMovementBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovementBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovementBase_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementBase()
{
	if (!Z_Registration_Info_UClass_UMovementBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementBase.OuterSingleton, Z_Construct_UClass_UMovementBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementBase.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<UMovementBase>()
{
	return UMovementBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementBase);
UMovementBase::~UMovementBase() {}
// End Class UMovementBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_MovementBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementBase, UMovementBase::StaticClass, TEXT("UMovementBase"), &Z_Registration_Info_UClass_UMovementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementBase), 3135834834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_MovementBase_h_2786850019(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_MovementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_MovementBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
