// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotupdateDefine() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EModRequestType();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadModResourceStruct();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLodModsStruct();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDependenciesObjData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModObjData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModActorStruct();
// End Cross Module References

// Begin Delegate FSpawnModActorDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms
	{
		AActor* _modActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__modActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::NewProp__modActor = { "_modActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms, _modActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::NewProp__modActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "SpawnModActorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSpawnModActorDelegate_DelegateWrapper(const FScriptDelegate& SpawnModActorDelegate, AActor* _modActor)
{
	struct _Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms
	{
		AActor* _modActor;
	};
	_Script_VTMHotUpdate_eventSpawnModActorDelegate_Parms Parms;
	Parms._modActor=_modActor;
	SpawnModActorDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FSpawnModActorDelegate

// Begin Delegate FLoadModResourceDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms
	{
		UObject* _modResource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__modResource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::NewProp__modResource = { "_modResource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms, _modResource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::NewProp__modResource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "LoadModResourceDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FLoadModResourceDelegate_DelegateWrapper(const FScriptDelegate& LoadModResourceDelegate, UObject* _modResource)
{
	struct _Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms
	{
		UObject* _modResource;
	};
	_Script_VTMHotUpdate_eventLoadModResourceDelegate_Parms Parms;
	Parms._modResource=_modResource;
	LoadModResourceDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FLoadModResourceDelegate

// Begin Enum EModRequestType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModRequestType;
static UEnum* EModRequestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModRequestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModRequestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_EModRequestType, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("EModRequestType"));
	}
	return Z_Registration_Info_UEnum_EModRequestType.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<EModRequestType>()
{
	return EModRequestType_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "JustDownload.Name", "JustDownload" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
		{ "RequestActor.Name", "RequestActor" },
		{ "RequestLevel.Name", "RequestLevel" },
		{ "RequestResource.Name", "RequestResource" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RequestActor", (int64)RequestActor },
		{ "RequestResource", (int64)RequestResource },
		{ "RequestLevel", (int64)RequestLevel },
		{ "JustDownload", (int64)JustDownload },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"EModRequestType",
	"EModRequestType",
	Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_EModRequestType()
{
	if (!Z_Registration_Info_UEnum_EModRequestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModRequestType.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_EModRequestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModRequestType.InnerSingleton;
}
// End Enum EModRequestType

// Begin ScriptStruct FLodModsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LodModsStruct;
class UScriptStruct* FLodModsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LodModsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LodModsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLodModsStruct, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("LodModsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_LodModsStruct.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FLodModsStruct>()
{
	return FLodModsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLodModsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModsPath_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Mods\xe6\x96\x87\xe4\xbb\xb6\xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mods\xe6\x96\x87\xe4\xbb\xb6\xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadingModNum_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\x90\x8c\xe6\x97\xb6\xe4\xb8\x8b\xe8\xbd\xbdMod\xe6\x95\xb0\xe9\x87\x8f.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\x90\x8c\xe6\x97\xb6\xe4\xb8\x8b\xe8\xbd\xbdMod\xe6\x95\xb0\xe9\x87\x8f." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeRange_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xa7\x86\xe9\x87\x8e\xe9\x94\xa5\xe4\xbd\x93\xe8\x8c\x83\xe5\x9b\xb4.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\x87\x8e\xe9\x94\xa5\xe4\xbd\x93\xe8\x8c\x83\xe5\x9b\xb4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StayTime_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x81\x9c\xe7\x95\x99\xe6\x97\xb6\xe9\x97\xb4\xe9\x98\x88\xe5\x80\xbc.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x81\x9c\xe7\x95\x99\xe6\x97\xb6\xe9\x97\xb4\xe9\x98\x88\xe5\x80\xbc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPakSize_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7pak\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xa7\xe5\xb0\x8f.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7pak\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xa7\xe5\xb0\x8f." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x97\xb4.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb1\x95\xe7\xa4\xba\xe6\x97\xb6\xe9\x97\xb4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "LodModsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe8\xbf\x9c\xe5\xb1\x95\xe7\xa4\xba\xe8\xb7\x9d\xe7\xa6\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe8\xbf\x9c\xe5\xb1\x95\xe7\xa4\xba\xe8\xb7\x9d\xe7\xa6\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModsPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDownloadingModNum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPakSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLodModsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_ModsPath = { "ModsPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, ModsPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModsPath_MetaData), NewProp_ModsPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxDownloadingModNum = { "MaxDownloadingModNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, MaxDownloadingModNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDownloadingModNum_MetaData), NewProp_MaxDownloadingModNum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_ConeRange = { "ConeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, ConeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeRange_MetaData), NewProp_ConeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_StayTime = { "StayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, StayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StayTime_MetaData), NewProp_StayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxPakSize = { "MaxPakSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, MaxPakSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPakSize_MetaData), NewProp_MaxPakSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, DisplayTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayTime_MetaData), NewProp_DisplayTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLodModsStruct, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLodModsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_ModsPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxDownloadingModNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_ConeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_StayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxPakSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_DisplayTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodModsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLodModsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"LodModsStruct",
	Z_Construct_UScriptStruct_FLodModsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodModsStruct_Statics::PropPointers),
	sizeof(FLodModsStruct),
	alignof(FLodModsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLodModsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLodModsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLodModsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LodModsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LodModsStruct.InnerSingleton, Z_Construct_UScriptStruct_FLodModsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LodModsStruct.InnerSingleton;
}
// End ScriptStruct FLodModsStruct

// Begin ScriptStruct FModDownloadData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModDownloadData;
class UScriptStruct* FModDownloadData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModDownloadData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModDownloadData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDownloadData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ModDownloadData"));
	}
	return Z_Registration_Info_UScriptStruct_ModDownloadData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FModDownloadData>()
{
	return FModDownloadData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModDownloadData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// mod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nmod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadURL_MetaData[] = {
		{ "Category", "ModDownloadData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80 \xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80 \xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "ModDownloadData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// ModID \xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbc\xa0\xe5\x85\xa5\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nModID \xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\xba\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbc\xa0\xe5\x85\xa5\xe5\x88\x99\xe4\xbd\xbf\xe7\x94\xa8\xe4\xbc\xa0\xe5\x85\xa5\xe7\x9a\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveFileName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84 \xe5\x86\x85\xe9\x83\xa8\xe6\x8b\xbc\xe6\x8e\xa5 \xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\xe6\x97\xb6\xe8\xae\xbe\xe7\xbd\xae\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xad\x98\xe6\x94\xbe\xe8\xb7\xaf\xe5\xbe\x84 \xe5\x86\x85\xe9\x83\xa8\xe6\x8b\xbc\xe6\x8e\xa5 \xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\xe6\x97\xb6\xe8\xae\xbe\xe7\xbd\xae\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "ModDownloadData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xaf\xb7\xe6\xb1\x82\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84\xe5\xae\x9e\xe4\xbe\x8b \xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xaf\xb7\xe6\xb1\x82\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84\xe5\xae\x9e\xe4\xbe\x8b \xe9\x9c\x80\xe8\xa6\x81\xe4\xbc\xa0\xe5\x85\xa5\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveFileName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDownloadData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_DownloadURL = { "DownloadURL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDownloadData, DownloadURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadURL_MetaData), NewProp_DownloadURL_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDownloadData, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_SaveFileName = { "SaveFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDownloadData, SaveFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveFileName_MetaData), NewProp_SaveFileName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDownloadData, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDownloadData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_DownloadURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_SaveFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDownloadData_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDownloadData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDownloadData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"ModDownloadData",
	Z_Construct_UScriptStruct_FModDownloadData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDownloadData_Statics::PropPointers),
	sizeof(FModDownloadData),
	alignof(FModDownloadData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDownloadData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDownloadData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData()
{
	if (!Z_Registration_Info_UScriptStruct_ModDownloadData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModDownloadData.InnerSingleton, Z_Construct_UScriptStruct_FModDownloadData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModDownloadData.InnerSingleton;
}
// End ScriptStruct FModDownloadData

// Begin ScriptStruct FModDependenciesObjData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModDependenciesObjData;
class UScriptStruct* FModDependenciesObjData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModDependenciesObjData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModDependenciesObjData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModDependenciesObjData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ModDependenciesObjData"));
	}
	return Z_Registration_Info_UScriptStruct_ModDependenciesObjData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FModDependenciesObjData>()
{
	return FModDependenciesObjData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModDependenciesObjData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// mod\xe8\xb5\x84\xe6\xba\x90\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nmod\xe8\xb5\x84\xe6\xba\x90\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ModDependenciesObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[] = {
		{ "Category", "ModDependenciesObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\x9b\xb8\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xb8\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "ModDependenciesObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModDependenciesObjData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDependenciesObjData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDependenciesObjData, RelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePath_MetaData), NewProp_RelativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModDependenciesObjData, AssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_RelativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewProp_AssetType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"ModDependenciesObjData",
	Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::PropPointers),
	sizeof(FModDependenciesObjData),
	alignof(FModDependenciesObjData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModDependenciesObjData()
{
	if (!Z_Registration_Info_UScriptStruct_ModDependenciesObjData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModDependenciesObjData.InnerSingleton, Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModDependenciesObjData.InnerSingleton;
}
// End ScriptStruct FModDependenciesObjData

// Begin ScriptStruct FModObjData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModObjData;
class UScriptStruct* FModObjData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModObjData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModObjData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModObjData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ModObjData"));
	}
	return Z_Registration_Info_UScriptStruct_ModObjData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FModObjData>()
{
	return FModObjData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModObjData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// mod\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nmod\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModObjId_MetaData[] = {
		{ "Category", "ModObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe8\xb5\x84\xe4\xba\xa7ID\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe8\xb5\x84\xe4\xba\xa7ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ModObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[] = {
		{ "Category", "ModObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\x9b\xb8\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\x9b\xb8\xe5\xaf\xb9\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "Category", "ModObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[] = {
		{ "Category", "ModObjData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbe\x9d\xe8\xb5\x96\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbe\x9d\xe8\xb5\x96\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModObjId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModObjData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_ModObjId = { "ModObjId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModObjData, ModObjId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModObjId_MetaData), NewProp_ModObjId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModObjData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModObjData, RelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePath_MetaData), NewProp_RelativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModObjData, AssetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModDependenciesObjData, METADATA_PARAMS(0, nullptr) }; // 1870266990
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModObjData, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dependencies_MetaData), NewProp_Dependencies_MetaData) }; // 1870266990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModObjData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_ModObjId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_RelativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_AssetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Dependencies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModObjData_Statics::NewProp_Dependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModObjData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModObjData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"ModObjData",
	Z_Construct_UScriptStruct_FModObjData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModObjData_Statics::PropPointers),
	sizeof(FModObjData),
	alignof(FModObjData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModObjData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModObjData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModObjData()
{
	if (!Z_Registration_Info_UScriptStruct_ModObjData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModObjData.InnerSingleton, Z_Construct_UScriptStruct_FModObjData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModObjData.InnerSingleton;
}
// End ScriptStruct FModObjData

// Begin ScriptStruct FModData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModData;
class UScriptStruct* FModData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ModData"));
	}
	return Z_Registration_Info_UScriptStruct_ModData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FModData>()
{
	return FModData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// mod\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nmod\xe6\x96\x87\xe4\xbb\xb6\xe4\xb8\xad\xe7\x9a\x84\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "ModData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// ModID \xe5\xbd\x93\xe5\x89\x8d\xe7\x89\x88\xe6\x9c\xac\xe5\x92\x8c\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\xe4\xb8\x80\xe8\x87\xb4 \xe5\x90\x8e\xe6\x9c\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe6\x9c\x89\xe5\x8f\x98\xe5\x8c\x96\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nModID \xe5\xbd\x93\xe5\x89\x8d\xe7\x89\x88\xe6\x9c\xac\xe5\x92\x8c\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\xe4\xb8\x80\xe8\x87\xb4 \xe5\x90\x8e\xe6\x9c\x9f\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe6\x9c\x89\xe5\x8f\x98\xe5\x8c\x96\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "Category", "ModData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Mod\xe5\x90\x8d\xe7\xa7\xb0 \xe4\xbb\x8epak\xe5\x8c\x85\xe4\xb8\xad\xe7\x9a\x84json\xe6\x96\x87\xe4\xbb\xb6\xe8\xaf\xbb\xe5\x8f\x96 \n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMod\xe5\x90\x8d\xe7\xa7\xb0 \xe4\xbb\x8epak\xe5\x8c\x85\xe4\xb8\xad\xe7\x9a\x84json\xe6\x96\x87\xe4\xbb\xb6\xe8\xaf\xbb\xe5\x8f\x96\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountPoint_MetaData[] = {
		{ "Category", "ModData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x8c\x82\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x8c\x82\xe5\x9c\xa8\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModObjectMap_MetaData[] = {
		{ "Category", "ModData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// mod\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nmod\xe4\xb8\xad\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Md5_MetaData[] = {
		{ "Category", "ModData" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash256_MetaData[] = {
		{ "Category", "ModData" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "Category", "ModData" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetsId_MetaData[] = {
		{ "Category", "ModData" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MountPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModObjectMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModObjectMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ModObjectMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Md5;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash256;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Hash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrimaryAssetsId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetsId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_MountPoint = { "MountPoint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, MountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountPoint_MetaData), NewProp_MountPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap_ValueProp = { "ModObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModObjData, METADATA_PARAMS(0, nullptr) }; // 3627642193
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap_Key_KeyProp = { "ModObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap = { "ModObjectMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, ModObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModObjectMap_MetaData), NewProp_ModObjectMap_MetaData) }; // 3627642193
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_Md5 = { "Md5", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, Md5), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Md5_MetaData), NewProp_Md5_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_Hash256 = { "Hash256", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, Hash256), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash256_MetaData), NewProp_Hash256_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_PrimaryAssetsId_Inner = { "PrimaryAssetsId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModData_Statics::NewProp_PrimaryAssetsId = { "PrimaryAssetsId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModData, PrimaryAssetsId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetsId_MetaData), NewProp_PrimaryAssetsId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_MountPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_ModObjectMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_Md5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_Hash256,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_PrimaryAssetsId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModData_Statics::NewProp_PrimaryAssetsId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"ModData",
	Z_Construct_UScriptStruct_FModData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModData_Statics::PropPointers),
	sizeof(FModData),
	alignof(FModData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModData()
{
	if (!Z_Registration_Info_UScriptStruct_ModData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModData.InnerSingleton, Z_Construct_UScriptStruct_FModData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModData.InnerSingleton;
}
// End ScriptStruct FModData

// Begin Enum EGuidCacheType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGuidCacheType;
static UEnum* EGuidCacheType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGuidCacheType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGuidCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("EGuidCacheType"));
	}
	return Z_Registration_Info_UEnum_EGuidCacheType.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<EGuidCacheType>()
{
	return EGuidCacheType_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b\n/// </summary>\n" },
#endif
		{ "EGuidCacheType_CDO.Comment", "//CDO.\n" },
		{ "EGuidCacheType_CDO.Name", "EGuidCacheType_CDO" },
		{ "EGuidCacheType_CDO.ToolTip", "CDO." },
		{ "EGuidCacheType_Class.Comment", "//class\xe7\xb1\xbb.\n" },
		{ "EGuidCacheType_Class.Name", "EGuidCacheType_Class" },
		{ "EGuidCacheType_Class.ToolTip", "class\xe7\xb1\xbb." },
		{ "EGuidCacheType_Object.Comment", "//\xe5\xae\x9e\xe4\xbe\x8b""Actor.\n" },
		{ "EGuidCacheType_Object.Name", "EGuidCacheType_Object" },
		{ "EGuidCacheType_Object.ToolTip", "\xe5\xae\x9e\xe4\xbe\x8b""Actor." },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nGUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\xe5\x9e\x8b\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGuidCacheType_Object", (int64)EGuidCacheType_Object },
		{ "EGuidCacheType_CDO", (int64)EGuidCacheType_CDO },
		{ "EGuidCacheType_Class", (int64)EGuidCacheType_Class },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"EGuidCacheType",
	"EGuidCacheType",
	Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType()
{
	if (!Z_Registration_Info_UEnum_EGuidCacheType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGuidCacheType.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_EGuidCacheType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGuidCacheType.InnerSingleton;
}
// End Enum EGuidCacheType

// Begin ScriptStruct FReconnectStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReconnectStruct;
class UScriptStruct* FReconnectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReconnectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReconnectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReconnectStruct, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ReconnectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ReconnectStruct.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FReconnectStruct>()
{
	return FReconnectStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FReconnectStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterObjectId_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectIdMap_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathNameMap_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterObjectIdMap_MetaData[] = {
		{ "Category", "ReconnectStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ObjectId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathName;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OuterObjectId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ObjectIdMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectIdMap;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PathNameMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathNameMap;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OuterObjectIdMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterObjectIdMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReconnectStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, ObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectId_MetaData), NewProp_ObjectId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathName_MetaData), NewProp_PathName_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectId = { "OuterObjectId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, OuterObjectId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterObjectId_MetaData), NewProp_OuterObjectId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectIdMap_Inner = { "ObjectIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectIdMap = { "ObjectIdMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, ObjectIdMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectIdMap_MetaData), NewProp_ObjectIdMap_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathNameMap_Inner = { "PathNameMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathNameMap = { "PathNameMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, PathNameMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathNameMap_MetaData), NewProp_PathNameMap_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectIdMap_Inner = { "OuterObjectIdMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectIdMap = { "OuterObjectIdMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReconnectStruct, OuterObjectIdMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterObjectIdMap_MetaData), NewProp_OuterObjectIdMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReconnectStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectIdMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_ObjectIdMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathNameMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_PathNameMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectIdMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewProp_OuterObjectIdMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReconnectStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReconnectStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"ReconnectStruct",
	Z_Construct_UScriptStruct_FReconnectStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReconnectStruct_Statics::PropPointers),
	sizeof(FReconnectStruct),
	alignof(FReconnectStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReconnectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReconnectStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReconnectStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReconnectStruct.InnerSingleton, Z_Construct_UScriptStruct_FReconnectStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ReconnectStruct.InnerSingleton;
}
// End ScriptStruct FReconnectStruct

// Begin ScriptStruct FSpawnModActorStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnModActorStruct;
class UScriptStruct* FSpawnModActorStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnModActorStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnModActorStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnModActorStruct, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("SpawnModActorStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnModActorStruct.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FSpawnModActorStruct>()
{
	return FSpawnModActorStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "SpawnModActorStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "SpawnModActorStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModActorDelgate_MetaData[] = {
		{ "Category", "SpawnModActorStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_SpawnModActorDelgate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnModActorStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModActorStruct, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModActorStruct, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_SpawnModActorDelgate = { "SpawnModActorDelgate", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModActorStruct, SpawnModActorDelgate), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnModActorDelgate_MetaData), NewProp_SpawnModActorDelgate_MetaData) }; // 3715898845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewProp_SpawnModActorDelgate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"SpawnModActorStruct",
	Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::PropPointers),
	sizeof(FSpawnModActorStruct),
	alignof(FSpawnModActorStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnModActorStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnModActorStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnModActorStruct.InnerSingleton, Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnModActorStruct.InnerSingleton;
}
// End ScriptStruct FSpawnModActorStruct

// Begin ScriptStruct FLoadModResourceStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoadModResourceStruct;
class UScriptStruct* FLoadModResourceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadModResourceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoadModResourceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadModResourceStruct, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("LoadModResourceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_LoadModResourceStruct.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FLoadModResourceStruct>()
{
	return FLoadModResourceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "Category", "LoadModResourceStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadModResourceDelegate_MetaData[] = {
		{ "Category", "LoadModResourceStruct" },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_LoadModResourceDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadModResourceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadModResourceStruct, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::NewProp_LoadModResourceDelegate = { "LoadModResourceDelegate", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadModResourceStruct, LoadModResourceDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadModResourceDelegate_MetaData), NewProp_LoadModResourceDelegate_MetaData) }; // 710570670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::NewProp_LoadModResourceDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"LoadModResourceStruct",
	Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::PropPointers),
	sizeof(FLoadModResourceStruct),
	alignof(FLoadModResourceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLoadModResourceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoadModResourceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoadModResourceStruct.InnerSingleton, Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LoadModResourceStruct.InnerSingleton;
}
// End ScriptStruct FLoadModResourceStruct

// Begin Enum EHotUpdateState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHotUpdateState;
static UEnum* EHotUpdateState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHotUpdateState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHotUpdateState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("EHotUpdateState"));
	}
	return Z_Registration_Info_UEnum_EHotUpdateState.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<EHotUpdateState>()
{
	return EHotUpdateState_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe7\x8a\xb6\xe6\x80\x81\n/// </summary>\n" },
#endif
		{ "EHotUpdateState_DownloadFailed.Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5.\n" },
		{ "EHotUpdateState_DownloadFailed.Name", "EHotUpdateState_DownloadFailed" },
		{ "EHotUpdateState_DownloadFailed.ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5." },
		{ "EHotUpdateState_Downloading.Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xb8\xad.\n" },
		{ "EHotUpdateState_Downloading.Name", "EHotUpdateState_Downloading" },
		{ "EHotUpdateState_Downloading.ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xb8\xad." },
		{ "EHotUpdateState_MountingPak.Comment", "//\xe6\x8c\x82\xe8\xbd\xbd\xe4\xb8\xad.\n" },
		{ "EHotUpdateState_MountingPak.Name", "EHotUpdateState_MountingPak" },
		{ "EHotUpdateState_MountingPak.ToolTip", "\xe6\x8c\x82\xe8\xbd\xbd\xe4\xb8\xad." },
		{ "EHotUpdateState_MountPakFailed.Comment", "//\xe6\x8c\x82\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5.\n" },
		{ "EHotUpdateState_MountPakFailed.Name", "EHotUpdateState_MountPakFailed" },
		{ "EHotUpdateState_MountPakFailed.ToolTip", "\xe6\x8c\x82\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5." },
		{ "EHotUpdateState_NetErr.Comment", "//\xe7\xbd\x91\xe7\xbb\x9c\xe9\x94\x99\xe8\xaf\xaf.\n" },
		{ "EHotUpdateState_NetErr.Name", "EHotUpdateState_NetErr" },
		{ "EHotUpdateState_NetErr.ToolTip", "\xe7\xbd\x91\xe7\xbb\x9c\xe9\x94\x99\xe8\xaf\xaf." },
		{ "EHotUpdateState_ReqVersion.Comment", "//\xe8\xaf\xb7\xe6\xb1\x82\xe7\x89\x88\xe6\x9c\xac.\n" },
		{ "EHotUpdateState_ReqVersion.Name", "EHotUpdateState_ReqVersion" },
		{ "EHotUpdateState_ReqVersion.ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe7\x89\x88\xe6\x9c\xac." },
		{ "EHotUpdateState_ReqVersionFailed.Comment", "//\xe8\xaf\xb7\xe6\xb1\x82\xe7\x89\x88\xe6\x9c\xac\xe5\xa4\xb1\xe8\xb4\xa5.\n" },
		{ "EHotUpdateState_ReqVersionFailed.Name", "EHotUpdateState_ReqVersionFailed" },
		{ "EHotUpdateState_ReqVersionFailed.ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe7\x89\x88\xe6\x9c\xac\xe5\xa4\xb1\xe8\xb4\xa5." },
		{ "EHotUpdateState_Success.Comment", "//\xe6\x9b\xb4\xe6\x96\xb0\xe5\xae\x8c\xe6\x88\x90.\n" },
		{ "EHotUpdateState_Success.Name", "EHotUpdateState_Success" },
		{ "EHotUpdateState_Success.ToolTip", "\xe6\x9b\xb4\xe6\x96\xb0\xe5\xae\x8c\xe6\x88\x90." },
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x8a\xb6\xe6\x80\x81\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHotUpdateState_ReqVersion", (int64)EHotUpdateState_ReqVersion },
		{ "EHotUpdateState_ReqVersionFailed", (int64)EHotUpdateState_ReqVersionFailed },
		{ "EHotUpdateState_Downloading", (int64)EHotUpdateState_Downloading },
		{ "EHotUpdateState_DownloadFailed", (int64)EHotUpdateState_DownloadFailed },
		{ "EHotUpdateState_NetErr", (int64)EHotUpdateState_NetErr },
		{ "EHotUpdateState_MountingPak", (int64)EHotUpdateState_MountingPak },
		{ "EHotUpdateState_MountPakFailed", (int64)EHotUpdateState_MountPakFailed },
		{ "EHotUpdateState_Success", (int64)EHotUpdateState_Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"EHotUpdateState",
	"EHotUpdateState",
	Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState()
{
	if (!Z_Registration_Info_UEnum_EHotUpdateState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHotUpdateState.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHotUpdateState.InnerSingleton;
}
// End Enum EHotUpdateState

// Begin Delegate FModLoadResultDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventModLoadResultDelegate_Parms
	{
		FModData _modData;
		bool _isSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__isSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static void NewProp__isSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 100364597
void Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__isSuccess_SetBit(void* Obj)
{
	((_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms*)Obj)->_isSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms), &Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isSuccess_MetaData), NewProp__isSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::NewProp__isSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "ModLoadResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FModLoadResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModLoadResultDelegate, FModData const& _modData, bool _isSuccess)
{
	struct _Script_VTMHotUpdate_eventModLoadResultDelegate_Parms
	{
		FModData _modData;
		bool _isSuccess;
	};
	_Script_VTMHotUpdate_eventModLoadResultDelegate_Parms Parms;
	Parms._modData=_modData;
	Parms._isSuccess=_isSuccess ? true : false;
	ModLoadResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FModLoadResultDelegate

// Begin Delegate FModDownloadProgresstDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotupdateDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__state;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__state_MetaData), NewProp__state_MetaData) }; // 175813423
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "ModDownloadProgresstDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FModDownloadProgresstDelegate_DelegateWrapper(const FMulticastScriptDelegate& ModDownloadProgresstDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	struct _Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
	_Script_VTMHotUpdate_eventModDownloadProgresstDelegate_Parms Parms;
	Parms._modDownloadData=_modDownloadData;
	Parms._state=_state;
	Parms._progress=_progress;
	ModDownloadProgresstDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FModDownloadProgresstDelegate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModRequestType_StaticEnum, TEXT("EModRequestType"), &Z_Registration_Info_UEnum_EModRequestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3877882777U) },
		{ EGuidCacheType_StaticEnum, TEXT("EGuidCacheType"), &Z_Registration_Info_UEnum_EGuidCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 908914239U) },
		{ EHotUpdateState_StaticEnum, TEXT("EHotUpdateState"), &Z_Registration_Info_UEnum_EHotUpdateState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 175813423U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLodModsStruct::StaticStruct, Z_Construct_UScriptStruct_FLodModsStruct_Statics::NewStructOps, TEXT("LodModsStruct"), &Z_Registration_Info_UScriptStruct_LodModsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLodModsStruct), 3105176559U) },
		{ FModDownloadData::StaticStruct, Z_Construct_UScriptStruct_FModDownloadData_Statics::NewStructOps, TEXT("ModDownloadData"), &Z_Registration_Info_UScriptStruct_ModDownloadData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDownloadData), 1446792847U) },
		{ FModDependenciesObjData::StaticStruct, Z_Construct_UScriptStruct_FModDependenciesObjData_Statics::NewStructOps, TEXT("ModDependenciesObjData"), &Z_Registration_Info_UScriptStruct_ModDependenciesObjData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModDependenciesObjData), 1870266990U) },
		{ FModObjData::StaticStruct, Z_Construct_UScriptStruct_FModObjData_Statics::NewStructOps, TEXT("ModObjData"), &Z_Registration_Info_UScriptStruct_ModObjData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModObjData), 3627642193U) },
		{ FModData::StaticStruct, Z_Construct_UScriptStruct_FModData_Statics::NewStructOps, TEXT("ModData"), &Z_Registration_Info_UScriptStruct_ModData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModData), 100364597U) },
		{ FReconnectStruct::StaticStruct, Z_Construct_UScriptStruct_FReconnectStruct_Statics::NewStructOps, TEXT("ReconnectStruct"), &Z_Registration_Info_UScriptStruct_ReconnectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReconnectStruct), 2158008370U) },
		{ FSpawnModActorStruct::StaticStruct, Z_Construct_UScriptStruct_FSpawnModActorStruct_Statics::NewStructOps, TEXT("SpawnModActorStruct"), &Z_Registration_Info_UScriptStruct_SpawnModActorStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnModActorStruct), 2324085237U) },
		{ FLoadModResourceStruct::StaticStruct, Z_Construct_UScriptStruct_FLoadModResourceStruct_Statics::NewStructOps, TEXT("LoadModResourceStruct"), &Z_Registration_Info_UScriptStruct_LoadModResourceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadModResourceStruct), 1019875871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_3599810448(TEXT("/Script/VTMHotUpdate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotupdateDefine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
