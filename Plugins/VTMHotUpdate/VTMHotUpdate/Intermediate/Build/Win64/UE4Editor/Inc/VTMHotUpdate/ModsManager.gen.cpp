// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsManager() {}
// Cross Module References
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsSetting_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsSetting();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLodModsStruct();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsManager_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsManager();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDependenciesObjData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModObjData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics
	{
		struct _Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_SetBit(void* Obj)
	{
		((_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms), &Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics
	{
		struct _Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms
		{
			FModDownloadData _modDownloadData;
			TEnumAsByte<EHotUpdateState> _state;
			float _progress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _progress), METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModProgressSingleDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms
		{
			FModDownloadData _modDownloadData;
			TEnumAsByte<EHotUpdateState> _state;
			float _progress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _progress), METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UModsSetting::StaticRegisterNativesUModsSetting()
	{
	}
	UClass* Z_Construct_UClass_UModsSetting_NoRegister()
	{
		return UModsSetting::StaticClass();
	}
	struct Z_Construct_UClass_UModsSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadModSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadModSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModsSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsSetting_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ModsSetting" },
		{ "IncludePath", "ModsManager.h" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting_MetaData[] = {
		{ "Category", "Config | ModsSetting" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting = { "LoadModSetting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsSetting, LoadModSetting), Z_Construct_UScriptStruct_FLodModsStruct, METADATA_PARAMS(Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModsSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModsSetting_Statics::ClassParams = {
		&UModsSetting::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModsSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UModsSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModsSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModsSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModsSetting, 3679709256);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UModsSetting>()
	{
		return UModsSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModsSetting(Z_Construct_UClass_UModsSetting, &UModsSetting::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UModsSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModsSetting);
	DEFINE_FUNCTION(UModsManager::execGetDependenciesAassetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FStrProperty,Z_Param__assetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModDependenciesObjData>*)Z_Param__Result=UModsManager::GetDependenciesAassetByName(Z_Param__modId,Z_Param__assetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetDependenciesAassetById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FStrProperty,Z_Param__assetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FModDependenciesObjData>*)Z_Param__Result=UModsManager::GetDependenciesAassetById(Z_Param__modId,Z_Param__assetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execOpenModLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FStrProperty,Z_Param__levelName);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UModsManager::OpenModLevel(Z_Param__modId,Z_Param__levelName,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execBpSpawnModActor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModActorId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ModId);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
		P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UModsManager::BpSpawnModActor(Z_Param_ModActorId,Z_Param_ModId,Z_Param_Instigator,Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execBpLoadModResouce)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModObjId);
		P_GET_PROPERTY(FStrProperty,Z_Param_ModID);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoadFlags);
		P_GET_OBJECT(UPackageMap,Z_Param_Sandbox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=UModsManager::BpLoadModResouce(Z_Param_ModObjId,Z_Param_ModID,Z_Param_Instigator,Z_Param_Outer,Z_Param_Name,Z_Param_Filename,Z_Param_LoadFlags,Z_Param_Sandbox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execSplicingModActorPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__mountPoint);
		P_GET_PROPERTY(FStrProperty,Z_Param__actorName);
		P_GET_PROPERTY(FStrProperty,Z_Param__relativePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UModsManager::SplicingModActorPath(Z_Param__mountPoint,Z_Param__actorName,Z_Param__relativePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetModObjData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FStrProperty,Z_Param__modAssetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModObjData*)Z_Param__Result=P_THIS->GetModObjData(Z_Param__modId,Z_Param__modAssetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execReadModFileJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modName);
		P_GET_PROPERTY(FStrProperty,Z_Param__modSavePath);
		P_GET_STRUCT_REF(FModData,Z_Param_Out__outModData);
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadModFileJson(Z_Param__modName,Z_Param__modSavePath,Z_Param_Out__outModData,Z_Param__modId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execRegistActorGuidCacheForClient)
	{
		P_GET_STRUCT_REF(FReconnectStruct,Z_Param_Out__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistActorGuidCacheForClient(Z_Param_Out__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execCloseActorChannel)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out__objectid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseActorChannel(Z_Param_Out__objectid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetObjectGuidCacheData)
	{
		P_GET_OBJECT(UObject,Z_Param__actor);
		P_GET_STRUCT_REF(FReconnectStruct,Z_Param_Out__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetObjectGuidCacheData(Z_Param__actor,Z_Param_Out__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetReplicateObj)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__objectid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetReplicateObj(Z_Param__objectid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetModData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FModData*)Z_Param__Result=P_THIS->GetModData(Z_Param__modId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execIsModsLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModsLoaded(Z_Param__modName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execRegistModDownloadProgressCallBack)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistModDownloadProgressCallBack(Z_Param__modId,FDownloadModProgressSingleDelegate(Z_Param__callBackFuc));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execRegistModDownloadCallBack)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__modId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistModDownloadCallBack(Z_Param__modId,FDownloadModResultDelegate(Z_Param__callBackFuc));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execRequestLoadResouceFormMod)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
		P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLoadResouceFormMod(Z_Param_Out__downloadData,FDownloadModResultDelegate(Z_Param__callBackFuc));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetLoadModsSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLodModsStruct*)Z_Param__Result=P_THIS->GetLoadModsSetting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execDownloadModFailed)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadModFailed(Z_Param_Out__modDownloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execDownloadModSuccess)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadModSuccess(Z_Param_Out__modDownloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execUpdateDownloadingMods)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out__progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDownloadingMods(Z_Param_Out__modDownloadData,Z_Param_Out__progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execBegingDownloadMod)
	{
		P_GET_OBJECT(UModsDownloader,Z_Param__modDownloader);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BegingDownloadMod(Z_Param__modDownloader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execCreateDownloader)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modsDownloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDownloader(Z_Param_Out__modsDownloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsManager::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UModsManager**)Z_Param__Result=UModsManager::GetInstance();
		P_NATIVE_END;
	}
	void UModsManager::StaticRegisterNativesUModsManager()
	{
		UClass* Class = UModsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BegingDownloadMod", &UModsManager::execBegingDownloadMod },
			{ "BpLoadModResouce", &UModsManager::execBpLoadModResouce },
			{ "BpSpawnModActor", &UModsManager::execBpSpawnModActor },
			{ "CloseActorChannel", &UModsManager::execCloseActorChannel },
			{ "CreateDownloader", &UModsManager::execCreateDownloader },
			{ "DownloadModFailed", &UModsManager::execDownloadModFailed },
			{ "DownloadModSuccess", &UModsManager::execDownloadModSuccess },
			{ "GetDependenciesAassetById", &UModsManager::execGetDependenciesAassetById },
			{ "GetDependenciesAassetByName", &UModsManager::execGetDependenciesAassetByName },
			{ "GetInstance", &UModsManager::execGetInstance },
			{ "GetLoadModsSetting", &UModsManager::execGetLoadModsSetting },
			{ "GetModData", &UModsManager::execGetModData },
			{ "GetModObjData", &UModsManager::execGetModObjData },
			{ "GetObjectGuidCacheData", &UModsManager::execGetObjectGuidCacheData },
			{ "GetReplicateObj", &UModsManager::execGetReplicateObj },
			{ "IsModsLoaded", &UModsManager::execIsModsLoaded },
			{ "OpenModLevel", &UModsManager::execOpenModLevel },
			{ "ReadModFileJson", &UModsManager::execReadModFileJson },
			{ "RegistActorGuidCacheForClient", &UModsManager::execRegistActorGuidCacheForClient },
			{ "RegistModDownloadCallBack", &UModsManager::execRegistModDownloadCallBack },
			{ "RegistModDownloadProgressCallBack", &UModsManager::execRegistModDownloadProgressCallBack },
			{ "RequestLoadResouceFormMod", &UModsManager::execRequestLoadResouceFormMod },
			{ "SplicingModActorPath", &UModsManager::execSplicingModActorPath },
			{ "UpdateDownloadingMods", &UModsManager::execUpdateDownloadingMods },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics
	{
		struct ModsManager_eventBegingDownloadMod_Parms
		{
			UModsDownloader* _modDownloader;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__modDownloader;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp__modDownloader = { "_modDownloader", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBegingDownloadMod_Parms, _modDownloader), Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModsManager_eventBegingDownloadMod_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModsManager_eventBegingDownloadMod_Parms), &Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp__modDownloader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\xae\xb0\xe5\xbd\x95\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84Mod\n/// </summary>\n/// <param name=\"_modDownloader\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe8\xae\xb0\xe5\xbd\x95\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84Mod\n</summary>\n<param name=\"_modDownloader\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BegingDownloadMod", nullptr, nullptr, sizeof(ModsManager_eventBegingDownloadMod_Parms), Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_BegingDownloadMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics
	{
		struct ModsManager_eventBpLoadModResouce_Parms
		{
			FString ModObjId;
			FString ModID;
			AActor* Instigator;
			UObject* Outer;
			FString Name;
			FString Filename;
			int32 LoadFlags;
			UPackageMap* Sandbox;
			UClass* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModObjId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModObjId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadFlags;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sandbox;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId = { "ModObjId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ModObjId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID = { "ModID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ModID), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_LoadFlags = { "LoadFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, LoadFlags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Sandbox), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_LoadFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Sandbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Filename", "" },
		{ "CPP_Default_LoadFlags", "0" },
		{ "CPP_Default_Sandbox", "None" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BpLoadModResouce", nullptr, nullptr, sizeof(ModsManager_eventBpLoadModResouce_Parms), Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_BpLoadModResouce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics
	{
		struct ModsManager_eventBpSpawnModActor_Parms
		{
			FString ModActorId;
			FString ModId;
			AActor* Instigator;
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FTransform SpawnTransform;
			ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
			AActor* Owner;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModActorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModActorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingOverride_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId = { "ModActorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ModActorId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ModId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride = { "CollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, CollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BpSpawnModActor", nullptr, nullptr, sizeof(ModsManager_eventBpSpawnModActor_Parms), Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_BpSpawnModActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics
	{
		struct ModsManager_eventCloseActorChannel_Parms
		{
			int64 _objectid;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectid_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__objectid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid = { "_objectid", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventCloseActorChannel_Parms, _objectid), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xae\xb5\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe5\x85\xb3\xe9\x97\xad\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84""ActorChannel \xe4\xbd\xbf\xe5\xbe\x97""actorchannel\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba\n/// </summary>\n/// <param name=\"_objectid\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xae\xb5\xe8\xbf\x90\xe8\xa1\x8c\n\xe5\x85\xb3\xe9\x97\xad\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84""ActorChannel \xe4\xbd\xbf\xe5\xbe\x97""actorchannel\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba\n</summary>\n<param name=\"_objectid\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "CloseActorChannel", nullptr, nullptr, sizeof(ModsManager_eventCloseActorChannel_Parms), Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_CloseActorChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_CreateDownloader_Statics
	{
		struct ModsManager_eventCreateDownloader_Parms
		{
			FModDownloadData _modsDownloadData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modsDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modsDownloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData = { "_modsDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventCreateDownloader_Parms, _modsDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "CreateDownloader", nullptr, nullptr, sizeof(ModsManager_eventCreateDownloader_Parms), Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_CreateDownloader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics
	{
		struct ModsManager_eventDownloadModFailed_Parms
		{
			FModDownloadData _modDownloadData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventDownloadModFailed_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5\n/// </summary>\n/// <param name=\"_modFileName\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\nMod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5\n</summary>\n<param name=\"_modFileName\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "DownloadModFailed", nullptr, nullptr, sizeof(ModsManager_eventDownloadModFailed_Parms), Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_DownloadModFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics
	{
		struct ModsManager_eventDownloadModSuccess_Parms
		{
			FModDownloadData _modDownloadData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventDownloadModSuccess_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n/// </summary>\n/// <param name=\"_modName\"></param>\n/// <param name=\"_modFileName\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\nMod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n</summary>\n<param name=\"_modName\"></param>\n<param name=\"_modFileName\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "DownloadModSuccess", nullptr, nullptr, sizeof(ModsManager_eventDownloadModSuccess_Parms), Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_DownloadModSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics
	{
		struct ModsManager_eventGetDependenciesAassetById_Parms
		{
			FString _modId;
			FString _assetId;
			TArray<FModDependenciesObjData> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__assetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId = { "_assetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, _assetId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModDependenciesObjData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7id\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7id\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetDependenciesAassetById", nullptr, nullptr, sizeof(ModsManager_eventGetDependenciesAassetById_Parms), Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetDependenciesAassetById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics
	{
		struct ModsManager_eventGetDependenciesAassetByName_Parms
		{
			FString _modId;
			FString _assetName;
			TArray<FModDependenciesObjData> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__assetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__assetName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName = { "_assetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, _assetName), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModDependenciesObjData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetDependenciesAassetByName", nullptr, nullptr, sizeof(ModsManager_eventGetDependenciesAassetByName_Parms), Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetInstance_Statics
	{
		struct ModsManager_eventGetInstance_Parms
		{
			UModsManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UModsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96modsManager\xe5\xae\x9e\xe4\xbe\x8b\n/// </summary>\n/// <returns></returns>\n" },
		{ "DisplayName", "GetModsManagerInstance" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96modsManager\xe5\xae\x9e\xe4\xbe\x8b\n</summary>\n<returns></returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetInstance", nullptr, nullptr, sizeof(ModsManager_eventGetInstance_Parms), Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics
	{
		struct ModsManager_eventGetLoadModsSetting_Parms
		{
			FLodModsStruct ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetLoadModsSetting_Parms, ReturnValue), Z_Construct_UScriptStruct_FLodModsStruct, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96ModSetting\n/// </summary>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96ModSetting\n</summary>\n<returns></returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetLoadModsSetting", nullptr, nullptr, sizeof(ModsManager_eventGetLoadModsSetting_Parms), Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetLoadModsSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetModData_Statics
	{
		struct ModsManager_eventGetModData_Parms
		{
			FString _modId;
			FModData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetModData_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetModData_Parms, ReturnValue), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetModData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetModData", nullptr, nullptr, sizeof(ModsManager_eventGetModData_Parms), Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetModData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetModData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetModObjData_Statics
	{
		struct ModsManager_eventGetModObjData_Parms
		{
			FString _modId;
			FString _modAssetId;
			FModObjData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modAssetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modAssetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId = { "_modAssetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, _modAssetId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, ReturnValue), Z_Construct_UScriptStruct_FModObjData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetModObjData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetModObjData", nullptr, nullptr, sizeof(ModsManager_eventGetModObjData_Parms), Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetModObjData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetModObjData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics
	{
		struct ModsManager_eventGetObjectGuidCacheData_Parms
		{
			UObject* _actor;
			FReconnectStruct _value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__actor = { "_actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetObjectGuidCacheData_Parms, _actor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetObjectGuidCacheData_Parms, _value), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n///\x09\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe8\x8e\xb7\xe5\x8f\x96""actor\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xac""actor CDO\xe5\x92\x8c""class \n/// </summary>\n/// <param name=\"_actor\"></param>\n/// <param name=\"_value\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n      \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n\xe8\x8e\xb7\xe5\x8f\x96""actor\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xac""actor CDO\xe5\x92\x8c""class\n</summary>\n<param name=\"_actor\"></param>\n<param name=\"_value\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetObjectGuidCacheData", nullptr, nullptr, sizeof(ModsManager_eventGetObjectGuidCacheData_Parms), Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics
	{
		struct ModsManager_eventGetReplicateObj_Parms
		{
			FString _objectid;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__objectid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid = { "_objectid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetReplicateObj_Parms, _objectid), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventGetReplicateObj_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96\xe9\x9c\x80\xe8\xa6\x81\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84object \xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe5\xba\x94\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xbf\x90\xe8\xa1\x8c\n/// </summary>\n/// <param name=\"_objectid\"></param>\n/// <returns></returns>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96\xe9\x9c\x80\xe8\xa6\x81\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84object \xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe5\xba\x94\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xbf\x90\xe8\xa1\x8c\n</summary>\n<param name=\"_objectid\"></param>\n<returns></returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetReplicateObj", nullptr, nullptr, sizeof(ModsManager_eventGetReplicateObj_Parms), Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_GetReplicateObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics
	{
		struct ModsManager_eventIsModsLoaded_Parms
		{
			FString _modName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName = { "_modName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventIsModsLoaded_Parms, _modName), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName_MetaData)) };
	void Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModsManager_eventIsModsLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModsManager_eventIsModsLoaded_Parms), &Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "IsModsLoaded", nullptr, nullptr, sizeof(ModsManager_eventIsModsLoaded_Parms), Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_IsModsLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_OpenModLevel_Statics
	{
		struct ModsManager_eventOpenModLevel_Parms
		{
			FString _modId;
			FString _levelName;
			UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__levelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName = { "_levelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, _levelName), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2mod\xe4\xb8\xad\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n/// </summary>\n/// <param name=\"_modId\">mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80</param>\n/// <param name=\"_levelName\">\xe5\x85\xb3\xe5\x8d\xa1\xe5\x90\x8d</param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2mod\xe4\xb8\xad\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n</summary>\n<param name=\"_modId\">mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80</param>\n<param name=\"_levelName\">\xe5\x85\xb3\xe5\x8d\xa1\xe5\x90\x8d</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "OpenModLevel", nullptr, nullptr, sizeof(ModsManager_eventOpenModLevel_Parms), Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_OpenModLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics
	{
		struct ModsManager_eventReadModFileJson_Parms
		{
			FString _modName;
			FString _modSavePath;
			FModData _outModData;
			FString _modId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modSavePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outModData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName = { "_modName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modName), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath = { "_modSavePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modSavePath), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__outModData = { "_outModData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _outModData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__outModData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default__modId", "" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "ReadModFileJson", nullptr, nullptr, sizeof(ModsManager_eventReadModFileJson_Parms), Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_ReadModFileJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics
	{
		struct ModsManager_eventRegistActorGuidCacheForClient_Parms
		{
			FReconnectStruct _value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRegistActorGuidCacheForClient_Parms, _value), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\xb3\xa8\xe5\x86\x8cobject\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xacobject CDO\xe5\x92\x8c""class ,\xe8\xbf\x99\xe4\xba\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\x94\xa8\xe4\xba\x8e\xe9\x87\x8d\xe8\xbf\x9e\xe6\x97\xb6\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba""actor \xe4\xbb\xa5\xe8\xbe\xbe\xe5\x88\xb0\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe7\x9b\xae\xe7\x9a\x84\n/// </summary>\n/// <param name=\"_value\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n\xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\xb3\xa8\xe5\x86\x8cobject\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xacobject CDO\xe5\x92\x8c""class ,\xe8\xbf\x99\xe4\xba\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\x94\xa8\xe4\xba\x8e\xe9\x87\x8d\xe8\xbf\x9e\xe6\x97\xb6\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba""actor \xe4\xbb\xa5\xe8\xbe\xbe\xe5\x88\xb0\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe7\x9b\xae\xe7\x9a\x84\n</summary>\n<param name=\"_value\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistActorGuidCacheForClient", nullptr, nullptr, sizeof(ModsManager_eventRegistActorGuidCacheForClient_Parms), Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics
	{
		struct ModsManager_eventRegistModDownloadCallBack_Parms
		{
			FString _modId;
			FScriptDelegate _callBackFuc;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadCallBack_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadCallBack_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__callBackFuc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistModDownloadCallBack", nullptr, nullptr, sizeof(ModsManager_eventRegistModDownloadCallBack_Parms), Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics
	{
		struct ModsManager_eventRegistModDownloadProgressCallBack_Parms
		{
			FString _modId;
			FScriptDelegate _callBackFuc;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__modId;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadProgressCallBack_Parms, _modId), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadProgressCallBack_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__callBackFuc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistModDownloadProgressCallBack", nullptr, nullptr, sizeof(ModsManager_eventRegistModDownloadProgressCallBack_Parms), Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics
	{
		struct ModsManager_eventRequestLoadResouceFormMod_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventRequestLoadResouceFormMod_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__callBackFuc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe4\xb8\x80\xe4\xb8\xaamod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n/// </summary>\n/// <param name=\"_downloadData\"></param>\n/// <param name=\"_callBackFuc\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe4\xb8\x80\xe4\xb8\xaamod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n</summary>\n<param name=\"_downloadData\"></param>\n<param name=\"_callBackFuc\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RequestLoadResouceFormMod", nullptr, nullptr, sizeof(ModsManager_eventRequestLoadResouceFormMod_Parms), Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics
	{
		struct ModsManager_eventSplicingModActorPath_Parms
		{
			FString _mountPoint;
			FString _actorName;
			FString _relativePath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__mountPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__mountPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__actorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__relativePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__relativePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint = { "_mountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _mountPoint), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName = { "_actorName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _actorName), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath = { "_relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _relativePath), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "SplicingModActorPath", nullptr, nullptr, sizeof(ModsManager_eventSplicingModActorPath_Parms), Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_SplicingModActorPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics
	{
		struct ModsManager_eventUpdateDownloadingMods_Parms
		{
			FModDownloadData _modDownloadData;
			float _progress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventUpdateDownloadingMods_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsManager_eventUpdateDownloadingMods_Parms, _progress), METADATA_PARAMS(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe6\x9b\xb4\xe6\x96\xb0Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n/// </summary>\n/// <param name=\"_modFileName\"></param>\n/// <param name=\"_progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe6\x9b\xb4\xe6\x96\xb0Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n</summary>\n<param name=\"_modFileName\"></param>\n<param name=\"_progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "UpdateDownloadingMods", nullptr, nullptr, sizeof(ModsManager_eventUpdateDownloadingMods_Parms), Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsManager_UpdateDownloadingMods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModsManager_NoRegister()
	{
		return UModsManager::StaticClass();
	}
	struct Z_Construct_UClass_UModsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadingMods_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DownloadingMods_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadingMods_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DownloadingMods;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WaitToDownloadMods_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitToDownloadMods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaitToDownloadMods;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadModProgressDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadModProgressDelegate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstalledModsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstalledModsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstalledModsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstalledModsMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicateModObjectMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplicateModObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicateModObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReplicateModObjectMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingOutputPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CastingOutputPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsManager_BegingDownloadMod, "BegingDownloadMod" }, // 1944102894
		{ &Z_Construct_UFunction_UModsManager_BpLoadModResouce, "BpLoadModResouce" }, // 2105240215
		{ &Z_Construct_UFunction_UModsManager_BpSpawnModActor, "BpSpawnModActor" }, // 3357283011
		{ &Z_Construct_UFunction_UModsManager_CloseActorChannel, "CloseActorChannel" }, // 3694214519
		{ &Z_Construct_UFunction_UModsManager_CreateDownloader, "CreateDownloader" }, // 2652522157
		{ &Z_Construct_UFunction_UModsManager_DownloadModFailed, "DownloadModFailed" }, // 3178693591
		{ &Z_Construct_UFunction_UModsManager_DownloadModSuccess, "DownloadModSuccess" }, // 3049650553
		{ &Z_Construct_UFunction_UModsManager_GetDependenciesAassetById, "GetDependenciesAassetById" }, // 3249721993
		{ &Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName, "GetDependenciesAassetByName" }, // 1144624495
		{ &Z_Construct_UFunction_UModsManager_GetInstance, "GetInstance" }, // 416023324
		{ &Z_Construct_UFunction_UModsManager_GetLoadModsSetting, "GetLoadModsSetting" }, // 3298825997
		{ &Z_Construct_UFunction_UModsManager_GetModData, "GetModData" }, // 3584108980
		{ &Z_Construct_UFunction_UModsManager_GetModObjData, "GetModObjData" }, // 1389448259
		{ &Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData, "GetObjectGuidCacheData" }, // 1955220663
		{ &Z_Construct_UFunction_UModsManager_GetReplicateObj, "GetReplicateObj" }, // 1952049751
		{ &Z_Construct_UFunction_UModsManager_IsModsLoaded, "IsModsLoaded" }, // 1875632380
		{ &Z_Construct_UFunction_UModsManager_OpenModLevel, "OpenModLevel" }, // 2705474608
		{ &Z_Construct_UFunction_UModsManager_ReadModFileJson, "ReadModFileJson" }, // 1027254962
		{ &Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient, "RegistActorGuidCacheForClient" }, // 3420459151
		{ &Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack, "RegistModDownloadCallBack" }, // 2500368158
		{ &Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack, "RegistModDownloadProgressCallBack" }, // 891936065
		{ &Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod, "RequestLoadResouceFormMod" }, // 891345396
		{ &Z_Construct_UFunction_UModsManager_SplicingModActorPath, "SplicingModActorPath" }, // 4185887265
		{ &Z_Construct_UFunction_UModsManager_UpdateDownloadingMods, "UpdateDownloadingMods" }, // 810574360
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe7\xae\xa1\xe7\x90\x86Mods\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x92\x8c\xe5\x8a\xa0\xe8\xbd\xbd\n/// </summary>\n" },
		{ "IncludePath", "ModsManager.h" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
		{ "ToolTip", "<summary>\n\xe7\xae\xa1\xe7\x90\x86Mods\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x92\x8c\xe5\x8a\xa0\xe8\xbd\xbd\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_ValueProp = { "DownloadingMods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_Key_KeyProp = { "DownloadingMods_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods = { "DownloadingMods", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, DownloadingMods), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_Inner = { "WaitToDownloadMods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods = { "WaitToDownloadMods", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, WaitToDownloadMods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate = { "DownloadModProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, DownloadModProgressDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_ValueProp = { "InstalledModsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_Key_KeyProp = { "InstalledModsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_MetaData[] = {
		{ "Category", "ModsManager" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap = { "InstalledModsMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, InstalledModsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_ValueProp = { "ReplicateModObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_Key_KeyProp = { "ReplicateModObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_MetaData[] = {
		{ "Category", "ModsManager" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap = { "ReplicateModObjectMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, ReplicateModObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath = { "CastingOutputPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsManager, CastingOutputPath), METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModsManager_Statics::ClassParams = {
		&UModsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModsManager, 1750429135);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UModsManager>()
	{
		return UModsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModsManager(Z_Construct_UClass_UModsManager, &UModsManager::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UModsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
