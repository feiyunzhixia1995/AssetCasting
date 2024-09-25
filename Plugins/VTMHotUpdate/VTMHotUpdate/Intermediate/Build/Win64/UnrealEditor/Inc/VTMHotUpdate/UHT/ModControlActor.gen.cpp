// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModControlActor.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModControlActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EModRequestType();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadModResourceStruct();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModActorStruct();
// End Cross Module References

// Begin Class AModControlActor Function OnModActorDestory
struct Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics
{
	struct ModControlActor_eventOnModActorDestory_Parms
	{
		AActor* _modActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__modActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::NewProp__modActor = { "_modActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventOnModActorDestory_Parms, _modActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::NewProp__modActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "OnModActorDestory", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::ModControlActor_eventOnModActorDestory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::ModControlActor_eventOnModActorDestory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_OnModActorDestory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execOnModActorDestory)
{
	P_GET_OBJECT(AActor,Z_Param__modActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnModActorDestory(Z_Param__modActor);
	P_NATIVE_END;
}
// End Class AModControlActor Function OnModActorDestory

// Begin Class AModControlActor Function OnReq_ModDownloadDataChange
struct Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "OnReq_ModDownloadDataChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execOnReq_ModDownloadDataChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReq_ModDownloadDataChange();
	P_NATIVE_END;
}
// End Class AModControlActor Function OnReq_ModDownloadDataChange

// Begin Class AModControlActor Function RegistModActorDestory
struct Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics
{
	struct ModControlActor_eventRegistModActorDestory_Parms
	{
		AActor* _modActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__modActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::NewProp__modActor = { "_modActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRegistModActorDestory_Parms, _modActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::NewProp__modActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RegistModActorDestory", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::ModControlActor_eventRegistModActorDestory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::ModControlActor_eventRegistModActorDestory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_RegistModActorDestory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execRegistModActorDestory)
{
	P_GET_OBJECT(AActor,Z_Param__modActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistModActorDestory(Z_Param__modActor);
	P_NATIVE_END;
}
// End Class AModControlActor Function RegistModActorDestory

// Begin Class AModControlActor Function RequestMod
struct Z_Construct_UFunction_AModControlActor_RequestMod_Statics
{
	struct ModControlActor_eventRequestMod_Parms
	{
		FModDownloadData _modDownloadData;
		AModControlActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestMod_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestMod_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestMod", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::ModControlActor_eventRequestMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_RequestMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::ModControlActor_eventRequestMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_RequestMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execRequestMod)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AModControlActor**)Z_Param__Result=AModControlActor::RequestMod(Z_Param_Out__modDownloadData);
	P_NATIVE_END;
}
// End Class AModControlActor Function RequestMod

// Begin Class AModControlActor Function RequestModActor
struct Z_Construct_UFunction_AModControlActor_RequestModActor_Statics
{
	struct ModControlActor_eventRequestModActor_Parms
	{
		FModDownloadData _modDownloadData;
		FTransform _transform;
		FScriptDelegate _spawnModActorDelegate;
		AModControlActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spawnModActorDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__transform;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__spawnModActorDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__transform_MetaData), NewProp__transform_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate = { "_spawnModActorDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _spawnModActorDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spawnModActorDelegate_MetaData), NewProp__spawnModActorDelegate_MetaData) }; // 3715898845
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestModActor", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::ModControlActor_eventRequestModActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::ModControlActor_eventRequestModActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_RequestModActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execRequestModActor)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__spawnModActorDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AModControlActor**)Z_Param__Result=AModControlActor::RequestModActor(Z_Param_Out__modDownloadData,Z_Param_Out__transform,FSpawnModActorDelegate(Z_Param_Out__spawnModActorDelegate));
	P_NATIVE_END;
}
// End Class AModControlActor Function RequestModActor

// Begin Class AModControlActor Function RequestModResource
struct Z_Construct_UFunction_AModControlActor_RequestModResource_Statics
{
	struct ModControlActor_eventRequestModResource_Parms
	{
		FModDownloadData _modDownloadData;
		FScriptDelegate _loadModResourceDelegate;
		AModControlActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__loadModResourceDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__loadModResourceDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate = { "_loadModResourceDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, _loadModResourceDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__loadModResourceDelegate_MetaData), NewProp__loadModResourceDelegate_MetaData) }; // 710570670
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestModResource", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::ModControlActor_eventRequestModResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::ModControlActor_eventRequestModResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_RequestModResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execRequestModResource)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__loadModResourceDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AModControlActor**)Z_Param__Result=AModControlActor::RequestModResource(Z_Param_Out__modDownloadData,FLoadModResourceDelegate(Z_Param_Out__loadModResourceDelegate));
	P_NATIVE_END;
}
// End Class AModControlActor Function RequestModResource

// Begin Class AModControlActor Function SetIsNeedReplicateMod
struct Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics
{
	struct ModControlActor_eventSetIsNeedReplicateMod_Parms
	{
		bool _isNeedReplicateMod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp__isNeedReplicateMod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp__isNeedReplicateMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod_SetBit(void* Obj)
{
	((ModControlActor_eventSetIsNeedReplicateMod_Parms*)Obj)->_isNeedReplicateMod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod = { "_isNeedReplicateMod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModControlActor_eventSetIsNeedReplicateMod_Parms), &Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "SetIsNeedReplicateMod", nullptr, nullptr, Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::ModControlActor_eventSetIsNeedReplicateMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::ModControlActor_eventSetIsNeedReplicateMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModControlActor::execSetIsNeedReplicateMod)
{
	P_GET_UBOOL(Z_Param__isNeedReplicateMod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsNeedReplicateMod(Z_Param__isNeedReplicateMod);
	P_NATIVE_END;
}
// End Class AModControlActor Function SetIsNeedReplicateMod

// Begin Class AModControlActor
void AModControlActor::StaticRegisterNativesAModControlActor()
{
	UClass* Class = AModControlActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnModActorDestory", &AModControlActor::execOnModActorDestory },
		{ "OnReq_ModDownloadDataChange", &AModControlActor::execOnReq_ModDownloadDataChange },
		{ "RegistModActorDestory", &AModControlActor::execRegistModActorDestory },
		{ "RequestMod", &AModControlActor::execRequestMod },
		{ "RequestModActor", &AModControlActor::execRequestModActor },
		{ "RequestModResource", &AModControlActor::execRequestModResource },
		{ "SetIsNeedReplicateMod", &AModControlActor::execSetIsNeedReplicateMod },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModControlActor);
UClass* Z_Construct_UClass_AModControlActor_NoRegister()
{
	return AModControlActor::StaticClass();
}
struct Z_Construct_UClass_AModControlActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86mod\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x98\xbe\xe7\xa4\xba, \xe4\xbb\xa5\xe5\x8f\x8a\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe7\xae\xa1\xe7\x90\x86\n/// </summary>\n" },
#endif
		{ "IncludePath", "ModControlActor.h" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86mod\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x98\xbe\xe7\xa4\xba, \xe4\xbb\xa5\xe5\x8f\x8a\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe7\xae\xa1\xe7\x90\x86\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModDownloadData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModsReplicateComponent_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientModDownloadProgresstDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerModDownloadProgresstDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModActorData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadModResourceData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModRequestType_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNeedReplicateMod_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModDownloadData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModsReplicateComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModLoadResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModLoadResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModDownloadProgresstDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModDownloadProgresstDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnModActorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadModResourceData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModRequestType;
	static void NewProp_IsNeedReplicateMod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNeedReplicateMod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModControlActor_OnModActorDestory, "OnModActorDestory" }, // 4012762154
		{ &Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange, "OnReq_ModDownloadDataChange" }, // 2573454142
		{ &Z_Construct_UFunction_AModControlActor_RegistModActorDestory, "RegistModActorDestory" }, // 1048937029
		{ &Z_Construct_UFunction_AModControlActor_RequestMod, "RequestMod" }, // 299348901
		{ &Z_Construct_UFunction_AModControlActor_RequestModActor, "RequestModActor" }, // 3985330819
		{ &Z_Construct_UFunction_AModControlActor_RequestModResource, "RequestModResource" }, // 895401359
		{ &Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod, "SetIsNeedReplicateMod" }, // 2828986600
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModControlActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData = { "ModDownloadData", "OnReq_ModDownloadDataChange", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ModDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModDownloadData_MetaData), NewProp_ModDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent = { "ModsReplicateComponent", nullptr, (EPropertyFlags)0x001000000008003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ModsReplicateComponent), Z_Construct_UClass_UModsReplicateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModsReplicateComponent_MetaData), NewProp_ModsReplicateComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate = { "ServerModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ServerModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerModLoadResultDelegate_MetaData), NewProp_ServerModLoadResultDelegate_MetaData) }; // 1519742562
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate = { "ClientModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ClientModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientModLoadResultDelegate_MetaData), NewProp_ClientModLoadResultDelegate_MetaData) }; // 1519742562
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate = { "ClientModDownloadProgresstDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ClientModDownloadProgresstDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientModDownloadProgresstDelegate_MetaData), NewProp_ClientModDownloadProgresstDelegate_MetaData) }; // 3636762407
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate = { "ServerModDownloadProgresstDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ServerModDownloadProgresstDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerModDownloadProgresstDelegate_MetaData), NewProp_ServerModDownloadProgresstDelegate_MetaData) }; // 3636762407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData = { "SpawnModActorData", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, SpawnModActorData), Z_Construct_UScriptStruct_FSpawnModActorStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnModActorData_MetaData), NewProp_SpawnModActorData_MetaData) }; // 2324085237
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData = { "LoadModResourceData", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, LoadModResourceData), Z_Construct_UScriptStruct_FLoadModResourceStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadModResourceData_MetaData), NewProp_LoadModResourceData_MetaData) }; // 1019875871
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType = { "ModRequestType", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModControlActor, ModRequestType), Z_Construct_UEnum_VTMHotUpdate_EModRequestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModRequestType_MetaData), NewProp_ModRequestType_MetaData) }; // 3877882777
void Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_SetBit(void* Obj)
{
	((AModControlActor*)Obj)->IsNeedReplicateMod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod = { "IsNeedReplicateMod", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AModControlActor), &Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNeedReplicateMod_MetaData), NewProp_IsNeedReplicateMod_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModControlActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModControlActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModControlActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UModReplicateManager_NoRegister, (int32)VTABLE_OFFSET(AModControlActor, IModReplicateManager), false },  // 3435638710
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModControlActor_Statics::ClassParams = {
	&AModControlActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModControlActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AModControlActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModControlActor()
{
	if (!Z_Registration_Info_UClass_AModControlActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModControlActor.OuterSingleton, Z_Construct_UClass_AModControlActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModControlActor.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<AModControlActor>()
{
	return AModControlActor::StaticClass();
}
void AModControlActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ModDownloadData(TEXT("ModDownloadData"));
	static const FName Name_ModsReplicateComponent(TEXT("ModsReplicateComponent"));
	static const FName Name_ModRequestType(TEXT("ModRequestType"));
	const bool bIsValid = true
		&& Name_ModDownloadData == ClassReps[(int32)ENetFields_Private::ModDownloadData].Property->GetFName()
		&& Name_ModsReplicateComponent == ClassReps[(int32)ENetFields_Private::ModsReplicateComponent].Property->GetFName()
		&& Name_ModRequestType == ClassReps[(int32)ENetFields_Private::ModRequestType].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AModControlActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModControlActor);
AModControlActor::~AModControlActor() {}
// End Class AModControlActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModControlActor, AModControlActor::StaticClass, TEXT("AModControlActor"), &Z_Registration_Info_UClass_AModControlActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModControlActor), 2667995697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_3230677444(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
