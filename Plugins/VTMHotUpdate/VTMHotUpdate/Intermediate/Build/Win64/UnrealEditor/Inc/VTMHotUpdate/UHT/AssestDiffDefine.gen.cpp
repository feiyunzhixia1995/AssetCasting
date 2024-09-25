// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssestDiffDefine() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FAssestDiff();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetScanConfig();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceParam();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamDataResult();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonDataSingle();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff();
// End Cross Module References

// Begin Enum EPakConfigMod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPakConfigMod;
static UEnum* EPakConfigMod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPakConfigMod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPakConfigMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("EPakConfigMod"));
	}
	return Z_Registration_Info_UEnum_EPakConfigMod.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<EPakConfigMod>()
{
	return EPakConfigMod_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DebugGame.DisplayName", "DebugGame" },
		{ "DebugGame.Name", "DebugGame" },
		{ "Development.DisplayName", "Development" },
		{ "Development.Name", "Development" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "Shipping.DisplayName", "Shipping" },
		{ "Shipping.Name", "Shipping" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Development", (int64)Development },
		{ "DebugGame", (int64)DebugGame },
		{ "Shipping", (int64)Shipping },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"EPakConfigMod",
	"EPakConfigMod",
	Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod()
{
	if (!Z_Registration_Info_UEnum_EPakConfigMod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPakConfigMod.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPakConfigMod.InnerSingleton;
}
// End Enum EPakConfigMod

// Begin ScriptStruct FAssetScanConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetScanConfig;
class UScriptStruct* FAssetScanConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetScanConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetScanConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetScanConfig, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("AssetScanConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AssetScanConfig.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FAssetScanConfig>()
{
	return FAssetScanConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetScanConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutPutPath_MetaData[] = {
		{ "Category", "Asset Filters" },
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCastingMap_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x93\xb8\xe9\x80\xa0\xe7\x94\xa8\xe5\x85\xb3\xe5\x8d\xa1" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe5\xbf\x85\xe5\xa1\xab\xef\xbc\x81\xef\xbc\x81\xef\xbc\x81 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe5\x8d\x95\xe7\x8b\xac\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8d\xe8\xa6\x81\xe5\x8b\xbe\xe9\x80\x89\xef\xbc\x81\xef\xbc\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "pak\xe5\x8c\x85\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilesPath_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetIncludeFilters_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe5\xbf\x85\xe8\xa6\x81\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "RelativeToGameContentDir", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFilters_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\xe5\x90\x8d \xe4\xb8\x8d\xe5\x8a\xa0. ex:lua" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAsset_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsNeedAlpha_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x80\x8f\xe6\x98\x8e\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPutPath;
	static void NewProp_IsCastingMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCastingMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilesPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilesPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetIncludeFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetIncludeFilters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeFilters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAsset;
	static void NewProp_bIsNeedAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNeedAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetScanConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath = { "OutPutPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, OutPutPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutPutPath_MetaData), NewProp_OutPutPath_MetaData) };
void Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_SetBit(void* Obj)
{
	((FAssetScanConfig*)Obj)->IsCastingMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap = { "IsCastingMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetScanConfig), &Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCastingMap_MetaData), NewProp_IsCastingMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, ModName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModName_MetaData), NewProp_ModName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_Inner = { "FilesPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath = { "FilesPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, FilesPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilesPath_MetaData), NewProp_FilesPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_Inner = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, AssetIncludeFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetIncludeFilters_MetaData), NewProp_AssetIncludeFilters_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_Inner = { "ExcludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters = { "ExcludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, ExcludeFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeFilters_MetaData), NewProp_ExcludeFilters_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_Inner = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetScanConfig, PrimaryAsset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAsset_MetaData), NewProp_PrimaryAsset_MetaData) };
void Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_SetBit(void* Obj)
{
	((FAssetScanConfig*)Obj)->bIsNeedAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha = { "bIsNeedAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetScanConfig), &Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsNeedAlpha_MetaData), NewProp_bIsNeedAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"AssetScanConfig",
	Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers),
	sizeof(FAssetScanConfig),
	alignof(FAssetScanConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetScanConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetScanConfig()
{
	if (!Z_Registration_Info_UScriptStruct_AssetScanConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetScanConfig.InnerSingleton, Z_Construct_UScriptStruct_FAssetScanConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetScanConfig.InnerSingleton;
}
// End ScriptStruct FAssetScanConfig

// Begin ScriptStruct FRuntimePakSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimePakSettings;
class UScriptStruct* FRuntimePakSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePakSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimePakSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePakSettings, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("RuntimePakSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimePakSettings.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FRuntimePakSettings>()
{
	return FRuntimePakSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimePakSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelfPorject_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\xac\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x89\x93\xe5\x8c\x85\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\xac\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x89\x93\xe5\x8c\x85\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilesArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetProjectPath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetProjectName_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe5\x90\x8d\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe5\x90\x8d\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEnginePath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xbc\x95\xe6\x93\x8e\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xbc\x95\xe6\x93\x8e\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPakName_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87pak\xe5\x8c\x85\xe5\x90\x8d\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87pak\xe5\x8c\x85\xe5\x90\x8d\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPaltform_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xb9\xb3\xe5\x8f\xb0\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xb9\xb3\xe5\x8f\xb0\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsSelfPorject_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelfPorject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DirectoryArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoryArr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilesArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilesArr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrimaryAssetArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetArr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludeArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeArr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProjectPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetProjectName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetEnginePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPakName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetPaltform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePakSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_SetBit(void* Obj)
{
	((FRuntimePakSettings*)Obj)->bIsSelfPorject = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject = { "bIsSelfPorject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRuntimePakSettings), &Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSelfPorject_MetaData), NewProp_bIsSelfPorject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_Inner = { "DirectoryArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr = { "DirectoryArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, DirectoryArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectoryArr_MetaData), NewProp_DirectoryArr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_Inner = { "FilesArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr = { "FilesArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, FilesArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilesArr_MetaData), NewProp_FilesArr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_Inner = { "PrimaryAssetArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr = { "PrimaryAssetArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, PrimaryAssetArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryAssetArr_MetaData), NewProp_PrimaryAssetArr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_Inner = { "ExcludeArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr = { "ExcludeArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, ExcludeArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeArr_MetaData), NewProp_ExcludeArr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath = { "TargetProjectPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetProjectPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetProjectPath_MetaData), NewProp_TargetProjectPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName = { "TargetProjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetProjectName_MetaData), NewProp_TargetProjectName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath = { "TargetEnginePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetEnginePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEnginePath_MetaData), NewProp_TargetEnginePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName = { "TargetPakName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetPakName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPakName_MetaData), NewProp_TargetPakName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, DownloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadUrl_MetaData), NewProp_DownloadUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform = { "TargetPaltform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetPaltform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPaltform_MetaData), NewProp_TargetPaltform_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimePakSettings, OutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPath_MetaData), NewProp_OutputPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"RuntimePakSettings",
	Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers),
	sizeof(FRuntimePakSettings),
	alignof(FRuntimePakSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimePakSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimePakSettings.InnerSingleton, Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimePakSettings.InnerSingleton;
}
// End ScriptStruct FRuntimePakSettings

// Begin ScriptStruct FMaterialParamDataResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParamDataResult;
class UScriptStruct* FMaterialParamDataResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParamDataResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParamDataResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParamDataResult, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialParamDataResult"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParamDataResult.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialParamDataResult>()
{
	return FMaterialParamDataResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8e\x92\xe5\x88\x97\xe7\xbb\x84\xe5\x90\x88\xe7\xbb\x93\xe6\x9e\x9c\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8e\x92\xe5\x88\x97\xe7\xbb\x84\xe5\x90\x88\xe7\xbb\x93\xe6\x9e\x9c\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonSlotIndex_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe7\xb4\xa2\xe5\xbc\x95\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe7\xb4\xa2\xe5\xbc\x95" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamDatas_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtionSettings_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletonSlotIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamDatas;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AddtionSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddtionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParamDataResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex = { "SkeletonSlotIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamDataResult, SkeletonSlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonSlotIndex_MetaData), NewProp_SkeletonSlotIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamDataResult, MaterialPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPath_MetaData), NewProp_MaterialPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_Inner = { "ParamDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas = { "ParamDatas", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamDataResult, ParamDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamDatas_MetaData), NewProp_ParamDatas_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_Inner = { "AddtionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings = { "AddtionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamDataResult, AddtionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtionSettings_MetaData), NewProp_AddtionSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"MaterialParamDataResult",
	Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers),
	sizeof(FMaterialParamDataResult),
	alignof(FMaterialParamDataResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamDataResult()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParamDataResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParamDataResult.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialParamDataResult.InnerSingleton;
}
// End ScriptStruct FMaterialParamDataResult

// Begin ScriptStruct FMaterialParamData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParamData;
class UScriptStruct* FMaterialParamData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParamData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParamData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParamData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialParamData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParamData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialParamData>()
{
	return FMaterialParamData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialParamData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamDatas_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe6\xa0\xbc\xe5\xbc\x8f: \xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d_\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b_\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyCount_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe5\x90\x8c\xe4\xb8\xad\xe6\x95\x88\xe6\x9e\x9c\xe9\x87\x8d\xe5\xa4\x8d\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddtionSettings_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamDatas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamDatas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CopyCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AddtionSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddtionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParamData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_Inner = { "ParamDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas = { "ParamDatas", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamData, ParamDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamDatas_MetaData), NewProp_ParamDatas_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount = { "CopyCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamData, CopyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyCount_MetaData), NewProp_CopyCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_Inner = { "AddtionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings = { "AddtionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParamData, AddtionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddtionSettings_MetaData), NewProp_AddtionSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"MaterialParamData",
	Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers),
	sizeof(FMaterialParamData),
	alignof(FMaterialParamData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialParamData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParamData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParamData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParamData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialParamData.InnerSingleton;
}
// End ScriptStruct FMaterialParamData

// Begin ScriptStruct FMaterialInstanceParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceParam;
class UScriptStruct* FMaterialInstanceParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceParam, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialInstanceParam"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceParam.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialInstanceParam>()
{
	return FMaterialInstanceParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\x8d\x95\xe4\xb8\x80\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\x8d\x95\xe4\xb8\x80\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamMap_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDescPath_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0""csv\xe6\x96\x87\xe4\xbb\xb6 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\x80\xbc\xe5\x88\x99\xe5\xbf\xbd\xe7\x95\xa5\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParamMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParamMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialDescPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceParam, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_Inner = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParamData, METADATA_PARAMS(0, nullptr) }; // 3840209657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceParam, MaterialParamMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamMap_MetaData), NewProp_MaterialParamMap_MetaData) }; // 3840209657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath = { "MaterialDescPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceParam, MaterialDescPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDescPath_MetaData), NewProp_MaterialDescPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"MaterialInstanceParam",
	Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers),
	sizeof(FMaterialInstanceParam),
	alignof(FMaterialInstanceParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceParam()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceParam.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceParam.InnerSingleton;
}
// End ScriptStruct FMaterialInstanceParam

// Begin ScriptStruct FAssestDiff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssestDiff;
class UScriptStruct* FAssestDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssestDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssestDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssestDiff, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("AssestDiff"));
	}
	return Z_Registration_Info_UScriptStruct_AssestDiff.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FAssestDiff>()
{
	return FAssestDiff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssestDiff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe5\xad\x97\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe5\xad\x97\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderSize_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe5\xb0\xba\xe5\xaf\xb8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderFormat_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceParamMap_MetaData[] = {
		{ "Category", "FAssestDiff" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialInstanceParamMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialInstanceParamMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialInstanceParamMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssestDiff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssestDiff, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssestDiff, AssetInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfo_MetaData), NewProp_AssetInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssestDiff, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderSize_MetaData), NewProp_RenderSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat = { "RenderFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssestDiff, RenderFormat), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderFormat_MetaData), NewProp_RenderFormat_MetaData) }; // 3760367723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_ValueProp = { "MaterialInstanceParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMaterialInstanceParam, METADATA_PARAMS(0, nullptr) }; // 3449607796
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_Key_KeyProp = { "MaterialInstanceParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap = { "MaterialInstanceParamMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssestDiff, MaterialInstanceParamMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstanceParamMap_MetaData), NewProp_MaterialInstanceParamMap_MetaData) }; // 3449607796
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssestDiff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"AssestDiff",
	Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers),
	sizeof(FAssestDiff),
	alignof(FAssestDiff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssestDiff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssestDiff()
{
	if (!Z_Registration_Info_UScriptStruct_AssestDiff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssestDiff.InnerSingleton, Z_Construct_UScriptStruct_FAssestDiff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssestDiff.InnerSingleton;
}
// End ScriptStruct FAssestDiff

// Begin ScriptStruct FSkeletalMeshAssestDiff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff;
class UScriptStruct* FSkeletalMeshAssestDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("SkeletalMeshAssestDiff"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FSkeletalMeshAssestDiff>()
{
	return FSkeletalMeshAssestDiff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssestDiff_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x8c\x87\xe5\xae\x9a\xe9\xaa\xa8\xe9\xaa\xbc" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssestType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssestDiff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshAssestDiff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, AssestType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssestType_MetaData), NewProp_AssestType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff = { "AssestDiff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, AssestDiff), Z_Construct_UScriptStruct_FAssestDiff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssestDiff_MetaData), NewProp_AssestDiff_MetaData) }; // 527380589
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"SkeletalMeshAssestDiff",
	Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers),
	sizeof(FSkeletalMeshAssestDiff),
	alignof(FSkeletalMeshAssestDiff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshAssestDiff

// Begin ScriptStruct FStaticMeshAssestDiff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff;
class UScriptStruct* FStaticMeshAssestDiff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshAssestDiff, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("StaticMeshAssestDiff"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FStaticMeshAssestDiff>()
{
	return FStaticMeshAssestDiff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssestDiff_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x8c\x87\xe5\xae\x9a\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssestType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssestDiff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshAssestDiff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, AssestType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssestType_MetaData), NewProp_AssestType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff = { "AssestDiff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, AssestDiff), Z_Construct_UScriptStruct_FAssestDiff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssestDiff_MetaData), NewProp_AssestDiff_MetaData) }; // 527380589
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, TargetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMesh_MetaData), NewProp_TargetMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"StaticMeshAssestDiff",
	Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers),
	sizeof(FStaticMeshAssestDiff),
	alignof(FStaticMeshAssestDiff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff.InnerSingleton;
}
// End ScriptStruct FStaticMeshAssestDiff

// Begin ScriptStruct FOutPutJsonDataSingle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle;
class UScriptStruct* FOutPutJsonDataSingle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutPutJsonDataSingle, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("OutPutJsonDataSingle"));
	}
	return Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FOutPutJsonDataSingle>()
{
	return FOutPutJsonDataSingle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae \xe5\x8d\x95\xe4\xb8\x80\xe7\xbb\x84\xe5\x90\x88\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae \xe5\x8d\x95\xe4\xb8\x80\xe7\xbb\x84\xe5\x90\x88\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialResult_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutPutJsonDataSingle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_Inner = { "MaterialResult", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParamDataResult, METADATA_PARAMS(0, nullptr) }; // 3068664395
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult = { "MaterialResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonDataSingle, MaterialResult), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialResult_MetaData), NewProp_MaterialResult_MetaData) }; // 3068664395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"OutPutJsonDataSingle",
	Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers),
	sizeof(FOutPutJsonDataSingle),
	alignof(FOutPutJsonDataSingle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonDataSingle()
{
	if (!Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.InnerSingleton, Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle.InnerSingleton;
}
// End ScriptStruct FOutPutJsonDataSingle

// Begin ScriptStruct FOutPutJsonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OutPutJsonData;
class UScriptStruct* FOutPutJsonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OutPutJsonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OutPutJsonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutPutJsonData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("OutPutJsonData"));
	}
	return Z_Registration_Info_UScriptStruct_OutPutJsonData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FOutPutJsonData>()
{
	return FOutPutJsonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOutPutJsonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAssestPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineInfo_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe6\x93\x8e\xe7\x89\x88\xe6\x9c\xac\xe6\x8f\x8f\xe8\xbf\xb0.\n" },
#endif
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe6\x93\x8e\xe7\x89\x88\xe6\x9c\xac\xe6\x8f\x8f\xe8\xbf\xb0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderSize_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe5\xb0\xba\xe5\xaf\xb8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderFormat_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamDataResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetAssestPath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssestType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EngineInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderFormat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParamDataResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParamDataResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutPutJsonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath = { "TargetAssestPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, TargetAssestPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAssestPath_MetaData), NewProp_TargetAssestPath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, AssestType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssestType_MetaData), NewProp_AssestType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, AssetInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfo_MetaData), NewProp_AssetInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo = { "EngineInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, EngineInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineInfo_MetaData), NewProp_EngineInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderSize_MetaData), NewProp_RenderSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat = { "RenderFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, RenderFormat), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderFormat_MetaData), NewProp_RenderFormat_MetaData) }; // 3760367723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_Inner = { "MaterialParamDataResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOutPutJsonDataSingle, METADATA_PARAMS(0, nullptr) }; // 854628346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults = { "MaterialParamDataResults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOutPutJsonData, MaterialParamDataResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamDataResults_MetaData), NewProp_MaterialParamDataResults_MetaData) }; // 854628346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"OutPutJsonData",
	Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers),
	sizeof(FOutPutJsonData),
	alignof(FOutPutJsonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOutPutJsonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonData()
{
	if (!Z_Registration_Info_UScriptStruct_OutPutJsonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OutPutJsonData.InnerSingleton, Z_Construct_UScriptStruct_FOutPutJsonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OutPutJsonData.InnerSingleton;
}
// End ScriptStruct FOutPutJsonData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPakConfigMod_StaticEnum, TEXT("EPakConfigMod"), &Z_Registration_Info_UEnum_EPakConfigMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3484582237U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetScanConfig::StaticStruct, Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewStructOps, TEXT("AssetScanConfig"), &Z_Registration_Info_UScriptStruct_AssetScanConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetScanConfig), 3132876875U) },
		{ FRuntimePakSettings::StaticStruct, Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewStructOps, TEXT("RuntimePakSettings"), &Z_Registration_Info_UScriptStruct_RuntimePakSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimePakSettings), 2177196352U) },
		{ FMaterialParamDataResult::StaticStruct, Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewStructOps, TEXT("MaterialParamDataResult"), &Z_Registration_Info_UScriptStruct_MaterialParamDataResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParamDataResult), 3068664395U) },
		{ FMaterialParamData::StaticStruct, Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewStructOps, TEXT("MaterialParamData"), &Z_Registration_Info_UScriptStruct_MaterialParamData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParamData), 3840209657U) },
		{ FMaterialInstanceParam::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewStructOps, TEXT("MaterialInstanceParam"), &Z_Registration_Info_UScriptStruct_MaterialInstanceParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceParam), 3449607796U) },
		{ FAssestDiff::StaticStruct, Z_Construct_UScriptStruct_FAssestDiff_Statics::NewStructOps, TEXT("AssestDiff"), &Z_Registration_Info_UScriptStruct_AssestDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssestDiff), 527380589U) },
		{ FSkeletalMeshAssestDiff::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewStructOps, TEXT("SkeletalMeshAssestDiff"), &Z_Registration_Info_UScriptStruct_SkeletalMeshAssestDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshAssestDiff), 3759669386U) },
		{ FStaticMeshAssestDiff::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewStructOps, TEXT("StaticMeshAssestDiff"), &Z_Registration_Info_UScriptStruct_StaticMeshAssestDiff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshAssestDiff), 2512737699U) },
		{ FOutPutJsonDataSingle::StaticStruct, Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewStructOps, TEXT("OutPutJsonDataSingle"), &Z_Registration_Info_UScriptStruct_OutPutJsonDataSingle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutPutJsonDataSingle), 854628346U) },
		{ FOutPutJsonData::StaticStruct, Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewStructOps, TEXT("OutPutJsonData"), &Z_Registration_Info_UScriptStruct_OutPutJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOutPutJsonData), 1742367712U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_369778791(TEXT("/Script/VTMHotUpdate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AssestDiffDefine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
