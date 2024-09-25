// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HttpMgrSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VTMHOTUPDATE_HttpMgrSubsystem_generated_h
#error "HttpMgrSubsystem.generated.h already included, missing '#pragma once' in HttpMgrSubsystem.h"
#endif
#define VTMHOTUPDATE_HttpMgrSubsystem_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHttpManagerSetting(); \
	friend struct Z_Construct_UClass_UHttpManagerSetting_Statics; \
public: \
	DECLARE_CLASS(UHttpManagerSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UHttpManagerSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpManagerSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpManagerSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpManagerSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpManagerSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpManagerSetting(UHttpManagerSetting&&); \
	UHttpManagerSetting(const UHttpManagerSetting&); \
public: \
	NO_API virtual ~UHttpManagerSetting();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_9_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_12_INCLASS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UHttpManagerSetting>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpMgrSubsystem(); \
	friend struct Z_Construct_UClass_UHttpMgrSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHttpMgrSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UHttpMgrSubsystem)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpMgrSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHttpMgrSubsystem(UHttpMgrSubsystem&&); \
	UHttpMgrSubsystem(const UHttpMgrSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpMgrSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpMgrSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHttpMgrSubsystem) \
	NO_API virtual ~UHttpMgrSubsystem();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_27_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UHttpMgrSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
