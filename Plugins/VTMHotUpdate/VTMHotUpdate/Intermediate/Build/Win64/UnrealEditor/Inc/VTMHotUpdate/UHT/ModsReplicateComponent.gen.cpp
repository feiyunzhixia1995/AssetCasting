// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsReplicateComponent.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsReplicateComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct();
// End Cross Module References

// Begin Class UModsReplicateComponent Function ClientsRegistModObjGuidCache
struct ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms
{
	FReconnectStruct _reconnectData;
};
static FName NAME_UModsReplicateComponent_ClientsRegistModObjGuidCache = FName(TEXT("ClientsRegistModObjGuidCache"));
void UModsReplicateComponent::ClientsRegistModObjGuidCache(FReconnectStruct const& _reconnectData)
{
	ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms Parms;
	Parms._reconnectData=_reconnectData;
	ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_ClientsRegistModObjGuidCache),&Parms);
}
struct Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__reconnectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__reconnectData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData = { "_reconnectData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms, _reconnectData), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__reconnectData_MetaData), NewProp__reconnectData_MetaData) }; // 2158008370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "ClientsRegistModObjGuidCache", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers), sizeof(ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execClientsRegistModObjGuidCache)
{
	P_GET_STRUCT(FReconnectStruct,Z_Param__reconnectData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientsRegistModObjGuidCache_Implementation(Z_Param__reconnectData);
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function ClientsRegistModObjGuidCache

// Begin Class UModsReplicateComponent Function MulticastClientsDownloadMod
struct ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms
{
	FModDownloadData _downloadData;
};
static FName NAME_UModsReplicateComponent_MulticastClientsDownloadMod = FName(TEXT("MulticastClientsDownloadMod"));
void UModsReplicateComponent::MulticastClientsDownloadMod(FModDownloadData const& _downloadData)
{
	ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms Parms;
	Parms._downloadData=_downloadData;
	ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_MulticastClientsDownloadMod),&Parms);
}
struct Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "MulticastClientsDownloadMod", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers), sizeof(ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execMulticastClientsDownloadMod)
{
	P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastClientsDownloadMod_Implementation(Z_Param__downloadData);
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function MulticastClientsDownloadMod

// Begin Class UModsReplicateComponent Function OnClientDownloadFinish
struct Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics
{
	struct ModsReplicateComponent_eventOnClientDownloadFinish_Parms
	{
		FModData _modData;
		bool result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static void NewProp_result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventOnClientDownloadFinish_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 100364597
void Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_SetBit(void* Obj)
{
	((ModsReplicateComponent_eventOnClientDownloadFinish_Parms*)Obj)->result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModsReplicateComponent_eventOnClientDownloadFinish_Parms), &Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_result_MetaData), NewProp_result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "OnClientDownloadFinish", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::ModsReplicateComponent_eventOnClientDownloadFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::ModsReplicateComponent_eventOnClientDownloadFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execOnClientDownloadFinish)
{
	P_GET_STRUCT_REF(FModData,Z_Param_Out__modData);
	P_GET_UBOOL(Z_Param_result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClientDownloadFinish(Z_Param_Out__modData,Z_Param_result);
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function OnClientDownloadFinish

// Begin Class UModsReplicateComponent Function RequestLoadResouceFormMod
struct ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms
{
	FModDownloadData _downloadData;
};
static FName NAME_UModsReplicateComponent_RequestLoadResouceFormMod = FName(TEXT("RequestLoadResouceFormMod"));
void UModsReplicateComponent::RequestLoadResouceFormMod(FModDownloadData const& _downloadData)
{
	ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms Parms;
	Parms._downloadData=_downloadData;
	ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_RequestLoadResouceFormMod),&Parms);
}
struct Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n/// <param name=\"_downloadData\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\n</summary>\n<param name=\"_downloadData\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "RequestLoadResouceFormMod", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers), sizeof(ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execRequestLoadResouceFormMod)
{
	P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLoadResouceFormMod_Implementation(Z_Param__downloadData);
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function RequestLoadResouceFormMod

// Begin Class UModsReplicateComponent Function RequestLoadResouceFormModLocal
struct Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics
{
	struct ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms
	{
		FModDownloadData _downloadData;
		FScriptDelegate _callBackFuc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1907644008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__callBackFuc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "RequestLoadResouceFormModLocal", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execRequestLoadResouceFormModLocal)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
	P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLoadResouceFormModLocal(Z_Param_Out__downloadData,FDownloadModResultDelegate(Z_Param__callBackFuc));
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function RequestLoadResouceFormModLocal

// Begin Class UModsReplicateComponent Function TellServerClientDownloadModFinished
struct ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms
{
	FModDownloadData _downloadData;
};
static FName NAME_UModsReplicateComponent_TellServerClientDownloadModFinished = FName(TEXT("TellServerClientDownloadModFinished"));
void UModsReplicateComponent::TellServerClientDownloadModFinished(FModDownloadData const& _downloadData)
{
	ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms Parms;
	Parms._downloadData=_downloadData;
	ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_TellServerClientDownloadModFinished),&Parms);
}
struct Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "TellServerClientDownloadModFinished", nullptr, nullptr, Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers), sizeof(ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsReplicateComponent::execTellServerClientDownloadModFinished)
{
	P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TellServerClientDownloadModFinished_Implementation(Z_Param__downloadData);
	P_NATIVE_END;
}
// End Class UModsReplicateComponent Function TellServerClientDownloadModFinished

