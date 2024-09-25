// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/HttpMgrSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpMgrSubsystem() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpManagerSetting_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpManagerSetting();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister();
// End Cross Module References
	void UHttpManagerSetting::StaticRegisterNativesUHttpManagerSetting()
	{
	}
	UClass* Z_Construct_UClass_UHttpManagerSetting_NoRegister()
	{
		return UHttpManagerSetting::StaticClass();
	}
	struct Z_Construct_UClass_UHttpManagerSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxParallel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxParallel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxTryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestKBSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestKBSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResponseTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpManagerSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "HttpMgrSetting" },
		{ "IncludePath", "HttpMgrSubsystem.h" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel = { "MaxParallel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpManagerSetting, MaxParallel), METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xb9\xb6\xe8\xa1\x8c\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xb9\xb6\xe8\xa1\x8c\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount = { "MaxTryCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpManagerSetting, MaxTryCount), METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x87\x8d\xe8\xbf\x9e\xe6\xac\xa1\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x87\x8d\xe8\xbf\x9e\xe6\xac\xa1\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize = { "RequestKBSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpManagerSetting, RequestKBSize), METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "Comment", "//\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f\n" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
		{ "ToolTip", "\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout = { "ResponseTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpManagerSetting, ResponseTimeout), METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "Comment", "//\xe8\xaf\xb7\xe6\xb1\x82\xe8\xb6\x85\xe6\x97\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
		{ "ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe8\xb6\x85\xe6\x97\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath = { "CurFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpManagerSetting, CurFilePath), METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpManagerSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpManagerSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpManagerSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHttpManagerSetting_Statics::ClassParams = {
		&UHttpManagerSetting::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHttpManagerSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpManagerSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpManagerSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHttpManagerSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHttpManagerSetting, 3261342261);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UHttpManagerSetting>()
	{
		return UHttpManagerSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpManagerSetting(Z_Construct_UClass_UHttpManagerSetting, &UHttpManagerSetting::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UHttpManagerSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpManagerSetting);
	void UHttpMgrSubsystem::StaticRegisterNativesUHttpMgrSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister()
	{
		return UHttpMgrSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHttpMgrSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadHttpFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadHttpFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DownloadHttpFiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpMgrSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpMgrSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HttpMgrSubsystem.h" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_Inner = { "DownloadHttpFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAsyncDownloadFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles = { "DownloadHttpFiles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHttpMgrSubsystem, DownloadHttpFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpMgrSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpMgrSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpMgrSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::ClassParams = {
		&UHttpMgrSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHttpMgrSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpMgrSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpMgrSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHttpMgrSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHttpMgrSubsystem, 3545461479);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UHttpMgrSubsystem>()
	{
		return UHttpMgrSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpMgrSubsystem(Z_Construct_UClass_UHttpMgrSubsystem, &UHttpMgrSubsystem::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UHttpMgrSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpMgrSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
