// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/StaticMeshPakSettings.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshPakSettings() {}

// Begin Cross Module References
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FPakSettings();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshPakSettings();
// End Cross Module References

// Begin ScriptStruct FStaticMeshPakSettings
static_assert(std::is_polymorphic<FStaticMeshPakSettings>() == std::is_polymorphic<FPakSettings>(), "USTRUCT FStaticMeshPakSettings cannot be polymorphic unless super FPakSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshPakSettings;
class UScriptStruct* FStaticMeshPakSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshPakSettings, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("StaticMeshPakSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FStaticMeshPakSettings>()
{
	return FStaticMeshPakSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
#endif
		{ "ModuleRelativePath", "Public/StaticMeshPakSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffConfig_MetaData[] = {
		{ "Category", "Diff Config" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/StaticMeshPakSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiffConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshPakSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig = { "DiffConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticMeshPakSettings, DiffConfig), Z_Construct_UScriptStruct_FStaticMeshAssestDiff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffConfig_MetaData), NewProp_DiffConfig_MetaData) }; // 2512737699
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	Z_Construct_UScriptStruct_FPakSettings,
	&NewStructOps,
	"StaticMeshPakSettings",
	Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers),
	sizeof(FStaticMeshPakSettings),
	alignof(FStaticMeshPakSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshPakSettings()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshPakSettings.InnerSingleton;
}
// End ScriptStruct FStaticMeshPakSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_StaticMeshPakSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStaticMeshPakSettings::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewStructOps, TEXT("StaticMeshPakSettings"), &Z_Registration_Info_UScriptStruct_StaticMeshPakSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshPakSettings), 1970152318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_StaticMeshPakSettings_h_3303449395(TEXT("/Script/VTMHotUpdate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_StaticMeshPakSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_StaticMeshPakSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
