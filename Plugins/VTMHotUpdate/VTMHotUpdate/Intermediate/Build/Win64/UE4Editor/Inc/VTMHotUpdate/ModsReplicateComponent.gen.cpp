// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsReplicateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsReplicateComponent() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UModsReplicateComponent::execOnClientDownloadFinish)
	{
		P_GET_STRUCT_REF(FModData,Z_Param_Out__modData);
		P_GET_UBOOL(Z_Param_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClientDownloadFinish(Z_Param_Out__modData,Z_Param_result);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UModsReplicateComponent::execRequestLoadResouceFormMod)
	{
		P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLoadResouceFormMod_Implementation(Z_Param__downloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsReplicateComponent::execClientsRegistModObjGuidCache)
	{
		P_GET_STRUCT(FReconnectStruct,Z_Param__reconnectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientsRegistModObjGuidCache_Implementation(Z_Param__reconnectData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsReplicateComponent::execTellServerClientDownloadModFinished)
	{
		P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TellServerClientDownloadModFinished_Implementation(Z_Param__downloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsReplicateComponent::execMulticastClientsDownloadMod)
	{
		P_GET_STRUCT(FModDownloadData,Z_Param__downloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastClientsDownloadMod_Implementation(Z_Param__downloadData);
		P_NATIVE_END;
	}
	static FName NAME_UModsReplicateComponent_ClientsRegistModObjGuidCache = FName(TEXT("ClientsRegistModObjGuidCache"));
	void UModsReplicateComponent::ClientsRegistModObjGuidCache(FReconnectStruct const& _reconnectData)
	{
		ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms Parms;
		Parms._reconnectData=_reconnectData;
		ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_ClientsRegistModObjGuidCache),&Parms);
	}
	static FName NAME_UModsReplicateComponent_MulticastClientsDownloadMod = FName(TEXT("MulticastClientsDownloadMod"));
	void UModsReplicateComponent::MulticastClientsDownloadMod(FModDownloadData const& _downloadData)
	{
		ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms Parms;
		Parms._downloadData=_downloadData;
		ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_MulticastClientsDownloadMod),&Parms);
	}
	static FName NAME_UModsReplicateComponent_RequestLoadResouceFormMod = FName(TEXT("RequestLoadResouceFormMod"));
	void UModsReplicateComponent::RequestLoadResouceFormMod(FModDownloadData const& _downloadData)
	{
		ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms Parms;
		Parms._downloadData=_downloadData;
		ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_RequestLoadResouceFormMod),&Parms);
	}
	static FName NAME_UModsReplicateComponent_TellServerClientDownloadModFinished = FName(TEXT("TellServerClientDownloadModFinished"));
	void UModsReplicateComponent::TellServerClientDownloadModFinished(FModDownloadData const& _downloadData)
	{
		ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms Parms;
		Parms._downloadData=_downloadData;
		ProcessEvent(FindFunctionChecked(NAME_UModsReplicateComponent_TellServerClientDownloadModFinished),&Parms);
	}
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
	struct Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__reconnectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__reconnectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData = { "_reconnectData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms, _reconnectData), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::NewProp__reconnectData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "ClientsRegistModObjGuidCache", nullptr, nullptr, sizeof(ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms), Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::NewProp__downloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "MulticastClientsDownloadMod", nullptr, nullptr, sizeof(ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms), Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics
	{
		struct ModsReplicateComponent_eventOnClientDownloadFinish_Parms
		{
			FModData _modData;
			bool result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventOnClientDownloadFinish_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_SetBit(void* Obj)
	{
		((ModsReplicateComponent_eventOnClientDownloadFinish_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModsReplicateComponent_eventOnClientDownloadFinish_Parms), &Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "OnClientDownloadFinish", nullptr, nullptr, sizeof(ModsReplicateComponent_eventOnClientDownloadFinish_Parms), Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::NewProp__downloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n/// <param name=\"_downloadData\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
		{ "ToolTip", "<summary>\n\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\n</summary>\n<param name=\"_downloadData\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "RequestLoadResouceFormMod", nullptr, nullptr, sizeof(ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms), Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics
	{
		struct ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms
		{
			FModDownloadData _downloadData;
			FScriptDelegate _callBackFuc;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__downloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::NewProp__callBackFuc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "RequestLoadResouceFormModLocal", nullptr, nullptr, sizeof(ModsReplicateComponent_eventRequestLoadResouceFormModLocal_Parms), Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::NewProp__downloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsReplicateComponent, nullptr, "TellServerClientDownloadModFinished", nullptr, nullptr, sizeof(ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms), Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister()
	{
		return UModsReplicateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UModsReplicateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModsReplicateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModsReplicateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsReplicateComponent_ClientsRegistModObjGuidCache, "ClientsRegistModObjGuidCache" }, // 1478094786
		{ &Z_Construct_UFunction_UModsReplicateComponent_MulticastClientsDownloadMod, "MulticastClientsDownloadMod" }, // 3841265869
		{ &Z_Construct_UFunction_UModsReplicateComponent_OnClientDownloadFinish, "OnClientDownloadFinish" }, // 1620331197
		{ &Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormMod, "RequestLoadResouceFormMod" }, // 4018451569
		{ &Z_Construct_UFunction_UModsReplicateComponent_RequestLoadResouceFormModLocal, "RequestLoadResouceFormModLocal" }, // 1961230634
		{ &Z_Construct_UFunction_UModsReplicateComponent_TellServerClientDownloadModFinished, "TellServerClientDownloadModFinished" }, // 4285704374
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsReplicateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ModsReplicateComponent.h" },
		{ "ModuleRelativePath", "Public/ModsReplicateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModsReplicateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsReplicateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModsReplicateComponent_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UModsReplicateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModsReplicateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModsReplicateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModsReplicateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModsReplicateComponent, 652972953);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UModsReplicateComponent>()
	{
		return UModsReplicateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModsReplicateComponent(Z_Construct_UClass_UModsReplicateComponent, &UModsReplicateComponent::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UModsReplicateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModsReplicateComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
