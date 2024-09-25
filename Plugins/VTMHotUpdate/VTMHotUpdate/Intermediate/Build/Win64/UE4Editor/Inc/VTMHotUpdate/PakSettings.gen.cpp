// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/PakSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePakSettings() {}
// Cross Module References
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FPakSettings();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetScanConfig();
// End Cross Module References
class UScriptStruct* FPakSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FPakSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPakSettings, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("PakSettings"), sizeof(FPakSettings), Get_Z_Construct_UScriptStruct_FPakSettings_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FPakSettings>()
{
	return FPakSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPakSettings(FPakSettings::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("PakSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFPakSettings
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFPakSettings()
	{
		UScriptStruct::DeferCppStructOps<FPakSettings>(FName(TEXT("PakSettings")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFPakSettings;
	struct Z_Construct_UScriptStruct_FPakSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetScanConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetScanConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
		{ "ModuleRelativePath", "Public/PakSettings.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPakSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPakSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPakSettings_Statics::NewProp_AssetScanConfig_MetaData[] = {
		{ "Category", "Asset Filters" },
		{ "DisplayName", "\xe6\x89\x93\xe5\x8c\x85\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/PakSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPakSettings_Statics::NewProp_AssetScanConfig = { "AssetScanConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPakSettings, AssetScanConfig), Z_Construct_UScriptStruct_FAssetScanConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FPakSettings_Statics::NewProp_AssetScanConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakSettings_Statics::NewProp_AssetScanConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPakSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPakSettings_Statics::NewProp_AssetScanConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPakSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"PakSettings",
		sizeof(FPakSettings),
		alignof(FPakSettings),
		Z_Construct_UScriptStruct_FPakSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPakSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPakSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPakSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPakSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PakSettings"), sizeof(FPakSettings), Get_Z_Construct_UScriptStruct_FPakSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPakSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPakSettings_Hash() { return 668247978U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