// Begin Class UModsReplicateComponent
void UModsReplicateComponent::StaticRegisterNativesUModsReplicateComponent()
{
	UClass* Class = UModsReplicateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientsRegistModObjGuidCache", &UModsReplicateComponent::execClientsRegistModObjGuidCache },
		{ "MulticastClientsDownloadMod", &UModsReplicateComponent::execMulticastClientsDownloadMod },
		{ "OnClientDownloadFinish", &UModsReplicateComponent::execOnClientDownloadFinish },
		{ "RequestLoadResouceFormMod", &UModsReplicateComponent::execRequestLoadResouceFormMod },
		{ "RequestLoadResouceFormModLocal", &UModsReplicateComponent::execRequestLoadResouceFormModLocal },
		{ "TellServerClientDownloadModFinished", &UModsReplicateComponent::execTellServerClientDownloadModFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModsReplicateComponent);
UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister()
{
	return UModsReplicateComponent::StaticClass();
}
struct Z_Construct_UClass_UModsReplicateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ModsReplicateComponent.h" },
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache, "ClientsRegistModObjGuidCache" }, // 3425906487
		{ &Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod, "MulticastClientsDownloadMod" }, // 2786780918
		{ &Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish, "OnClientDownloadFinish" }, // 1580846764
		{ &Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod, "RequestLoadResouceFormMod" }, // 3752523762
		{ &Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal, "RequestLoadResouceFormModLocal" }, // 1538783045
		{ &Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished, "TellServerClientDownloadModFinished" }, // 1185354103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsReplicateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModsReplicateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsReplicateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModsReplicateComponent_Statics::ClassParams = {
	&UModsReplicateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModsReplicateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModsReplicateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModsReplicateComponent()
{
	if (!Z_Registration_Info_UClass_UModsReplicateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModsReplicateComponent.OuterSingleton, Z_Construct_UClass_UModsReplicateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModsReplicateComponent.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UModsReplicateComponent>()
{
	return UModsReplicateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModsReplicateComponent);
UModsReplicateComponent::~UModsReplicateComponent() {}
// End Class UModsReplicateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModsReplicateComponent, UModsReplicateComponent::StaticClass, TEXT("UModsReplicateComponent"), &Z_Registration_Info_UClass_UModsReplicateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModsReplicateComponent), 1496268208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_3413136383(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
