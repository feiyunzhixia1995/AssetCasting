// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsDownloader.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsDownloader() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader_NoRegister();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
// End Cross Module References

// Begin Class UModsDownloader Function CancelDownloadMod
struct Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "CancelDownloadMod", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModsDownloader_CancelDownloadMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_CancelDownloadMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsDownloader::execCancelDownloadMod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelDownloadMod();
	P_NATIVE_END;
}
// End Class UModsDownloader Function CancelDownloadMod

// Begin Class UModsDownloader Function DownloadMod
struct Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics
{
	struct ModsDownloader_eventDownloadMod_Parms
	{
		FModDownloadData _modDownloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbdmod\n/// </summary>\n/// <param name=\"_modName\"></param>\n/// <param name=\"_fileName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbdmod\n</summary>\n<param name=\"_modName\"></param>\n<param name=\"_fileName\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventDownloadMod_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::NewProp__modDownloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "DownloadMod", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::ModsDownloader_eventDownloadMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::ModsDownloader_eventDownloadMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_DownloadMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_DownloadMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsDownloader::execDownloadMod)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadMod(Z_Param_Out__modDownloadData);
	P_NATIVE_END;
}
// End Class UModsDownloader Function DownloadMod

// Begin Class UModsDownloader Function OnHttpDownloadCancel
struct ModsDownloader_eventOnHttpDownloadCancel_Parms
{
	FString DestPathOrMsg;
	float Progress;
};
static FName NAME_UModsDownloader_OnHttpDownloadCancel = FName(TEXT("OnHttpDownloadCancel"));
void UModsDownloader::OnHttpDownloadCancel(const FString& DestPathOrMsg, float Progress)
{
	ModsDownloader_eventOnHttpDownloadCancel_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadCancel),&Parms);
}
struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\x8f\x96\xe6\xb6\x88\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\x8f\x96\xe6\xb6\x88\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadCancel_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadCancel_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadCancel", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::PropPointers), sizeof(ModsDownloader_eventOnHttpDownloadCancel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsDownloader_eventOnHttpDownloadCancel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsDownloader::execOnHttpDownloadCancel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DestPathOrMsg);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHttpDownloadCancel_Implementation(Z_Param_DestPathOrMsg,Z_Param_Progress);
	P_NATIVE_END;
}
// End Class UModsDownloader Function OnHttpDownloadCancel

// Begin Class UModsDownloader Function OnHttpDownloadFail
struct ModsDownloader_eventOnHttpDownloadFail_Parms
{
	FString DestPathOrMsg;
	float Progress;
};
static FName NAME_UModsDownloader_OnHttpDownloadFail = FName(TEXT("OnHttpDownloadFail"));
void UModsDownloader::OnHttpDownloadFail(const FString& DestPathOrMsg, float Progress)
{
	ModsDownloader_eventOnHttpDownloadFail_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadFail),&Parms);
}
struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xa4\xb1\xe8\xb4\xa5\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xa4\xb1\xe8\xb4\xa5\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadFail_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadFail_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadFail", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::PropPointers), sizeof(ModsDownloader_eventOnHttpDownloadFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsDownloader_eventOnHttpDownloadFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UModsDownloader Function OnHttpDownloadFail

// Begin Class UModsDownloader Function OnHttpDownloadProgress
struct ModsDownloader_eventOnHttpDownloadProgress_Parms
{
	FString DestPathOrMsg;
	float Progress;
};
static FName NAME_UModsDownloader_OnHttpDownloadProgress = FName(TEXT("OnHttpDownloadProgress"));
void UModsDownloader::OnHttpDownloadProgress(const FString& DestPathOrMsg, float Progress)
{
	ModsDownloader_eventOnHttpDownloadProgress_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadProgress),&Parms);
}
struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9b\xb4\xe6\x96\xb0\xe8\xbf\x9b\xe5\xba\xa6\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9b\xb4\xe6\x96\xb0\xe8\xbf\x9b\xe5\xba\xa6\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadProgress_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadProgress", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::PropPointers), sizeof(ModsDownloader_eventOnHttpDownloadProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsDownloader_eventOnHttpDownloadProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UModsDownloader Function OnHttpDownloadProgress

