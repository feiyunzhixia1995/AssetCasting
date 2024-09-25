// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModsDownloader;
class UModsManager;
class UObject;
class UPackageMap;
enum class ESpawnActorCollisionHandlingMethod : uint8;
struct FLodModsStruct;
struct FModData;
struct FModDependenciesObjData;
struct FModDownloadData;
struct FModObjData;
struct FReconnectStruct;
#ifdef VTMHOTUPDATE_ModsManager_generated_h
#error "ModsManager.generated.h already included, missing '#pragma once' in ModsManager.h"
#endif
#define VTMHOTUPDATE_ModsManager_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUModsSetting(); \
	friend struct Z_Construct_UClass_UModsSetting_Statics; \
public: \
	DECLARE_CLASS(UModsSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModsSetting(UModsSetting&&); \
	UModsSetting(const UModsSetting&); \
public: \
	NO_API virtual ~UModsSetting();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_29_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsSetting>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_39_DELEGATE \
VTMHOTUPDATE_API void FDownloadModProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadModProgressDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_41_DELEGATE \
VTMHOTUPDATE_API void FDownloadModProgressSingleDelegate_DelegateWrapper(const FScriptDelegate& DownloadModProgressSingleDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_43_DELEGATE \
VTMHOTUPDATE_API void FDownloadModResultDelegate_DelegateWrapper(const FScriptDelegate& DownloadModResultDelegate, FModData const& _modData, bool result);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDependenciesAassetByName); \
	DECLARE_FUNCTION(execGetDependenciesAassetById); \
	DECLARE_FUNCTION(execOpenModLevel); \
	DECLARE_FUNCTION(execBpSpawnModActor); \
	DECLARE_FUNCTION(execBpLoadModResouce); \
	DECLARE_FUNCTION(execSplicingModActorPath); \
	DECLARE_FUNCTION(execGetModObjData); \
	DECLARE_FUNCTION(execReadModFileJson); \
	DECLARE_FUNCTION(execRegistActorGuidCacheForClient); \
	DECLARE_FUNCTION(execCloseActorChannel); \
	DECLARE_FUNCTION(execGetObjectGuidCacheData); \
	DECLARE_FUNCTION(execGetReplicateObj); \
	DECLARE_FUNCTION(execGetModData); \
	DECLARE_FUNCTION(execIsModsLoaded); \
	DECLARE_FUNCTION(execRegistModDownloadProgressCallBack); \
	DECLARE_FUNCTION(execRegistModDownloadCallBack); \
	DECLARE_FUNCTION(execRequestLoadResouceFormMod); \
	DECLARE_FUNCTION(execGetLoadModsSetting); \
	DECLARE_FUNCTION(execDownloadModFailed); \
	DECLARE_FUNCTION(execDownloadModSuccess); \
	DECLARE_FUNCTION(execUpdateDownloadingMods); \
	DECLARE_FUNCTION(execBegingDownloadMod); \
	DECLARE_FUNCTION(execCreateDownloader); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsManager(); \
	friend struct Z_Construct_UClass_UModsManager_Statics; \
public: \
	DECLARE_CLASS(UModsManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsManager)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModsManager(UModsManager&&); \
	UModsManager(const UModsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModsManager)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_48_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
