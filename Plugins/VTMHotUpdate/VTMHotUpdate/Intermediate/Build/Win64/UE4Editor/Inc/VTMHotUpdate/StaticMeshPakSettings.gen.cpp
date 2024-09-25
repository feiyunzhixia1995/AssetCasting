// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/StaticMeshPakSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshPakSettings() {}
// Cross Module References
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshPakSettings();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FPakSettings();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff();
// End Cross Module References

static_assert(std::is_polymorphic<FStaticMeshPakSettings>() == std::is_polymorphic<FPakSettings>(), "USTRUCT FStaticMeshPakSettings cannot be polymorphic unless super FPakSettings is polymorphic");

class UScriptStruct* FStaticMeshPakSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshPakSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshPakSettings, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("StaticMeshPakSettings"), sizeof(FStaticMeshPakSettings), Get_Z_Construct_UScriptStruct_FStaticMeshPakSettings_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FStaticMeshPakSettings>()
{
	return FStaticMeshPakSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshPakSettings(FStaticMeshPakSettings::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("StaticMeshPakSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshPakSettings
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshPakSettings()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshPakSettings>(FName(TEXT("StaticMeshPakSettings")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshPakSettings;
	struct Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Singleton wrapper to allow for using the setting structure in SSettingsView */" },
		{ "ModuleRelativePath", "Public/StaticMeshPakSettings.h" },
		{ "ToolTip", "Singleton wrapper to allow for using the setting structure in SSettingsView" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshPakSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig_MetaData[] = {
		{ "Category", "Diff Config" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/StaticMeshPakSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig = { "DiffConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshPakSettings, DiffConfig), Z_Construct_UScriptStruct_FStaticMeshAssestDiff, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::NewProp_DiffConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		Z_Construct_UScriptStruct_FPakSettings,
		&NewStructOps,
		"StaticMeshPakSettings",
		sizeof(FStaticMeshPakSettings),
		alignof(FStaticMeshPakSettings),
		Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshPakSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshPakSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshPakSettings"), sizeof(FStaticMeshPakSettings), Get_Z_Construct_UScriptStruct_FStaticMeshPakSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshPakSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshPakSettings_Hash() { return 884520334U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
