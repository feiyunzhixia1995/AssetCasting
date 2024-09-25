// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModReplicateManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModReplicateManager() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(IModReplicateManager::execRequestLoadModResource)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out__loadModResourceDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLoadModResource_Implementation(Z_Param_Out__modData,FLoadModResourceDelegate(Z_Param_Out__loadModResourceDelegate));
		P_NATIVE_END;
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
	DEFINE_FUNCTION(IModReplicateManager::execClientDownloadModSuccessCallback)
	{
		P_GET_STRUCT_REF(FModData,Z_Param_Out__modData);
		P_GET_UBOOL(Z_Param__isSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDownloadModSuccessCallback_Implementation(Z_Param_Out__modData,Z_Param__isSuccess);
		P_NATIVE_END;
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
	void IModReplicateManager::ClientDownloadModSuccessCallback(FModData const& _modData, bool _isSuccess)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClientDownloadModSuccessCallback instead.");
	}
	void IModReplicateManager::ClientDownloaProgressCallback(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClientDownloaProgressCallback instead.");
	}
	void IModReplicateManager::RequestLoadModResource(FModDownloadData const& _modData, FLoadModResourceDelegate const& _loadModResourceDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestLoadModResource instead.");
	}
	void IModReplicateManager::RequestSpawnModActor(FModDownloadData const& _modData, FTransform const& _transform, FSpawnModActorDelegate const& _spawnModActorDelegate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestSpawnModActor instead.");
	}
	void IModReplicateManager::ServerDownloadModSuccessCallback(FModData const& _modData, bool _isSuccess)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ServerDownloadModSuccessCallback instead.");
	}
	void IModReplicateManager::ServerDownloaProgressCallback(FModDownloadData const& _modData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ServerDownloaProgressCallback instead.");
	}
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
	struct Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSuccess_MetaData[];
#endif
		static void NewProp__isSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit(void* Obj)
	{
		((ModReplicateManager_eventClientDownloadModSuccessCallback_Parms*)Obj)->_isSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms), &Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::NewProp__isSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n/// <param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>\n" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>\n<param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ClientDownloadModSuccessCallback", nullptr, nullptr, sizeof(ModReplicateManager_eventClientDownloadModSuccessCallback_Parms), Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventClientDownloaProgressCallback_Parms, _progress), METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::NewProp__progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ClientDownloaProgressCallback", nullptr, nullptr, sizeof(ModReplicateManager_eventClientDownloaProgressCallback_Parms), Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadModResourceDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__loadModResourceDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestLoadModResource_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate = { "_loadModResourceDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestLoadModResource_Parms, _loadModResourceDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::NewProp__loadModResourceDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "RequestLoadModResource", nullptr, nullptr, sizeof(ModReplicateManager_eventRequestLoadModResource_Parms), Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnModActorDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__spawnModActorDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate = { "_spawnModActorDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventRequestSpawnModActor_Parms, _spawnModActorDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::NewProp__spawnModActorDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "RequestSpawnModActor", nullptr, nullptr, sizeof(ModReplicateManager_eventRequestSpawnModActor_Parms), Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSuccess_MetaData[];
#endif
		static void NewProp__isSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit(void* Obj)
	{
		((ModReplicateManager_eventServerDownloadModSuccessCallback_Parms*)Obj)->_isSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess = { "_isSuccess", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms), &Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::NewProp__isSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n/// <param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>\n" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe4\xbf\xa1\xe6\x81\xaf\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>\n<param name=\"_modData\">mod\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"_isSuccess\">\xe6\x98\xaf\xe5\x90\xa6\xe6\x88\x90\xe5\x8a\x9f</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ServerDownloadModSuccessCallback", nullptr, nullptr, sizeof(ModReplicateManager_eventServerDownloadModSuccessCallback_Parms), Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__state;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _modData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModReplicateManager_eventServerDownloaProgressCallback_Parms, _progress), METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::NewProp__progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n///\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\x8e\xa5\xe6\x94\xb6mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\xe7\x9a\x84\xe6\x8e\xa5\xe5\x8f\xa3 \xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe9\x87\x8d\xe5\x86\x99\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModReplicateManager, nullptr, "ServerDownloaProgressCallback", nullptr, nullptr, sizeof(ModReplicateManager_eventServerDownloaProgressCallback_Parms), Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModReplicateManager_NoRegister()
	{
		return UModReplicateManager::StaticClass();
	}
	struct Z_Construct_UClass_UModReplicateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModReplicateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModReplicateManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModReplicateManager_ClientDownloadModSuccessCallback, "ClientDownloadModSuccessCallback" }, // 2832563843
		{ &Z_Construct_UFunction_UModReplicateManager_ClientDownloaProgressCallback, "ClientDownloaProgressCallback" }, // 423279204
		{ &Z_Construct_UFunction_UModReplicateManager_RequestLoadModResource, "RequestLoadModResource" }, // 1980783763
		{ &Z_Construct_UFunction_UModReplicateManager_RequestSpawnModActor, "RequestSpawnModActor" }, // 1500882884
		{ &Z_Construct_UFunction_UModReplicateManager_ServerDownloadModSuccessCallback, "ServerDownloadModSuccessCallback" }, // 1183152732
		{ &Z_Construct_UFunction_UModReplicateManager_ServerDownloaProgressCallback, "ServerDownloaProgressCallback" }, // 677890841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModReplicateManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModReplicateManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModReplicateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModReplicateManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModReplicateManager_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UModReplicateManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModReplicateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModReplicateManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModReplicateManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModReplicateManager, 3503311000);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UModReplicateManager>()
	{
		return UModReplicateManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModReplicateManager(Z_Construct_UClass_UModReplicateManager, &UModReplicateManager::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UModReplicateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModReplicateManager);
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
