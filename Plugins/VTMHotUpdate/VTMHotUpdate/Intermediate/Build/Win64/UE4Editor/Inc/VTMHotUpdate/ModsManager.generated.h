// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModData;
struct FModDownloadData;
struct FModDependenciesObjData;
class UObject;
class AActor;
struct FTransform;
enum class ESpawnActorCollisionHandlingMethod : uint8;
class UPackageMap;
struct FModObjData;
struct FReconnectStruct;
struct FLodModsStruct;
class UModsDownloader;
class UModsManager;
#ifdef VTMHOTUPDATE_ModsManager_generated_h
#error "ModsManager.generated.h already included, missing '#pragma once' in ModsManager.h"
#endif
#define VTMHOTUPDATE_ModsManager_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_43_DELEGATE \
struct _Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms \
{ \
	FModData _modData; \
	bool result; \
}; \
static inline void FDownloadModResultDelegate_DelegateWrapper(const FScriptDelegate& DownloadModResultDelegate, FModData const& _modData, bool result) \
{ \
	_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms Parms; \
	Parms._modData=_modData; \
	Parms.result=result ? true : false; \
	DownloadModResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_41_DELEGATE \
struct _Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms \
{ \
	FModDownloadData _modDownloadData; \
	TEnumAsByte<EHotUpdateState> _state; \
	float _progress; \
}; \
static inline void FDownloadModProgressSingleDelegate_DelegateWrapper(const FScriptDelegate& DownloadModProgressSingleDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress) \
{ \
	_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms Parms; \
	Parms._modDownloadData=_modDownloadData; \
	Parms._state=_state; \
	Parms._progress=_progress; \
	DownloadModProgressSingleDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_39_DELEGATE \
struct _Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms \
{ \
	FModDownloadData _modDownloadData; \
	TEnumAsByte<EHotUpdateState> _state; \
	float _progress; \
}; \
static inline void FDownloadModProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadModProgressDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress) \
{ \
	_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms Parms; \
	Parms._modDownloadData=_modDownloadData; \
	Parms._state=_state; \
	Parms._progress=_progress; \
	DownloadModProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_RPC_WRAPPERS
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsSetting(); \
	friend struct Z_Construct_UClass_UModsSetting_Statics; \
public: \
	DECLARE_CLASS(UModsSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUModsSetting(); \
	friend struct Z_Construct_UClass_UModsSetting_Statics; \
public: \
	DECLARE_CLASS(UModsSetting, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsSetting) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsSetting(UModsSetting&&); \
	NO_API UModsSetting(const UModsSetting&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsSetting(UModsSetting&&); \
	NO_API UModsSetting(const UModsSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsSetting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsSetting)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_PRIVATE_PROPERTY_OFFSET
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_29_PROLOG
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ModsSetting."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsSetting>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS \
 \
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


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
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


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsManager(); \
	friend struct Z_Construct_UClass_UModsManager_Statics; \
public: \
	DECLARE_CLASS(UModsManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsManager)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUModsManager(); \
	friend struct Z_Construct_UClass_UModsManager_Statics; \
public: \
	DECLARE_CLASS(UModsManager, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsManager)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsManager(UModsManager&&); \
	NO_API UModsManager(const UModsManager&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsManager(UModsManager&&); \
	NO_API UModsManager(const UModsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModsManager)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_PRIVATE_PROPERTY_OFFSET
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_48_PROLOG
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
