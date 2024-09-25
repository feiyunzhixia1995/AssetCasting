// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VTMHotupdateDefine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
struct FModData;
struct FModDownloadData;
#ifdef VTMHOTUPDATE_VTMHotupdateDefine_generated_h
#error "VTMHotupdateDefine.generated.h already included, missing '#pragma once' in VTMHotupdateDefine.h"
#endif
#define VTMHOTUPDATE_VTMHotupdateDefine_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_7_DELEGATE \
VTMHOTUPDATE_API void FSpawnModActorDelegate_DelegateWrapper(const FScriptDelegate& SpawnModActorDelegate, AActor* _modActor);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_8_DELEGATE \
VTMHOTUPDATE_API void FLoadModResourceDelegate_DelegateWrapper(const FScriptDelegate& LoadModResourceDelegate, UObject* _modResource);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLodModsStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FLodModsStruct>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDownloadData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModDownloadData>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDependenciesObjData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModDependenciesObjData>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModObjData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModObjData>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModData>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReconnectStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FReconnectStruct>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FSpawnModActorStruct>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FLoadModResourceStruct>();

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_331_DELEGATE \
VTMHOTUPDATE_API void FModLoadResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModLoadResultDelegate, FModData const& _modData, bool _isSuccess);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_332_DELEGATE \
VTMHOTUPDATE_API void FModDownloadProgresstDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModDownloadProgresstDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h


#define FOREACH_ENUM_EMODREQUESTTYPE(op) \
	op(RequestActor) \
	op(RequestResource) \
	op(RequestLevel) \
	op(JustDownload) 
#define FOREACH_ENUM_EGUIDCACHETYPE(op) \
	op(EGuidCacheType_Object) \
	op(EGuidCacheType_CDO) \
	op(EGuidCacheType_Class) 
#define FOREACH_ENUM_EHOTUPDATESTATE(op) \
	op(EHotUpdateState_ReqVersion) \
	op(EHotUpdateState_ReqVersionFailed) \
	op(EHotUpdateState_Downloading) \
	op(EHotUpdateState_DownloadFailed) \
	op(EHotUpdateState_NetErr) \
	op(EHotUpdateState_MountingPak) \
	op(EHotUpdateState_MountPakFailed) \
	op(EHotUpdateState_Success) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
