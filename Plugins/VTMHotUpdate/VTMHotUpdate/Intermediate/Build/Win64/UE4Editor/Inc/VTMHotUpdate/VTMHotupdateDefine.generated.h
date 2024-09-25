// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModDownloadData;
struct FModData;
class UObject;
class AActor;
#ifdef VTMHOTUPDATE_VTMHotupdateDefine_generated_h
#error "VTMHotupdateDefine.generated.h already included, missing '#pragma once' in VTMHotupdateDefine.h"
#endif
#define VTMHOTUPDATE_VTMHotupdateDefine_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FLoadModResourceStruct>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FSpawnModActorStruct>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReconnectStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FReconnectStruct>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModData>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModObjData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModObjData>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDependenciesObjData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModDependenciesObjData>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModDownloadData_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FModDownloadData>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLodModsStruct_Statics; \
	VTMHOTUPDATE_API static class UScriptStruct* StaticStruct();


template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<struct FLodModsStruct>();

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_332_DELEGATE \
struct _Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms \
{ \
	FModDownloadData _modDownloadData; \
	TEnumAsByte<EHotUpdateState> _state; \
	float _progress; \
}; \
static inline void FModDownloadProgresstDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModDownloadProgresstDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress) \
{ \
	_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms Parms; \
	Parms._modDownloadData=_modDownloadData; \
	Parms._state=_state; \
	Parms._progress=_progress; \
	ModDownloadProgresstDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_331_DELEGATE \
struct _Script_VTMHotUpdate_eventModLoadResultDelegate_Parms \
{ \
	FModData _modData; \
	bool _isSuccess; \
}; \
static inline void FModLoadResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModLoadResultDelegate, FModData const& _modData, bool _isSuccess) \
{ \
	_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms Parms; \
	Parms._modData=_modData; \
	Parms._isSuccess=_isSuccess ? true : false; \
	ModLoadResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_8_DELEGATE \
struct _Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms \
{ \
	UObject* _modResource; \
}; \
static inline void FLoadModResourceDelegate_DelegateWrapper(const FScriptDelegate& LoadModResourceDelegate, UObject* _modResource) \
{ \
	_Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms Parms; \
	Parms._modResource=_modResource; \
	LoadModResourceDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_7_DELEGATE \
struct _Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms \
{ \
	AActor* _modActor; \
}; \
static inline void FSpawnModActorDelegate_DelegateWrapper(const FScriptDelegate& SpawnModActorDelegate, AActor* _modActor) \
{ \
	_Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms Parms; \
	Parms._modActor=_modActor; \
	SpawnModActorDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h


#define FOREACH_ENUM_EHOTUPDATESTATE(op) \
	op(EHotUpdateState_ReqVersion) \
	op(EHotUpdateState_ReqVersionFailed) \
	op(EHotUpdateState_Downloading) \
	op(EHotUpdateState_DownloadFailed) \
	op(EHotUpdateState_NetErr) \
	op(EHotUpdateState_MountingPak) \
	op(EHotUpdateState_MountPakFailed) \
	op(EHotUpdateState_Success) 
#define FOREACH_ENUM_EGUIDCACHETYPE(op) \
	op(EGuidCacheType_Object) \
	op(EGuidCacheType_CDO) \
	op(EGuidCacheType_Class) 
#define FOREACH_ENUM_EMODREQUESTTYPE(op) \
	op(RequestActor) \
	op(RequestResource) \
	op(RequestLevel) \
	op(JustDownload) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
