// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModReplicateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModData;
struct FModDownloadData;
#ifdef VTMHOTUPDATE_ModReplicateManager_generated_h
#error "ModReplicateManager.generated.h already included, missing '#pragma once' in ModReplicateManager.h"
#endif
#define VTMHOTUPDATE_ModReplicateManager_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RequestLoadModResource_Implementation(FModDownloadData const& _modData, FLoadModResourceDelegate const& _loadModResourceDelegate) {}; \
	virtual void RequestSpawnModActor_Implementation(FModDownloadData const& _modData, FTransform const& _transform, FSpawnModActorDelegate const& _spawnModActorDelegate) {}; \
	virtual void ServerDownloaProgressCallback_Implementation(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress) {}; \
	virtual void ClientDownloaProgressCallback_Implementation(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress) {}; \
	virtual void ClientDownloadModSuccessCallback_Implementation(FModData const& _modData, bool _isSuccess) {}; \
	virtual void ServerDownloadModSuccessCallback_Implementation(FModData const& _modData, bool _isSuccess) {}; \
	DECLARE_FUNCTION(execRequestLoadModResource); \
	DECLARE_FUNCTION(execRequestSpawnModActor); \
	DECLARE_FUNCTION(execServerDownloaProgressCallback); \
	DECLARE_FUNCTION(execClientDownloaProgressCallback); \
	DECLARE_FUNCTION(execClientDownloadModSuccessCallback); \
	DECLARE_FUNCTION(execServerDownloadModSuccessCallback);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_CALLBACK_WRAPPERS
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VTMHOTUPDATE_API UModReplicateManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModReplicateManager(UModReplicateManager&&); \
	UModReplicateManager(const UModReplicateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VTMHOTUPDATE_API, UModReplicateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModReplicateManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModReplicateManager) \
	VTMHOTUPDATE_API virtual ~UModReplicateManager();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUModReplicateManager(); \
	friend struct Z_Construct_UClass_UModReplicateManager_Statics; \
public: \
	DECLARE_CLASS(UModReplicateManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), VTMHOTUPDATE_API) \
	DECLARE_SERIALIZER(UModReplicateManager)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IModReplicateManager() {} \
public: \
	typedef UModReplicateManager UClassType; \
	typedef IModReplicateManager ThisClass; \
	static void Execute_ClientDownloadModSuccessCallback(UObject* O, FModData const& _modData, bool _isSuccess); \
	static void Execute_ClientDownloaProgressCallback(UObject* O, FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress); \
	static void Execute_RequestLoadModResource(UObject* O, FModDownloadData const& _modData, FLoadModResourceDelegate const& _loadModResourceDelegate); \
	static void Execute_RequestSpawnModActor(UObject* O, FModDownloadData const& _modData, FTransform const& _transform, FSpawnModActorDelegate const& _spawnModActorDelegate); \
	static void Execute_ServerDownloadModSuccessCallback(UObject* O, FModData const& _modData, bool _isSuccess); \
	static void Execute_ServerDownloaProgressCallback(UObject* O, FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_12_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_CALLBACK_WRAPPERS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModReplicateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
