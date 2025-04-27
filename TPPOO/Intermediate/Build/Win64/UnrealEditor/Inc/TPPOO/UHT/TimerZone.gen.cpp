// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPPOO/TimerZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerZone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
TPPOO_API UClass* Z_Construct_UClass_ATimerZone();
TPPOO_API UClass* Z_Construct_UClass_ATimerZone_NoRegister();
TPPOO_API UEnum* Z_Construct_UEnum_TPPOO_TimeZoneType();
UPackage* Z_Construct_UPackage__Script_TPPOO();
// End Cross Module References

// Begin Enum TimeZoneType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_TimeZoneType;
static UEnum* TimeZoneType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_TimeZoneType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_TimeZoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TPPOO_TimeZoneType, (UObject*)Z_Construct_UPackage__Script_TPPOO(), TEXT("TimeZoneType"));
	}
	return Z_Registration_Info_UEnum_TimeZoneType.OuterSingleton;
}
template<> TPPOO_API UEnum* StaticEnum<TimeZoneType>()
{
	return TimeZoneType_StaticEnum();
}
struct Z_Construct_UEnum_TPPOO_TimeZoneType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "End.DisplayName", "End" },
		{ "End.Name", "TimeZoneType::End" },
		{ "ModuleRelativePath", "TimerZone.h" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "TimeZoneType::Start" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TimeZoneType::Start", (int64)TimeZoneType::Start },
		{ "TimeZoneType::End", (int64)TimeZoneType::End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TPPOO,
	nullptr,
	"TimeZoneType",
	"TimeZoneType",
	Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TPPOO_TimeZoneType()
{
	if (!Z_Registration_Info_UEnum_TimeZoneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TimeZoneType.InnerSingleton, Z_Construct_UEnum_TPPOO_TimeZoneType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_TimeZoneType.InnerSingleton;
}
// End Enum TimeZoneType

// Begin Class ATimerZone Function OnOverLapBegin
struct Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics
{
	struct TimerZone_eventOnOverLapBegin_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerZone_eventOnOverLapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerZone_eventOnOverLapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerZone, nullptr, "OnOverLapBegin", nullptr, nullptr, Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::TimerZone_eventOnOverLapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::TimerZone_eventOnOverLapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimerZone_OnOverLapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimerZone_OnOverLapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimerZone::execOnOverLapBegin)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverLapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ATimerZone Function OnOverLapBegin

// Begin Class ATimerZone Function OnOverLapEnd
struct Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics
{
	struct TimerZone_eventOnOverLapEnd_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TimerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerZone_eventOnOverLapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimerZone_eventOnOverLapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimerZone, nullptr, "OnOverLapEnd", nullptr, nullptr, Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::TimerZone_eventOnOverLapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::TimerZone_eventOnOverLapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimerZone_OnOverLapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimerZone_OnOverLapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimerZone::execOnOverLapEnd)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverLapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ATimerZone Function OnOverLapEnd

// Begin Class ATimerZone
void ATimerZone::StaticRegisterNativesATimerZone()
{
	UClass* Class = ATimerZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverLapBegin", &ATimerZone::execOnOverLapBegin },
		{ "OnOverLapEnd", &ATimerZone::execOnOverLapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimerZone);
UClass* Z_Construct_UClass_ATimerZone_NoRegister()
{
	return ATimerZone::StaticClass();
}
struct Z_Construct_UClass_ATimerZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TimerZone.h" },
		{ "ModuleRelativePath", "TimerZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_zoneType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "TimerZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_zoneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_zoneType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimerZone_OnOverLapBegin, "OnOverLapBegin" }, // 3974466345
		{ &Z_Construct_UFunction_ATimerZone_OnOverLapEnd, "OnOverLapEnd" }, // 640367890
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimerZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATimerZone_Statics::NewProp_zoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATimerZone_Statics::NewProp_zoneType = { "zoneType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimerZone, zoneType), Z_Construct_UEnum_TPPOO_TimeZoneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_zoneType_MetaData), NewProp_zoneType_MetaData) }; // 2528486180
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimerZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerZone_Statics::NewProp_zoneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimerZone_Statics::NewProp_zoneType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimerZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATriggerBox,
	(UObject* (*)())Z_Construct_UPackage__Script_TPPOO,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimerZone_Statics::ClassParams = {
	&ATimerZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATimerZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimerZone_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimerZone_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimerZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimerZone()
{
	if (!Z_Registration_Info_UClass_ATimerZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimerZone.OuterSingleton, Z_Construct_UClass_ATimerZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimerZone.OuterSingleton;
}
template<> TPPOO_API UClass* StaticClass<ATimerZone>()
{
	return ATimerZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimerZone);
ATimerZone::~ATimerZone() {}
// End Class ATimerZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ TimeZoneType_StaticEnum, TEXT("TimeZoneType"), &Z_Registration_Info_UEnum_TimeZoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2528486180U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimerZone, ATimerZone::StaticClass, TEXT("ATimerZone"), &Z_Registration_Info_UClass_ATimerZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimerZone), 2392933019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_1587710167(TEXT("/Script/TPPOO"),
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
