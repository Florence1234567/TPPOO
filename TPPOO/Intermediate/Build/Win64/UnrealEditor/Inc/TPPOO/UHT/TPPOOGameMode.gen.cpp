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
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPPOO_API UClass* Z_Construct_UClass_ATPPOOGameMode();
TPPOO_API UClass* Z_Construct_UClass_ATPPOOGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Class ATPPOOGameMode Function PlayerDied
struct Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics
{
	struct TPPOOGameMode_eventPlayerDied_Parms
	{
		ACharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPPOOGameMode_eventPlayerDied_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPPOOGameMode, nullptr, "PlayerDied", nullptr, nullptr, Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::TPPOOGameMode_eventPlayerDied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::TPPOOGameMode_eventPlayerDied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATPPOOGameMode_PlayerDied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPPOOGameMode_PlayerDied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATPPOOGameMode::execPlayerDied)
{
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerDied(Z_Param_Character);
	P_NATIVE_END;
}
// End Class ATPPOOGameMode Function PlayerDied

// Begin Class ATPPOOGameMode
void ATPPOOGameMode::StaticRegisterNativesATPPOOGameMode()
{
	UClass* Class = ATPPOOGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayerDied", &ATPPOOGameMode::execPlayerDied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bestTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTimerIsRunning_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TPPOOGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bestTime;
	static void NewProp_bTimerIsRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimerIsRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPPOOGameMode_PlayerDied, "PlayerDied" }, // 1088449732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPPOOGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPOOGameMode, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bestTime = { "bestTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPOOGameMode, bestTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bestTime_MetaData), NewProp_bestTime_MetaData) };
void Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bTimerIsRunning_SetBit(void* Obj)
{
	((ATPPOOGameMode*)Obj)->bTimerIsRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bTimerIsRunning = { "bTimerIsRunning", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATPPOOGameMode), &Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bTimerIsRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTimerIsRunning_MetaData), NewProp_bTimerIsRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPOOGameMode, score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_score_MetaData), NewProp_score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPPOOGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bestTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_bTimerIsRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPOOGameMode_Statics::NewProp_score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPOOGameMode_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ATPPOOGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATPPOOGameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_ATPPOOGameMode, ATPPOOGameMode::StaticClass, TEXT("ATPPOOGameMode"), &Z_Registration_Info_UClass_ATPPOOGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPPOOGameMode), 4282742368U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_1751971785(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TPPOOGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
