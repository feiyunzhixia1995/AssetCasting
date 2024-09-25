// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModReplicateManager.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModReplicateManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
// End Cross Module References

// Begin Interface UModReplicateManager Function ClientDownloadModSuccessCallback
struct ModReplicateManager_eventClientDownloadModSuccessCallback_Parms
{
	FModData _modData;
	bool _isSuccess;
};
void IModReplicateManager::ClientDownloadModSuccessCallback(FModData const& _modData, bool _isSuccess)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClientDownloadModSuccessCallback instead.");
}
static FName NAME_UModReplicateManager_ClientDownloadModSuccessCallback = FName(TEXT("ClientDownloadModSuccessCallback"));
void IModReplicateManager::Execute_ClientDownloadModSuccessCallback(UObject* O, FModData const& _modData, bool _isSuccess)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventClientDownloadModSuccessCallback_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_ClientDownloadModSuccessCallback);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._isSuccess=_isSuccess;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->ClientDownloadModSuccessCallback_Implementation(_modData,_isSuccess);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n/// <param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>\n<param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 100364597
void Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit(void* Obj)
{
	((ModReplicateManager_eventClientDownloadModSuccessCallback_Parms*)Obj)->_isSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms), &Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isSuccess_MetaData), NewProp__isSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ClientDownloadModSuccessCallback", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers), sizeof(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execClientDownloadModSuccessCallback)
{
	P_GET_STRUCT_REF(FModData,Z_Param_Out__modData);
	P_GET_UBOOL(Z_Param__isSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientDownloadModSuccessCallback_Implementation(Z_Param_Out__modData,Z_Param__isSuccess);
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function ClientDownloadModSuccessCallback

// Begin Interface UModReplicateManager Function ClientDownloaProgressCallback
struct ModReplicateManager_eventClientDownloaProgressCallback_Parms
{
	FModDownloadData _modData;
	TEnumAsByte<EHotUpdateState> _state;
	float _progress;
};
void IModReplicateManager::ClientDownloaProgressCallback(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClientDownloaProgressCallback instead.");
}
static FName NAME_UModReplicateManager_ClientDownloaProgressCallback = FName(TEXT("ClientDownloaProgressCallback"));
void IModReplicateManager::Execute_ClientDownloaProgressCallback(UObject* O, FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventClientDownloaProgressCallback_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_ClientDownloaProgressCallback);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._state=_state;
		Parms._progress=_progress;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->ClientDownloaProgressCallback_Implementation(_modData,_state,_progress);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__state;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 1446792847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__state_MetaData), NewProp__state_MetaData) }; // 175813423
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ClientDownloaProgressCallback", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers), sizeof(ModReplicateManager_eventClientDownloaProgressCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventClientDownloaProgressCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execClientDownloaProgressCallback)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modData);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__state);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out__progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientDownloaProgressCallback_Implementation(Z_Param_Out__modData,(TEnumAsByte<EHotUpdateState>&)(Z_Param_Out__state),Z_Param_Out__progress);
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function ClientDownloaProgressCallback

// Begin Interface UModReplicateManager Function RequestLoadModResource
struct ModReplicateManager_eventRequestLoadModResource_Parms
{
	FModDownloadData _modData;
	FLoadModResourceDelegate _loadModResourceDelegate;
};
void IModReplicateManager::RequestLoadModResource(FModDownloadData const& _modData, FLoadModResourceDelegate const& _loadModResourceDelegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestLoadModResource instead.");
}
static FName NAME_UModReplicateManager_RequestLoadModResource = FName(TEXT("RequestLoadModResource"));
void IModReplicateManager::Execute_RequestLoadModResource(UObject* O, FModDownloadData const& _modData, FLoadModResourceDelegate const& _loadModResourceDelegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventRequestLoadModResource_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_RequestLoadModResource);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._loadModResourceDelegate=_loadModResourceDelegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->RequestLoadModResource_Implementation(_modData,_loadModResourceDelegate);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__loadModResourceDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__loadModResourceDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestLoadModResource_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 1446792847
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate = { "_loadModResourceDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestLoadModResource_Parms, _loadModResourceDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__loadModResourceDelegate_MetaData), NewProp__loadModResourceDelegate_MetaData) }; // 710570670
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "RequestLoadModResource", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers), sizeof(ModReplicateManager_eventRequestLoadModResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventRequestLoadModResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execRequestLoadModResource)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modData);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__loadModResourceDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLoadModResource_Implementation(Z_Param_Out__modData,FLoadModResourceDelegate(Z_Param_Out__loadModResourceDelegate));
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function RequestLoadModResource

