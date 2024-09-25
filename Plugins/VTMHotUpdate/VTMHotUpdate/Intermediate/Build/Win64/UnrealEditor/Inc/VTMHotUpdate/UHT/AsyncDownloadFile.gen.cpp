// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/AsyncDownloadFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncDownloadFile() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ETaskState();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature();
// End Cross Module References

// Begin Delegate FHttpDownloadDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms
	{
		FString DestPathOrMsg;
		float Progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms, DestPathOrMsg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestPathOrMsg_MetaData), NewProp_DestPathOrMsg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_Progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "HttpDownloadDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHttpDownloadDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpDownloadDelegate, const FString& DestPathOrMsg, float Progress)
{
	struct _Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms
	{
		FString DestPathOrMsg;
		float Progress;
	};
	_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms Parms;
	Parms.DestPathOrMsg=DestPathOrMsg;
	Parms.Progress=Progress;
	HttpDownloadDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHttpDownloadDelegate

// Begin Enum ETaskState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskState;
static UEnum* ETaskState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ETaskState, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ETaskState"));
	}
	return Z_Registration_Info_UEnum_ETaskState.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<ETaskState>()
{
	return ETaskState_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "_Downloading.Name", "ETaskState::_Downloading" },
		{ "_Failed.Name", "ETaskState::_Failed" },
		{ "_Ready.Name", "ETaskState::_Ready" },
		{ "_Retry.Name", "ETaskState::_Retry" },
		{ "_Succees.Name", "ETaskState::_Succees" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskState::_Ready", (int64)ETaskState::_Ready },
		{ "ETaskState::_Downloading", (int64)ETaskState::_Downloading },
		{ "ETaskState::_Succees", (int64)ETaskState::_Succees },
		{ "ETaskState::_Retry", (int64)ETaskState::_Retry },
		{ "ETaskState::_Failed", (int64)ETaskState::_Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"ETaskState",
	"ETaskState",
	Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_ETaskState()
{
	if (!Z_Registration_Info_UEnum_ETaskState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskState.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_ETaskState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskState.InnerSingleton;
}
// End Enum ETaskState

// Begin Class UAsyncDownloadFile Function DownLoadHttpFile
struct Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics
{
	struct AsyncDownloadFile_eventDownLoadHttpFile_Parms
	{
		UObject* WorldContextObject;
		FString InUrl;
		FString InFileName;
		FString InDirectory;
		bool bClearCache;
		UAsyncDownloadFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*@param InUrl;http file url\n\x09*@param InFileName: file name without path\n\x09*@param InDirectory: directory name\n\x09*@param bClearCache:whether to clean up cached files after file download is complete\n\x09*/" },
#endif
		{ "CPP_Default_bClearCache", "false" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param InUrl;http file url\n@param InFileName: file name without path\n@param InDirectory: directory name\n@param bClearCache:whether to clean up cached files after file download is complete" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InDirectory;
	static void NewProp_bClearCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl = { "InUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InUrl_MetaData), NewProp_InUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFileName_MetaData), NewProp_InFileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory = { "InDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirectory_MetaData), NewProp_InDirectory_MetaData) };
void Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache_SetBit(void* Obj)
{
	((AsyncDownloadFile_eventDownLoadHttpFile_Parms*)Obj)->bClearCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache = { "bClearCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncDownloadFile_eventDownLoadHttpFile_Parms), &Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, ReturnValue), Z_Construct_UClass_UAsyncDownloadFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncDownloadFile, nullptr, "DownLoadHttpFile", nullptr, nullptr, Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::AsyncDownloadFile_eventDownLoadHttpFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::AsyncDownloadFile_eventDownLoadHttpFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncDownloadFile::execDownLoadHttpFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_InUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_InFileName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InDirectory);
	P_GET_UBOOL(Z_Param_bClearCache);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncDownloadFile**)Z_Param__Result=UAsyncDownloadFile::DownLoadHttpFile(Z_Param_WorldContextObject,Z_Param_InUrl,Z_Param_InFileName,Z_Param_InDirectory,Z_Param_bClearCache);
	P_NATIVE_END;
}
// End Class UAsyncDownloadFile Function DownLoadHttpFile

// Begin Class UAsyncDownloadFile
void UAsyncDownloadFile::StaticRegisterNativesUAsyncDownloadFile()
{
	UClass* Class = UAsyncDownloadFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownLoadHttpFile", &UAsyncDownloadFile::execDownLoadHttpFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncDownloadFile);
UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister()
{
	return UAsyncDownloadFile::StaticClass();
}
struct Z_Construct_UClass_UAsyncDownloadFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncDownloadFile.h" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWait_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TryCount_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb0\x9d\xe8\xaf\x95\xe6\xac\xa1\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb0\x9d\xe8\xaf\x95\xe6\xac\xa1\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurFileSize_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFileSize_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xad\x97\xe8\x8a\x82\xe4\xba\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xad\x97\xe8\x8a\x82\xe4\xba\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTask_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//http\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x80\xbb\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "http\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x80\xbb\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MD5Str_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearCache_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MD5 \xe4\xb8\x8eURL\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MD5 \xe4\xb8\x8eURL\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitResponse_MetaData[] = {
		{ "Category", "HttpDownloader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mgr_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWait;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TryCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurFileSize;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_TotalFileSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MD5Str;
	static void NewProp_bClearCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WaitResponse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mgr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile, "DownLoadHttpFile" }, // 527436976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncDownloadFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnSuccess), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1749223177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait = { "OnWait", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnWait), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWait_MetaData), NewProp_OnWait_MetaData) }; // 1749223177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnFail), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 1749223177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnProgress), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // 1749223177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnCancel), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancel_MetaData), NewProp_OnCancel_MetaData) }; // 1749223177
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, State), Z_Construct_UEnum_VTMHotUpdate_ETaskState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 1967527900
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount = { "TryCount", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, TryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TryCount_MetaData), NewProp_TryCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Directory_MetaData), NewProp_Directory_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, Progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Progress_MetaData), NewProp_Progress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize = { "CurFileSize", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, CurFileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurFileSize_MetaData), NewProp_CurFileSize_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize = { "TotalFileSize", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, TotalFileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFileSize_MetaData), NewProp_TotalFileSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask = { "MaxTask", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, MaxTask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTask_MetaData), NewProp_MaxTask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str = { "MD5Str", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, MD5Str), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MD5Str_MetaData), NewProp_MD5Str_MetaData) };
void Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_SetBit(void* Obj)
{
	((UAsyncDownloadFile*)Obj)->bClearCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache = { "bClearCache", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAsyncDownloadFile), &Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearCache_MetaData), NewProp_bClearCache_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse = { "WaitResponse", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, WaitResponse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitResponse_MetaData), NewProp_WaitResponse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr = { "Mgr", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncDownloadFile, Mgr), Z_Construct_UClass_UHttpMgrSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mgr_MetaData), NewProp_Mgr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncDownloadFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncDownloadFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncDownloadFile_Statics::ClassParams = {
	&UAsyncDownloadFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncDownloadFile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncDownloadFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncDownloadFile()
{
	if (!Z_Registration_Info_UClass_UAsyncDownloadFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncDownloadFile.OuterSingleton, Z_Construct_UClass_UAsyncDownloadFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncDownloadFile.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UAsyncDownloadFile>()
{
	return UAsyncDownloadFile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncDownloadFile);
UAsyncDownloadFile::~UAsyncDownloadFile() {}
// End Class UAsyncDownloadFile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETaskState_StaticEnum, TEXT("ETaskState"), &Z_Registration_Info_UEnum_ETaskState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1967527900U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncDownloadFile, UAsyncDownloadFile::StaticClass, TEXT("UAsyncDownloadFile"), &Z_Registration_Info_UClass_UAsyncDownloadFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncDownloadFile), 390952678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_3570728530(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
