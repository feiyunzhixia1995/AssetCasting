// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModControlActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModControlActor() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModActorStruct();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLoadModResourceStruct();
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EModRequestType();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModControlActor::execSetIsNeedReplicateMod)
	{
		P_GET_UBOOL(Z_Param__isNeedReplicateMod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsNeedReplicateMod(Z_Param__isNeedReplicateMod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModControlActor::execOnReq_ModDownloadDataChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReq_ModDownloadDataChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModControlActor::execOnModActorDestory)
	{
		P_GET_OBJECT(AActor,Z_Param__modActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnModActorDestory(Z_Param__modActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModControlActor::execRegistModActorDestory)
	{
		P_GET_OBJECT(AActor,Z_Param__modActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistModActorDestory(Z_Param__modActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModControlActor::execRequestMod)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AModControlActor**)Z_Param__Result=AModControlActor::RequestMod(Z_Param_Out__modDownloadData);
		P_NATIVE_END;
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
	struct Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics
	{
		struct ModControlActor_eventOnModActorDestory_Parms
		{
			AActor* _modActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__modActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::NewProp__modActor = { "_modActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventOnModActorDestory_Parms, _modActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::NewProp__modActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "OnModActorDestory", nullptr, nullptr, sizeof(ModControlActor_eventOnModActorDestory_Parms), Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_OnModActorDestory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_OnModActorDestory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "OnReq_ModDownloadDataChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics
	{
		struct ModControlActor_eventRegistModActorDestory_Parms
		{
			AActor* _modActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__modActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::NewProp__modActor = { "_modActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRegistModActorDestory_Parms, _modActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::NewProp__modActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RegistModActorDestory", nullptr, nullptr, sizeof(ModControlActor_eventRegistModActorDestory_Parms), Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_RegistModActorDestory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_RegistModActorDestory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModControlActor_RequestMod_Statics
	{
		struct ModControlActor_eventRequestMod_Parms
		{
			FModDownloadData _modDownloadData;
			AModControlActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestMod_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestMod_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestMod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestMod", nullptr, nullptr, sizeof(ModControlActor_eventRequestMod_Parms), Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_RequestMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnModActorDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__spawnModActorDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate = { "_spawnModActorDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, _spawnModActorDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModActor_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp__spawnModActorDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestModActor", nullptr, nullptr, sizeof(ModControlActor_eventRequestModActor_Parms), Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_RequestModActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestModActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModControlActor_RequestModResource_Statics
	{
		struct ModControlActor_eventRequestModResource_Parms
		{
			FModDownloadData _modDownloadData;
			FScriptDelegate _loadModResourceDelegate;
			AModControlActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadModResourceDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__loadModResourceDelegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate = { "_loadModResourceDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, _loadModResourceDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModControlActor_eventRequestModResource_Parms, ReturnValue), Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp__loadModResourceDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "RequestModResource", nullptr, nullptr, sizeof(ModControlActor_eventRequestModResource_Parms), Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_RequestModResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_RequestModResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics
	{
		struct ModControlActor_eventSetIsNeedReplicateMod_Parms
		{
			bool _isNeedReplicateMod;
		};
		static void NewProp__isNeedReplicateMod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isNeedReplicateMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod_SetBit(void* Obj)
	{
		((ModControlActor_eventSetIsNeedReplicateMod_Parms*)Obj)->_isNeedReplicateMod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod = { "_isNeedReplicateMod", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModControlActor_eventSetIsNeedReplicateMod_Parms), &Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::NewProp__isNeedReplicateMod,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModControlActor, nullptr, "SetIsNeedReplicateMod", nullptr, nullptr, sizeof(ModControlActor_eventSetIsNeedReplicateMod_Parms), Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModControlActor_NoRegister()
	{
		return AModControlActor::StaticClass();
	}
	struct Z_Construct_UClass_AModControlActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModDownloadData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModsReplicateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModsReplicateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerModLoadResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModLoadResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientModLoadResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModLoadResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientModDownloadProgresstDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModDownloadProgresstDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerModDownloadProgresstDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModDownloadProgresstDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnModActorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnModActorData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadModResourceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadModResourceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModRequestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ModRequestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNeedReplicateMod_MetaData[];
#endif
		static void NewProp_IsNeedReplicateMod_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNeedReplicateMod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModControlActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModControlActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModControlActor_OnModActorDestory, "OnModActorDestory" }, // 575707471
		{ &Z_Construct_UFunction_AModControlActor_OnReq_ModDownloadDataChange, "OnReq_ModDownloadDataChange" }, // 4252547156
		{ &Z_Construct_UFunction_AModControlActor_RegistModActorDestory, "RegistModActorDestory" }, // 3472293766
		{ &Z_Construct_UFunction_AModControlActor_RequestMod, "RequestMod" }, // 817813742
		{ &Z_Construct_UFunction_AModControlActor_RequestModActor, "RequestModActor" }, // 1953557991
		{ &Z_Construct_UFunction_AModControlActor_RequestModResource, "RequestModResource" }, // 961125593
		{ &Z_Construct_UFunction_AModControlActor_SetIsNeedReplicateMod, "SetIsNeedReplicateMod" }, // 401442399
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86mod\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x98\xbe\xe7\xa4\xba, \xe4\xbb\xa5\xe5\x8f\x8a\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe7\xae\xa1\xe7\x90\x86\n/// </summary>\n" },
		{ "IncludePath", "ModControlActor.h" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
		{ "ToolTip", "<summary>\n\xe7\x94\xa8\xe4\xba\x8e\xe7\xae\xa1\xe7\x90\x86mod\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x87\xe7\xa8\x8b\xe4\xb8\xad\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\xe6\x98\xbe\xe7\xa4\xba, \xe4\xbb\xa5\xe5\x8f\x8a\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe6\x98\xbe\xe7\xa4\xba\xe7\xae\xa1\xe7\x90\x86\n</summary>" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData = { "ModDownloadData", "OnReq_ModDownloadDataChange", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ModDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent = { "ModsReplicateComponent", nullptr, (EPropertyFlags)0x001000000008003d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ModsReplicateComponent), Z_Construct_UClass_UModsReplicateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate = { "ServerModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ServerModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate = { "ClientModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ClientModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate = { "ClientModDownloadProgresstDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ClientModDownloadProgresstDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate = { "ServerModDownloadProgresstDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ServerModDownloadProgresstDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData = { "SpawnModActorData", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, SpawnModActorData), Z_Construct_UScriptStruct_FSpawnModActorStruct, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData = { "LoadModResourceData", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, LoadModResourceData), Z_Construct_UScriptStruct_FLoadModResourceStruct, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType = { "ModRequestType", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModControlActor, ModRequestType), Z_Construct_UEnum_VTMHotUpdate_EModRequestType, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_MetaData[] = {
		{ "Category", "ModControlActor" },
		{ "ModuleRelativePath", "Public/ModControlActor.h" },
	};
#endif
	void Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_SetBit(void* Obj)
	{
		((AModControlActor*)Obj)->IsNeedReplicateMod = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod = { "IsNeedReplicateMod", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModControlActor), &Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModControlActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModsReplicateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModLoadResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModLoadResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ClientModDownloadProgresstDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ServerModDownloadProgresstDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_SpawnModActorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_LoadModResourceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_ModRequestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModControlActor_Statics::NewProp_IsNeedReplicateMod,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModControlActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModReplicateManager_NoRegister, (int32)VTABLE_OFFSET(AModControlActor, IModReplicateManager), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModControlActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModControlActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModControlActor_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_AModControlActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModControlActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModControlActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModControlActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModControlActor, 3040639541);
	template<> VTMHOTUPDATE_API UClass* StaticClass<AModControlActor>()
	{
		return AModControlActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModControlActor(Z_Construct_UClass_AModControlActor, &AModControlActor::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("AModControlActor"), false, nullptr, nullptr, nullptr);

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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
