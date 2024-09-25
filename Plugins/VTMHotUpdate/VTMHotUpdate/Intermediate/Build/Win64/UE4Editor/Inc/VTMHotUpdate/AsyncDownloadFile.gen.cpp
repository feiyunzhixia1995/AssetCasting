// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/AsyncDownloadFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncDownloadFile() {}
// Cross Module References
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ETaskState();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics
	{
		struct _Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms
		{
			FString DestPathOrMsg;
			float Progress;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg = { "DestPathOrMsg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms, DestPathOrMsg), METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_DestPathOrMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "HttpDownloadDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ETaskState, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ETaskState"));
		}
		return Singleton;
	}
	template<> VTMHOTUPDATE_API UEnum* StaticEnum<ETaskState>()
	{
		return ETaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskState(ETaskState_StaticEnum, TEXT("/Script/VTMHotUpdate"), TEXT("ETaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VTMHotUpdate_ETaskState_Hash() { return 402427800U; }
	UEnum* Z_Construct_UEnum_VTMHotUpdate_ETaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskState"), 0, Get_Z_Construct_UEnum_VTMHotUpdate_ETaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskState::_Ready", (int64)ETaskState::_Ready },
				{ "ETaskState::_Downloading", (int64)ETaskState::_Downloading },
				{ "ETaskState::_Succees", (int64)ETaskState::_Succees },
				{ "ETaskState::_Retry", (int64)ETaskState::_Retry },
				{ "ETaskState::_Failed", (int64)ETaskState::_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "_Downloading.Name", "ETaskState::_Downloading" },
				{ "_Failed.Name", "ETaskState::_Failed" },
				{ "_Ready.Name", "ETaskState::_Ready" },
				{ "_Retry.Name", "ETaskState::_Retry" },
				{ "_Succees.Name", "ETaskState::_Succees" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
				nullptr,
				"ETaskState",
				"ETaskState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
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
	void UAsyncDownloadFile::StaticRegisterNativesUAsyncDownloadFile()
	{
		UClass* Class = UAsyncDownloadFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownLoadHttpFile", &UAsyncDownloadFile::execDownLoadHttpFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InDirectory;
		static void NewProp_bClearCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl = { "InUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InUrl), METADATA_PARAMS(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName = { "InFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InFileName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory = { "InDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, InDirectory), METADATA_PARAMS(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory_MetaData)) };
	void Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache_SetBit(void* Obj)
	{
		((AsyncDownloadFile_eventDownLoadHttpFile_Parms*)Obj)->bClearCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache = { "bClearCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncDownloadFile_eventDownLoadHttpFile_Parms), &Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncDownloadFile_eventDownLoadHttpFile_Parms, ReturnValue), Z_Construct_UClass_UAsyncDownloadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_InDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_bClearCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "/**\n\x09*@param InUrl;http file url\n\x09*@param InFileName: file name without path\n\x09*@param InDirectory: directory name\n\x09*@param bClearCache:whether to clean up cached files after file download is complete\n\x09*/" },
		{ "CPP_Default_bClearCache", "false" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "@param InUrl;http file url\n@param InFileName: file name without path\n@param InDirectory: directory name\n@param bClearCache:whether to clean up cached files after file download is complete" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncDownloadFile, nullptr, "DownLoadHttpFile", nullptr, nullptr, sizeof(AsyncDownloadFile_eventDownLoadHttpFile_Parms), Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister()
	{
		return UAsyncDownloadFile::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncDownloadFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWait_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWait;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurFileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurFileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_TotalFileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MD5Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MD5Str;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearCache_MetaData[];
#endif
		static void NewProp_bClearCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WaitResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mgr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mgr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncDownloadFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncDownloadFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncDownloadFile_DownLoadHttpFile, "DownLoadHttpFile" }, // 3876372936
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncDownloadFile.h" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnSuccess), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait = { "OnWait", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnWait), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnFail), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnProgress), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, OnCancel), Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, State), Z_Construct_UEnum_VTMHotUpdate_ETaskState, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount = { "TryCount", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, TryCount), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb0\x9d\xe8\xaf\x95\xe6\xac\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe5\xb0\x9d\xe8\xaf\x95\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, Url), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, FileName), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, Directory), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe6\x96\x87\xe4\xbb\xb6\xe8\xb7\xaf\xe5\xbe\x84" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, Progress), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize = { "CurFileSize", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, CurFileSize), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xad\x97\xe8\x8a\x82\xe4\xba\x86\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xba\x86\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe5\xad\x97\xe8\x8a\x82\xe4\xba\x86" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize = { "TotalFileSize", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, TotalFileSize), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//http\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x80\xbb\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "http\xe6\x96\x87\xe4\xbb\xb6\xe7\x9a\x84\xe6\x80\xbb\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask = { "MaxTask", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, MaxTask), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str = { "MD5Str", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, MD5Str), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "// MD5 \xe4\xb8\x8eURL\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe7\xb3\xbb\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "MD5 \xe4\xb8\x8eURL\xe6\x98\xaf\xe5\xaf\xb9\xe5\xba\x94\xe5\x85\xb3\xe7\xb3\xbb" },
	};
#endif
	void Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_SetBit(void* Obj)
	{
		((UAsyncDownloadFile*)Obj)->bClearCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache = { "bClearCache", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAsyncDownloadFile), &Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse_MetaData[] = {
		{ "Category", "HttpDownloader" },
		{ "Comment", "//\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98\n" },
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
		{ "ToolTip", "\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe6\xb8\x85\xe7\x90\x86\xe7\xbc\x93\xe5\xad\x98" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse = { "WaitResponse", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, WaitResponse), METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncDownloadFile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr = { "Mgr", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncDownloadFile, Mgr), Z_Construct_UClass_UHttpMgrSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncDownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnWait,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_OnCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_CurFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_TotalFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MaxTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_MD5Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_bClearCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_WaitResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncDownloadFile_Statics::NewProp_Mgr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncDownloadFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncDownloadFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncDownloadFile_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UAsyncDownloadFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncDownloadFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncDownloadFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncDownloadFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncDownloadFile, 719638262);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UAsyncDownloadFile>()
	{
		return UAsyncDownloadFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncDownloadFile(Z_Construct_UClass_UAsyncDownloadFile, &UAsyncDownloadFile::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UAsyncDownloadFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncDownloadFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
