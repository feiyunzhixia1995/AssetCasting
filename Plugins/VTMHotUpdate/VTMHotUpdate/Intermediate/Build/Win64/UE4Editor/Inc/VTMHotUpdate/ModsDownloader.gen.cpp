// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsDownloader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsDownloader() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
// End Cross Module References
	DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadCancel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHttpDownloadCancel_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHttpDownloadProgress_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadFail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHttpDownloadFail_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadWait)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHttpDownloadWait_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadSuccess)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHttpDownloadSuccess_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execRetryDownloadMod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RetryDownloadMod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execCancelDownloadMod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelDownloadMod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModsDownloader::execDownloadMod)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadMod(Z_Param_Out__modDownloadData);
		P_NATIVE_END;
	}
	static FName NAME_UModsDownloader_OnHttpDownloadCancel = FName(TEXT("OnHttpDownloadCancel"));
	void UModsDownloader::OnHttpDownloadCancel(const FString& DestPathOrMsg, float Progress)
	{
		ModsDownloader_eventOnHttpDownloadCancel_Parms Parms;
		Parms.DestPathOrMsg=DestPathOrMsg;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadCancel),&Parms);
	}
	static FName NAME_UModsDownloader_OnHttpDownloadFail = FName(TEXT("OnHttpDownloadFail"));
	void UModsDownloader::OnHttpDownloadFail(const FString& DestPathOrMsg, float Progress)
	{
		ModsDownloader_eventOnHttpDownloadFail_Parms Parms;
		Parms.DestPathOrMsg=DestPathOrMsg;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadFail),&Parms);
	}
	static FName NAME_UModsDownloader_OnHttpDownloadProgress = FName(TEXT("OnHttpDownloadProgress"));
	void UModsDownloader::OnHttpDownloadProgress(const FString& DestPathOrMsg, float Progress)
	{
		ModsDownloader_eventOnHttpDownloadProgress_Parms Parms;
		Parms.DestPathOrMsg=DestPathOrMsg;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadProgress),&Parms);
	}
	static FName NAME_UModsDownloader_OnHttpDownloadSuccess = FName(TEXT("OnHttpDownloadSuccess"));
	void UModsDownloader::OnHttpDownloadSuccess(const FString& DestPathOrMsg, float Progress)
	{
		ModsDownloader_eventOnHttpDownloadSuccess_Parms Parms;
		Parms.DestPathOrMsg=DestPathOrMsg;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadSuccess),&Parms);
	}
	static FName NAME_UModsDownloader_OnHttpDownloadWait = FName(TEXT("OnHttpDownloadWait"));
	void UModsDownloader::OnHttpDownloadWait(const FString& DestPathOrMsg, float Progress)
	{
		ModsDownloader_eventOnHttpDownloadWait_Parms Parms;
		Parms.DestPathOrMsg=DestPathOrMsg;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadWait),&Parms);
	}
	void UModsDownloader::StaticRegisterNativesUModsDownloader()
	{
		UClass* Class = UModsDownloader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelDownloadMod", &UModsDownloader::execCancelDownloadMod },
			{ "DownloadMod", &UModsDownloader::execDownloadMod },
			{ "OnHttpDownloadCancel", &UModsDownloader::execOnHttpDownloadCancel },
			{ "OnHttpDownloadFail", &UModsDownloader::execOnHttpDownloadFail },
			{ "OnHttpDownloadProgress", &UModsDownloader::execOnHttpDownloadProgress },
			{ "OnHttpDownloadSuccess", &UModsDownloader::execOnHttpDownloadSuccess },
			{ "OnHttpDownloadWait", &UModsDownloader::execOnHttpDownloadWait },
			{ "RetryDownloadMod", &UModsDownloader::execRetryDownloadMod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "CancelDownloadMod", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_CancelDownloadMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics
	{
		struct ModsDownloader_eventDownloadMod_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventDownloadMod_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbdmod\n/// </summary>\n/// <param name=\"_modName\"></param>\n/// <param name=\"_fileName\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbdmod\n</summary>\n<param name=\"_modName\"></param>\n<param name=\"_fileName\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "DownloadMod", nullptr, nullptr, sizeof(ModsDownloader_eventDownloadMod_Parms), Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_DownloadMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadCancel_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadCancel_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\x8f\x96\xe6\xb6\x88\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe5\x8f\x96\xe6\xb6\x88\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadCancel", nullptr, nullptr, sizeof(ModsDownloader_eventOnHttpDownloadCancel_Parms), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadFail_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadFail_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\xa4\xb1\xe8\xb4\xa5\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe5\xa4\xb1\xe8\xb4\xa5\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadFail", nullptr, nullptr, sizeof(ModsDownloader_eventOnHttpDownloadFail_Parms), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadProgress_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe6\x9b\xb4\xe6\x96\xb0\xe8\xbf\x9b\xe5\xba\xa6\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe6\x9b\xb4\xe6\x96\xb0\xe8\xbf\x9b\xe5\xba\xa6\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadProgress", nullptr, nullptr, sizeof(ModsDownloader_eventOnHttpDownloadProgress_Parms), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadSuccess_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadSuccess_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadSuccess", nullptr, nullptr, sizeof(ModsDownloader_eventOnHttpDownloadSuccess_Parms), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadWait_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadWait_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe7\xad\x89\xe5\xbe\x85\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "<summary>\n\xe7\xad\x89\xe5\xbe\x85\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadWait", nullptr, nullptr, sizeof(ModsDownloader_eventOnHttpDownloadWait_Parms), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "RetryDownloadMod", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModsDownloader_RetryDownloadMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UModsDownloader_NoRegister()
	{
		return UModsDownloader::StaticClass();
	}
	struct Z_Construct_UClass_UModsDownloader_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModsDownloader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModsDownloader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsDownloader_CancelDownloadMod, "CancelDownloadMod" }, // 4001049398
		{ &Z_Construct_UFunction_UModsDownloader_DownloadMod, "DownloadMod" }, // 1196126512
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel, "OnHttpDownloadCancel" }, // 504985406
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail, "OnHttpDownloadFail" }, // 3765499377
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress, "OnHttpDownloadProgress" }, // 1884198903
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess, "OnHttpDownloadSuccess" }, // 3818718987
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait, "OnHttpDownloadWait" }, // 1477830868
		{ &Z_Construct_UFunction_UModsDownloader_RetryDownloadMod, "RetryDownloadMod" }, // 3398638779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsDownloader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\xb1\xbb \xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x8d\x95\xe4\xb8\x80pak\xe6\x96\x87\xe4\xbb\xb6.\n */" },
		{ "IncludePath", "ModsDownloader.h" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
		{ "ToolTip", "Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\xb1\xbb \xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x8d\x95\xe4\xb8\x80pak\xe6\x96\x87\xe4\xbb\xb6." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData = { "ModDownloadData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModsDownloader, ModDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsDownloader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModsDownloader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsDownloader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UModsDownloader_Statics::ClassParams = {
		&UModsDownloader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModsDownloader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModsDownloader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModsDownloader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UModsDownloader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UModsDownloader, 2507093470);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UModsDownloader>()
	{
		return UModsDownloader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UModsDownloader(Z_Construct_UClass_UModsDownloader, &UModsDownloader::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UModsDownloader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModsDownloader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
