// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/HttpMgrSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpMgrSubsystem() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UAsyncDownloadFile_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpManagerSetting();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpManagerSetting_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister();
// End Cross Module References

// Begin Class UHttpManagerSetting
void UHttpManagerSetting::StaticRegisterNativesUHttpManagerSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpManagerSetting);
UClass* Z_Construct_UClass_UHttpManagerSetting_NoRegister()
{
	return UHttpManagerSetting::StaticClass();
}
struct Z_Construct_UClass_UHttpManagerSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "HttpMgrSetting" },
		{ "IncludePath", "HttpMgrSubsystem.h" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParallel_MetaData[] = {
		{ "Category", "Config | HttpManager" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTryCount_MetaData[] = {
		{ "Category", "Config | HttpManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xb9\xb6\xe8\xa1\x8c\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xb9\xb6\xe8\xa1\x8c\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestKBSize_MetaData[] = {
		{ "Category", "Config | HttpManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x87\x8d\xe8\xbf\x9e\xe6\xac\xa1\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\x9a\x84\xe9\x87\x8d\xe8\xbf\x9e\xe6\xac\xa1\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseTimeout_MetaData[] = {
		{ "Category", "Config | HttpManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurFilePath_MetaData[] = {
		{ "Category", "Config | HttpManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xaf\xb7\xe6\xb1\x82\xe8\xb6\x85\xe6\x97\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xb7\xe6\xb1\x82\xe8\xb6\x85\xe6\x97\xb6\xe7\x9a\x84\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParallel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTryCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestKBSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResponseTimeout;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurFilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpManagerSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel = { "MaxParallel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpManagerSetting, MaxParallel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParallel_MetaData), NewProp_MaxParallel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount = { "MaxTryCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpManagerSetting, MaxTryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTryCount_MetaData), NewProp_MaxTryCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize = { "RequestKBSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpManagerSetting, RequestKBSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestKBSize_MetaData), NewProp_RequestKBSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout = { "ResponseTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpManagerSetting, ResponseTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseTimeout_MetaData), NewProp_ResponseTimeout_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath = { "CurFilePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpManagerSetting, CurFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurFilePath_MetaData), NewProp_CurFilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpManagerSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxParallel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_MaxTryCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_RequestKBSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_ResponseTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpManagerSetting_Statics::NewProp_CurFilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpManagerSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpManagerSetting_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpManagerSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpManagerSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpManagerSetting()
{
	if (!Z_Registration_Info_UClass_UHttpManagerSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpManagerSetting.OuterSingleton, Z_Construct_UClass_UHttpManagerSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpManagerSetting.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UHttpManagerSetting>()
{
	return UHttpManagerSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpManagerSetting);
UHttpManagerSetting::~UHttpManagerSetting() {}
// End Class UHttpManagerSetting

// Begin Class UHttpMgrSubsystem
void UHttpMgrSubsystem::StaticRegisterNativesUHttpMgrSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpMgrSubsystem);
UClass* Z_Construct_UClass_UHttpMgrSubsystem_NoRegister()
{
	return UHttpMgrSubsystem::StaticClass();
}
struct Z_Construct_UClass_UHttpMgrSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HttpMgrSubsystem.h" },
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadHttpFiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/HttpMgrSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownloadHttpFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DownloadHttpFiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpMgrSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_Inner = { "DownloadHttpFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAsyncDownloadFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles = { "DownloadHttpFiles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHttpMgrSubsystem, DownloadHttpFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadHttpFiles_MetaData), NewProp_DownloadHttpFiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpMgrSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpMgrSubsystem_Statics::NewProp_DownloadHttpFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHttpMgrSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpMgrSubsystem_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHttpMgrSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHttpMgrSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHttpMgrSubsystem()
{
	if (!Z_Registration_Info_UClass_UHttpMgrSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpMgrSubsystem.OuterSingleton, Z_Construct_UClass_UHttpMgrSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHttpMgrSubsystem.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UHttpMgrSubsystem>()
{
	return UHttpMgrSubsystem::StaticClass();
}
UHttpMgrSubsystem::UHttpMgrSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpMgrSubsystem);
UHttpMgrSubsystem::~UHttpMgrSubsystem() {}
// End Class UHttpMgrSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHttpManagerSetting, UHttpManagerSetting::StaticClass, TEXT("UHttpManagerSetting"), &Z_Registration_Info_UClass_UHttpManagerSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpManagerSetting), 807785341U) },
		{ Z_Construct_UClass_UHttpMgrSubsystem, UHttpMgrSubsystem::StaticClass, TEXT("UHttpMgrSubsystem"), &Z_Registration_Info_UClass_UHttpMgrSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpMgrSubsystem), 3099407129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_1314860641(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_HttpMgrSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
