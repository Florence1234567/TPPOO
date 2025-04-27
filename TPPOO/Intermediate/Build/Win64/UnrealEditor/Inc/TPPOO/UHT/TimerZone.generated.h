// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimerZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TPPOO_TimerZone_generated_h
#error "TimerZone.generated.h already included, missing '#pragma once' in TimerZone.h"
#endif
#define TPPOO_TimerZone_generated_h

#define FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverLapEnd); \
	DECLARE_FUNCTION(execOnOverLapBegin);


#define FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimerZone(); \
	friend struct Z_Construct_UClass_ATimerZone_Statics; \
public: \
	DECLARE_CLASS(ATimerZone, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPPOO"), NO_API) \
	DECLARE_SERIALIZER(ATimerZone)


#define FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATimerZone(ATimerZone&&); \
	ATimerZone(const ATimerZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimerZone) \
	NO_API virtual ~ATimerZone();


#define FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_16_PROLOG
#define FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TPPOO_API UClass* StaticClass<class ATimerZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_choui_OneDrive_Documents_GitHub_TPPOO_TPPOO_Source_TPPOO_TimerZone_h


#define FOREACH_ENUM_TIMEZONETYPE(op) \
	op(TimeZoneType::Start) \
	op(TimeZoneType::End) 

enum class TimeZoneType : uint8;
template<> struct TIsUEnumClass<TimeZoneType> { enum { Value = true }; };
template<> TPPOO_API UEnum* StaticEnum<TimeZoneType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