// Begin Interface UModReplicateManager Function RequestSpawnModActor
struct ModReplicateManager_eventRequestSpawnModActor_Parms
{
	FModDownloadData _modData;
	FTransform _transform;
	FSpawnModActorDelegate _spawnModActorDelegate;
};
void IModReplicateManager::RequestSpawnModActor(FModDownloadData const& _modData, FTransform const& _transform, FSpawnModActorDelegate const& _spawnModActorDelegate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestSpawnModActor instead.");
}
static FName NAME_UModReplicateManager_RequestSpawnModActor = FName(TEXT("RequestSpawnModActor"));
void IModReplicateManager::Execute_RequestSpawnModActor(UObject* O, FModDownloadData const& _modData, FTransform const& _transform, FSpawnModActorDelegate const& _spawnModActorDelegate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventRequestSpawnModActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_RequestSpawnModActor);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._transform=_transform;
		Parms._spawnModActorDelegate=_spawnModActorDelegate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->RequestSpawnModActor_Implementation(_modData,_transform,_spawnModActorDelegate);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__spawnModActorDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static const UECodeGen_Private::FStructPropertyParams NewProp__transform;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__spawnModActorDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 1446792847
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__transform_MetaData), NewProp__transform_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate = { "_spawnModActorDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _spawnModActorDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__spawnModActorDelegate_MetaData), NewProp__spawnModActorDelegate_MetaData) }; // 3715898845
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "RequestSpawnModActor", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers), sizeof(ModReplicateManager_eventRequestSpawnModActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventRequestSpawnModActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execRequestSpawnModActor)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modData);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__spawnModActorDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestSpawnModActor_Implementation(Z_Param_Out__modData,Z_Param_Out__transform,FSpawnModActorDelegate(Z_Param_Out__spawnModActorDelegate));
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function RequestSpawnModActor