// Begin Class UModsDownloader Function OnHttpDownloadSuccess
struct ModsDownloader_eventOnHttpDownloadSuccess_Parms
{
	FString DestPathOrMsg;
	float Progress;
};
static FName NAME_UModsDownloader_OnHttpDownloadSuccess = FName(TEXT("OnHttpDownloadSuccess"));
void UModsDownloader::OnHttpDownloadSuccess(const FString& DestPathOrMsg, float Progress)
{
	ModsDownloader_eventOnHttpDownloadSuccess_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadSuccess),&Parms);
}
struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadSuccess_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadSuccess_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadSuccess", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::PropPointers), sizeof(ModsDownloader_eventOnHttpDownloadSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsDownloader_eventOnHttpDownloadSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UModsDownloader Function OnHttpDownloadSuccess

// Begin Class UModsDownloader Function OnHttpDownloadWait
struct ModsDownloader_eventOnHttpDownloadWait_Parms
{
	FString DestPathOrMsg;
	float Progress;
};
static FName NAME_UModsDownloader_OnHttpDownloadWait = FName(TEXT("OnHttpDownloadWait"));
void UModsDownloader::OnHttpDownloadWait(const FString& DestPathOrMsg, float Progress)
{
	ModsDownloader_eventOnHttpDownloadWait_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	ProcessEvent(FindFunctionChecked(NAME_UModsDownloader_OnHttpDownloadWait),&Parms);
}
struct Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\xad\x89\xe5\xbe\x85\n/// </summary>\n/// <param name=\"DestPathOrMsg\"></param>\n/// <param name=\"Progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\xad\x89\xe5\xbe\x85\n</summary>\n<param name=\"DestPathOrMsg\"></param>\n<param name=\"Progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DestPathOrMsg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadWait_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsDownloader_eventOnHttpDownloadWait_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "OnHttpDownloadWait", nullptr, nullptr, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::PropPointers), sizeof(ModsDownloader_eventOnHttpDownloadWait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModsDownloader_eventOnHttpDownloadWait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait_Statics::FuncParams);
	}
	return ReturnFunction;
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
// End Class UModsDownloader Function OnHttpDownloadWait

// Begin Class UModsDownloader Function RetryDownloadMod
struct Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsDownloader, nullptr, "RetryDownloadMod", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModsDownloader_RetryDownloadMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsDownloader_RetryDownloadMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsDownloader::execRetryDownloadMod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RetryDownloadMod();
	P_NATIVE_END;
}
// End Class UModsDownloader Function RetryDownloadMod

// Begin Class UModsDownloader
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModsDownloader);
UClass* Z_Construct_UClass_UModsDownloader_NoRegister()
{
	return UModsDownloader::StaticClass();
}
struct Z_Construct_UClass_UModsDownloader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\xb1\xbb \xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x8d\x95\xe4\xb8\x80pak\xe6\x96\x87\xe4\xbb\xb6.\n */" },
#endif
		{ "IncludePath", "ModsDownloader.h" },
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe7\xb1\xbb \xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x8d\x95\xe4\xb8\x80pak\xe6\x96\x87\xe4\xbb\xb6." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModDownloadData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsDownloader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModDownloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsDownloader_CancelDownloadMod, "CancelDownloadMod" }, // 536109867
		{ &Z_Construct_UFunction_UModsDownloader_DownloadMod, "DownloadMod" }, // 3522760746
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadCancel, "OnHttpDownloadCancel" }, // 1397600089
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadFail, "OnHttpDownloadFail" }, // 776479184
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadProgress, "OnHttpDownloadProgress" }, // 1909434257
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadSuccess, "OnHttpDownloadSuccess" }, // 2698474074
		{ &Z_Construct_UFunction_UModsDownloader_OnHttpDownloadWait, "OnHttpDownloadWait" }, // 3143080092
		{ &Z_Construct_UFunction_UModsDownloader_RetryDownloadMod, "RetryDownloadMod" }, // 2679166045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsDownloader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData = { "ModDownloadData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsDownloader, ModDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModDownloadData_MetaData), NewProp_ModDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsDownloader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsDownloader_Statics::NewProp_ModDownloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModsDownloader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModsDownloader_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModsDownloader_Statics::Class_MetaDataParams), Z_Construct_UClass_UModsDownloader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModsDownloader()
{
	if (!Z_Registration_Info_UClass_UModsDownloader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModsDownloader.OuterSingleton, Z_Construct_UClass_UModsDownloader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModsDownloader.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UModsDownloader>()
{
	return UModsDownloader::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModsDownloader);
// End Class UModsDownloader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModsDownloader, UModsDownloader::StaticClass, TEXT("UModsDownloader"), &Z_Registration_Info_UClass_UModsDownloader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModsDownloader), 3451712966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_858605617(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
