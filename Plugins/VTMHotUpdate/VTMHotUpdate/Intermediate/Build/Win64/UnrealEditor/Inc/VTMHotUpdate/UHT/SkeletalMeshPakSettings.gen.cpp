// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/SkeletalMeshPakSettings.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshPakSettings() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FPakSettings();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshPakSettings();
// End Cross Module References

// Begin ScriptStruct FSkeletalMeshPakSettings
static_assert(std::is_polymorphic<FSkeletalMeshPakSettings>() == std::is_polymorphic<FPakSettings>(), "USTRUCT FSkeletalMeshPakSettings cannot be polymorphic unless super FPakSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings;
class UScriptStruct* FSkeletalMeshPakSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshPakSettings, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("SkeletalMeshPakSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FSkeletalMeshPakSettings>()
{
	return FSkeletalMeshPakSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
#endif
		{ "ModuleRelativePath", "Public/SkeletalMeshPakSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffConfig_MetaData[] = {
		{ "Category", "Diff Config" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/SkeletalMeshPakSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiffConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshPakSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::NewProp_DiffConfig = { "DiffConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkeletalMeshPakSettings, DiffConfig), Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffConfig_MetaData), NewProp_DiffConfig_MetaData) }; // 3759669386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::NewProp_DiffConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	Z_Construct_UScriptStruct_FPakSettings,
	&NewStructOps,
	"SkeletalMeshPakSettings",
	Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::PropPointers),
	sizeof(FSkeletalMeshPakSettings),
	alignof(FSkeletalMeshPakSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshPakSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings.InnerSingleton;
}
// End ScriptStruct FSkeletalMeshPakSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_SkeletalMeshPakSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkeletalMeshPakSettings::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshPakSettings_Statics::NewStructOps, TEXT("SkeletalMeshPakSettings"), &Z_Registration_Info_UScriptStruct_SkeletalMeshPakSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshPakSettings), 2149939022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_SkeletalMeshPakSettings_h_3804492768(TEXT("/Script/VTMHotUpdate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_SkeletalMeshPakSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_SkeletalMeshPakSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