// Begin Interface UModReplicateManager Function ServerDownloadModSuccessCallback
struct ModReplicateManager_eventServerDownloadModSuccessCallback_Parms
{
	FModData _modData;
	bool _isSuccess;
};
void IModReplicateManager::ServerDownloadModSuccessCallback(FModData const& _modData, bool _isSuccess)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ServerDownloadModSuccessCallback instead.");
}
static FName NAME_UModReplicateManager_ServerDownloadModSuccessCallback = FName(TEXT("ServerDownloadModSuccessCallback"));
void IModReplicateManager::Execute_ServerDownloadModSuccessCallback(UObject* O, FModData const& _modData, bool _isSuccess)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventServerDownloadModSuccessCallback_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_ServerDownloadModSuccessCallback);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._isSuccess=_isSuccess;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->ServerDownloadModSuccessCallback_Implementation(_modData,_isSuccess);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n/// <param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>\n<param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>" },
#endif
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 100364597
void Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit(void* Obj)
{
	((ModReplicateManager_eventServerDownloadModSuccessCallback_Parms*)Obj)->_isSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms), &Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__isSuccess_MetaData), NewProp__isSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ServerDownloadModSuccessCallback", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers), sizeof(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execServerDownloadModSuccessCallback)
{
	P_GET_STRUCT_REF(FModData,Z_Param_Out__modData);
	P_GET_UBOOL(Z_Param__isSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDownloadModSuccessCallback_Implementation(Z_Param_Out__modData,Z_Param__isSuccess);
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function ServerDownloadModSuccessCallback

// Begin Interface UModReplicateManager Function ServerDownloaProgressCallback
struct ModReplicateManager_eventServerDownloaProgressCallback_Parms
{
	FModDownloadData _modData;
	TEnumAsByte<EHotUpdateState> _state;
	float _progress;
};
void IModReplicateManager::ServerDownloaProgressCallback(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ServerDownloaProgressCallback instead.");
}
static FName NAME_UModReplicateManager_ServerDownloaProgressCallback = FName(TEXT("ServerDownloaProgressCallback"));
void IModReplicateManager::Execute_ServerDownloaProgressCallback(UObject* O, FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UModReplicateManager::StaticClass()));
	ModReplicateManager_eventServerDownloaProgressCallback_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UModReplicateManager_ServerDownloaProgressCallback);
	if (Func)
	{
		Parms._modData=_modData;
		Parms._state=_state;
		Parms._progress=_progress;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IModReplicateManager*)(O->GetNativeInterfaceAddress(UModReplicateManager::StaticClass())))
	{
		I->ServerDownloaProgressCallback_Implementation(_modData,_state,_progress);
	}
}
struct Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n///\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__state;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 1446792847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__state_MetaData), NewProp__state_MetaData) }; // 175813423
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ServerDownloaProgressCallback", nullptr, nullptr, Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers), sizeof(ModReplicateManager_eventServerDownloaProgressCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModReplicateManager_eventServerDownloaProgressCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IModReplicateManager::execServerDownloaProgressCallback)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modData);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out__state);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out__progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerDownloaProgressCallback_Implementation(Z_Param_Out__modData,(TEnumAsByte<EHotUpdateState>&)(Z_Param_Out__state),Z_Param_Out__progress);
	P_NATIVE_END;
}
// End Interface UModReplicateManager Function ServerDownloaProgressCallback

// Begin Interface UModReplicateManager
void UModReplicateManager::StaticRegisterNativesUModReplicateManager()
{
	UClass* Class = UModReplicateManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientDownloadModSuccessCallback", &IModReplicateManager::execClientDownloadModSuccessCallback },
		{ "ClientDownloaProgressCallback", &IModReplicateManager::execClientDownloaProgressCallback },
		{ "RequestLoadModResource", &IModReplicateManager::execRequestLoadModResource },
		{ "RequestSpawnModActor", &IModReplicateManager::execRequestSpawnModActor },
		{ "ServerDownloadModSuccessCallback", &IModReplicateManager::execServerDownloadModSuccessCallback },
		{ "ServerDownloaProgressCallback", &IModReplicateManager::execServerDownloaProgressCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModReplicateManager);
UClass* Z_Construct_UClass_UModReplicateManager_NoRegister()
{
	return UModReplicateManager::StaticClass();
}
struct Z_Construct_UClass_UModReplicateManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback, "ClientDownloadModSuccessCallback" }, // 2898009794
		{ &Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback, "ClientDownloaProgressCallback" }, // 2642005127
		{ &Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource, "RequestLoadModResource" }, // 2791322430
		{ &Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor, "RequestSpawnModActor" }, // 162564078
		{ &Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback, "ServerDownloadModSuccessCallback" }, // 1877115087
		{ &Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback, "ServerDownloaProgressCallback" }, // 4063783968
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModReplicateManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModReplicateManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModReplicateManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModReplicateManager_Statics::ClassParams = {
	&UModReplicateManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModReplicateManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModReplicateManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModReplicateManager()
{
	if (!Z_Registration_Info_UClass_UModReplicateManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModReplicateManager.OuterSingleton, Z_Construct_UClass_UModReplicateManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModReplicateManager.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UModReplicateManager>()
{
	return UModReplicateManager::StaticClass();
}
UModReplicateManager::UModReplicateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModReplicateManager);
UModReplicateManager::~UModReplicateManager() {}
// End Interface UModReplicateManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModReplicateManager, UModReplicateManager::StaticClass, TEXT("UModReplicateManager"), &Z_Registration_Info_UClass_UModReplicateManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModReplicateManager), 3435638710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_2850705669(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModReplicateManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
