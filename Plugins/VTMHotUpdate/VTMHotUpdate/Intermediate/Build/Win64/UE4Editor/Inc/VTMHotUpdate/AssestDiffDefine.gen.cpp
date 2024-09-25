// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssestDiffDefine() {}
// Cross Module References
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonDataSingle();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamDataResult();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FAssestDiff();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceParam();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetScanConfig();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
// End Cross Module References
	static UEnum* EPakConfigMod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("EPakConfigMod"));
		}
		return Singleton;
	}
	template<> VTMHOTUPDATE_API UEnum* StaticEnum<EPakConfigMod>()
	{
		return EPakConfigMod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPakConfigMod(EPakConfigMod_StaticEnum, TEXT("/Script/VTMHotUpdate"), TEXT("EPakConfigMod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Hash() { return 4274274098U; }
	UEnum* Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPakConfigMod"), 0, Get_Z_Construct_UEnum_VTMHotUpdate_EPakConfigMod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Development", (int64)Development },
				{ "DebugGame", (int64)DebugGame },
				{ "Shipping", (int64)Shipping },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DebugGame.DisplayName", "DebugGame" },
				{ "DebugGame.Name", "DebugGame" },
				{ "Development.DisplayName", "Development" },
				{ "Development.Name", "Development" },
				{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
				{ "Shipping.DisplayName", "Shipping" },
				{ "Shipping.Name", "Shipping" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
				nullptr,
				"EPakConfigMod",
				"EPakConfigMod",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOutPutJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutPutJsonData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("OutPutJsonData"), sizeof(FOutPutJsonData), Get_Z_Construct_UScriptStruct_FOutPutJsonData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FOutPutJsonData>()
{
	return FOutPutJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutPutJsonData(FOutPutJsonData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("OutPutJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonData()
	{
		UScriptStruct::DeferCppStructOps<FOutPutJsonData>(FName(TEXT("OutPutJsonData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonData;
	struct Z_Construct_UScriptStruct_FOutPutJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAssestPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetAssestPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderFormat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParamDataResults_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParamDataResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialParamDataResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutPutJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath_MetaData[] = {
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84.\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath = { "TargetAssestPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, TargetAssestPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, AssestType), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName_MetaData[] = {
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0.\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo_MetaData[] = {
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0.\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, AssetInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo_MetaData[] = {
		{ "Comment", "//\xe5\xbc\x95\xe6\x93\x8e\xe7\x89\x88\xe6\x9c\xac\xe6\x8f\x8f\xe8\xbf\xb0.\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe5\xbc\x95\xe6\x93\x8e\xe7\x89\x88\xe6\x9c\xac\xe6\x8f\x8f\xe8\xbf\xb0." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo = { "EngineInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, EngineInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe5\xb0\xba\xe5\xaf\xb8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat = { "RenderFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, RenderFormat), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_Inner = { "MaterialParamDataResults", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOutPutJsonDataSingle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults = { "MaterialParamDataResults", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonData, MaterialParamDataResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_TargetAssestPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_AssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_EngineInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_RenderFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonData_Statics::NewProp_MaterialParamDataResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutPutJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"OutPutJsonData",
		sizeof(FOutPutJsonData),
		alignof(FOutPutJsonData),
		Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutPutJsonData"), sizeof(FOutPutJsonData), Get_Z_Construct_UScriptStruct_FOutPutJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutPutJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonData_Hash() { return 1001020200U; }
class UScriptStruct* FOutPutJsonDataSingle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutPutJsonDataSingle, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("OutPutJsonDataSingle"), sizeof(FOutPutJsonDataSingle), Get_Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FOutPutJsonDataSingle>()
{
	return FOutPutJsonDataSingle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutPutJsonDataSingle(FOutPutJsonDataSingle::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("OutPutJsonDataSingle"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonDataSingle
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonDataSingle()
	{
		UScriptStruct::DeferCppStructOps<FOutPutJsonDataSingle>(FName(TEXT("OutPutJsonDataSingle")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFOutPutJsonDataSingle;
	struct Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialResult_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae \xe5\x8d\x95\xe4\xb8\x80\xe7\xbb\x84\xe5\x90\x88\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x84\xe5\x90\x88\xe8\xbe\x93\xe5\x87\xbajson\xe6\x95\xb0\xe6\x8d\xae \xe5\x8d\x95\xe4\xb8\x80\xe7\xbb\x84\xe5\x90\x88\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutPutJsonDataSingle>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_Inner = { "MaterialResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParamDataResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult = { "MaterialResult", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutPutJsonDataSingle, MaterialResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::NewProp_MaterialResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"OutPutJsonDataSingle",
		sizeof(FOutPutJsonDataSingle),
		alignof(FOutPutJsonDataSingle),
		Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutPutJsonDataSingle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutPutJsonDataSingle"), sizeof(FOutPutJsonDataSingle), Get_Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutPutJsonDataSingle_Hash() { return 1402777111U; }
class UScriptStruct* FStaticMeshAssestDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshAssestDiff, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("StaticMeshAssestDiff"), sizeof(FStaticMeshAssestDiff), Get_Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FStaticMeshAssestDiff>()
{
	return FStaticMeshAssestDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshAssestDiff(FStaticMeshAssestDiff::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("StaticMeshAssestDiff"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshAssestDiff
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshAssestDiff()
	{
		UScriptStruct::DeferCppStructOps<FStaticMeshAssestDiff>(FName(TEXT("StaticMeshAssestDiff")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFStaticMeshAssestDiff;
	struct Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssestDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssestDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshAssestDiff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, AssestType), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff = { "AssestDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, AssestDiff), Z_Construct_UScriptStruct_FAssestDiff, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x8c\x87\xe5\xae\x9a\xe9\x9d\x99\xe6\x80\x81\xe7\xbd\x91\xe6\xa0\xbc\xe4\xbd\x93" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshAssestDiff, TargetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_AssestDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::NewProp_TargetMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"StaticMeshAssestDiff",
		sizeof(FStaticMeshAssestDiff),
		alignof(FStaticMeshAssestDiff),
		Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshAssestDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshAssestDiff"), sizeof(FStaticMeshAssestDiff), Get_Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshAssestDiff_Hash() { return 973417818U; }
class UScriptStruct* FSkeletalMeshAssestDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("SkeletalMeshAssestDiff"), sizeof(FSkeletalMeshAssestDiff), Get_Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FSkeletalMeshAssestDiff>()
{
	return FSkeletalMeshAssestDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshAssestDiff(FSkeletalMeshAssestDiff::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("SkeletalMeshAssestDiff"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFSkeletalMeshAssestDiff
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFSkeletalMeshAssestDiff()
	{
		UScriptStruct::DeferCppStructOps<FSkeletalMeshAssestDiff>(FName(TEXT("SkeletalMeshAssestDiff")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFSkeletalMeshAssestDiff;
	struct Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AssestType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssestDiff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssestDiff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshAssestDiff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType = { "AssestType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, AssestType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe6\x8d\xae\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff = { "AssestDiff", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, AssestDiff), Z_Construct_UScriptStruct_FAssestDiff, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x8c\x87\xe5\xae\x9a\xe9\xaa\xa8\xe9\xaa\xbc" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshAssestDiff, TargetMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_AssestDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::NewProp_TargetMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"SkeletalMeshAssestDiff",
		sizeof(FSkeletalMeshAssestDiff),
		alignof(FSkeletalMeshAssestDiff),
		Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshAssestDiff"), sizeof(FSkeletalMeshAssestDiff), Get_Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshAssestDiff_Hash() { return 2475720956U; }
class UScriptStruct* FAssestDiff::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FAssestDiff_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssestDiff, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("AssestDiff"), sizeof(FAssestDiff), Get_Z_Construct_UScriptStruct_FAssestDiff_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FAssestDiff>()
{
	return FAssestDiff::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssestDiff(FAssestDiff::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("AssestDiff"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssestDiff
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssestDiff()
	{
		UScriptStruct::DeferCppStructOps<FAssestDiff>(FName(TEXT("AssestDiff")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssestDiff;
	struct Z_Construct_UScriptStruct_FAssestDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RenderFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RenderFormat;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialInstanceParamMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialInstanceParamMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialInstanceParamMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe5\x8f\x82\xe6\x95\xb0\xe7\xbb\x93\xe6\x9e\x84\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssestDiff_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssestDiff>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe5\xad\x97\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssestDiff, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x95\xb0\xe5\xad\x97\xe8\xb5\x84\xe4\xba\xa7\xe6\x8f\x8f\xe8\xbf\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssestDiff, AssetInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe5\xb0\xba\xe5\xaf\xb8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssestDiff, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe7\xbc\xa9\xe7\x95\xa5\xe5\x9b\xbe\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat = { "RenderFormat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssestDiff, RenderFormat), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_ValueProp = { "MaterialInstanceParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMaterialInstanceParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_Key_KeyProp = { "MaterialInstanceParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_MetaData[] = {
		{ "Category", "FAssestDiff" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\xbc\x82\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap = { "MaterialInstanceParamMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssestDiff, MaterialInstanceParamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_AssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_RenderFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssestDiff_Statics::NewProp_MaterialInstanceParamMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssestDiff_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"AssestDiff",
		sizeof(FAssestDiff),
		alignof(FAssestDiff),
		Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssestDiff_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssestDiff_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssestDiff()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssestDiff_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssestDiff"), sizeof(FAssestDiff), Get_Z_Construct_UScriptStruct_FAssestDiff_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssestDiff_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssestDiff_Hash() { return 757893419U; }
class UScriptStruct* FMaterialInstanceParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceParam, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialInstanceParam"), sizeof(FMaterialInstanceParam), Get_Z_Construct_UScriptStruct_FMaterialInstanceParam_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialInstanceParam>()
{
	return FMaterialInstanceParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialInstanceParam(FMaterialInstanceParam::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("MaterialInstanceParam"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialInstanceParam
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialInstanceParam()
	{
		UScriptStruct::DeferCppStructOps<FMaterialInstanceParam>(FName(TEXT("MaterialInstanceParam")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialInstanceParam;
	struct Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParamMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialParamMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDescPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialDescPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe5\x8d\x95\xe4\xb8\x80\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe5\x8d\x95\xe4\xb8\x80\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceParam, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_Inner = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParamData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceParam, MaterialParamMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath_MetaData[] = {
		{ "Category", "FMaterialInstanceParam" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0""csv\xe6\x96\x87\xe4\xbb\xb6 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\x80\xbc\xe5\x88\x99\xe5\xbf\xbd\xe7\x95\xa5\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\xe5\x90\x88" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath = { "MaterialDescPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceParam, MaterialDescPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialParamMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::NewProp_MaterialDescPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"MaterialInstanceParam",
		sizeof(FMaterialInstanceParam),
		alignof(FMaterialInstanceParam),
		Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialInstanceParam"), sizeof(FMaterialInstanceParam), Get_Z_Construct_UScriptStruct_FMaterialInstanceParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialInstanceParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialInstanceParam_Hash() { return 1181173889U; }
class UScriptStruct* FMaterialParamData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParamData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParamData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialParamData"), sizeof(FMaterialParamData), Get_Z_Construct_UScriptStruct_FMaterialParamData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialParamData>()
{
	return FMaterialParamData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParamData(FMaterialParamData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("MaterialParamData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamData()
	{
		UScriptStruct::DeferCppStructOps<FMaterialParamData>(FName(TEXT("MaterialParamData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamData;
	struct Z_Construct_UScriptStruct_FMaterialParamData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyCount;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddtionSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddtionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddtionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe6\x95\xb0\xe6\x8d\xae\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe6\x95\xb0\xe6\x8d\xae\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParamData>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_Inner = { "ParamDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "Tooltip", "\xe6\xa0\xbc\xe5\xbc\x8f: \xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d_\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b_\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas = { "ParamDatas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamData, ParamDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe5\x90\x8c\xe4\xb8\xad\xe6\x95\x88\xe6\x9e\x9c\xe9\x87\x8d\xe5\xa4\x8d\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount = { "CopyCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamData, CopyCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_Inner = { "AddtionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_MetaData[] = {
		{ "Category", "FMaterialParamData" },
		{ "DisplayName", "\xe9\xa2\x9d\xe5\xa4\x96\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings = { "AddtionSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamData, AddtionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_ParamDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_CopyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamData_Statics::NewProp_AddtionSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"MaterialParamData",
		sizeof(FMaterialParamData),
		alignof(FMaterialParamData),
		Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParamData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParamData"), sizeof(FMaterialParamData), Get_Z_Construct_UScriptStruct_FMaterialParamData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialParamData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParamData_Hash() { return 3558673891U; }
class UScriptStruct* FMaterialParamDataResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialParamDataResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParamDataResult, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("MaterialParamDataResult"), sizeof(FMaterialParamDataResult), Get_Z_Construct_UScriptStruct_FMaterialParamDataResult_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FMaterialParamDataResult>()
{
	return FMaterialParamDataResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialParamDataResult(FMaterialParamDataResult::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("MaterialParamDataResult"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamDataResult
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamDataResult()
	{
		UScriptStruct::DeferCppStructOps<FMaterialParamDataResult>(FName(TEXT("MaterialParamDataResult")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFMaterialParamDataResult;
	struct Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonSlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkeletonSlotIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParamDatas;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddtionSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddtionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddtionSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// <summary>\n/// \xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8e\x92\xe5\x88\x97\xe7\xbb\x84\xe5\x90\x88\xe7\xbb\x93\xe6\x9e\x9c\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8e\x92\xe5\x88\x97\xe7\xbb\x84\xe5\x90\x88\xe7\xbb\x93\xe6\x9e\x9c\n</summary>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParamDataResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "Comment", "//\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe7\xb4\xa2\xe5\xbc\x95\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8\xe6\x8f\x92\xe6\xa7\xbd\xe7\xb4\xa2\xe5\xbc\x95" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex = { "SkeletonSlotIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamDataResult, SkeletonSlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamDataResult, MaterialPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_Inner = { "ParamDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "Comment", "//\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "\xe6\x9d\x90\xe8\xb4\xa8\xe6\x95\x88\xe6\x9e\x9c\xe6\x8f\x8f\xe8\xbf\xb0" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas = { "ParamDatas", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamDataResult, ParamDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_Inner = { "AddtionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_MetaData[] = {
		{ "Category", "MaterialParamDataResult" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings = { "AddtionSettings", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParamDataResult, AddtionSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_SkeletonSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_MaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_ParamDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::NewProp_AddtionSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"MaterialParamDataResult",
		sizeof(FMaterialParamDataResult),
		alignof(FMaterialParamDataResult),
		Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamDataResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialParamDataResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialParamDataResult"), sizeof(FMaterialParamDataResult), Get_Z_Construct_UScriptStruct_FMaterialParamDataResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialParamDataResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialParamDataResult_Hash() { return 2891630869U; }
class UScriptStruct* FRuntimePakSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FRuntimePakSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimePakSettings, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("RuntimePakSettings"), sizeof(FRuntimePakSettings), Get_Z_Construct_UScriptStruct_FRuntimePakSettings_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FRuntimePakSettings>()
{
	return FRuntimePakSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimePakSettings(FRuntimePakSettings::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("RuntimePakSettings"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFRuntimePakSettings
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFRuntimePakSettings()
	{
		UScriptStruct::DeferCppStructOps<FRuntimePakSettings>(FName(TEXT("RuntimePakSettings")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFRuntimePakSettings;
	struct Z_Construct_UScriptStruct_FRuntimePakSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSelfPorject_MetaData[];
#endif
		static void NewProp_bIsSelfPorject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSelfPorject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DirectoryArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectoryArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirectoryArr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilesArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilesArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilesArr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrimaryAssetArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetArr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetProjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetProjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetProjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetProjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEnginePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetEnginePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPakName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPakName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DownloadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPaltform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetPaltform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimePakSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\xac\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x89\x93\xe5\x8c\x85\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe6\x98\xaf\xe5\x90\xa6\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\xac\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xbf\x9b\xe8\xa1\x8c\xe6\x89\x93\xe5\x8c\x85\n</summary>" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_SetBit(void* Obj)
	{
		((FRuntimePakSettings*)Obj)->bIsSelfPorject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject = { "bIsSelfPorject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimePakSettings), &Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_Inner = { "DirectoryArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr = { "DirectoryArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, DirectoryArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_Inner = { "FilesArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x89\x93\xe5\x8c\x85\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr = { "FilesArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, FilesArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_Inner = { "PrimaryAssetArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr = { "PrimaryAssetArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, PrimaryAssetArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_Inner = { "ExcludeArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr = { "ExcludeArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, ExcludeArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath = { "TargetProjectPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetProjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe5\x90\x8d\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xb7\xa5\xe7\xa8\x8b\xe5\x90\x8d\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName = { "TargetProjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87\xe5\xbc\x95\xe6\x93\x8e\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87\xe5\xbc\x95\xe6\x93\x8e\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath = { "TargetEnginePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetEnginePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe7\x9b\xae\xe6\xa0\x87pak\xe5\x8c\x85\xe5\x90\x8d\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe7\x9b\xae\xe6\xa0\x87pak\xe5\x8c\x85\xe5\x90\x8d\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName = { "TargetPakName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetPakName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl = { "DownloadUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, DownloadUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe5\xb9\xb3\xe5\x8f\xb0\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe5\xb9\xb3\xe5\x8f\xb0\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform = { "TargetPaltform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, TargetPaltform), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath_MetaData[] = {
		{ "Category", "RuntimePakSettings" },
		{ "Comment", "/// <summary>\n/// \xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "ToolTip", "<summary>\n\xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimePakSettings, OutputPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_bIsSelfPorject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DirectoryArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_FilesArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_PrimaryAssetArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_ExcludeArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetProjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetEnginePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPakName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_DownloadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_TargetPaltform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::NewProp_OutputPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"RuntimePakSettings",
		sizeof(FRuntimePakSettings),
		alignof(FRuntimePakSettings),
		Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimePakSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimePakSettings"), sizeof(FRuntimePakSettings), Get_Z_Construct_UScriptStruct_FRuntimePakSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimePakSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimePakSettings_Hash() { return 321491336U; }
class UScriptStruct* FAssetScanConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FAssetScanConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetScanConfig, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("AssetScanConfig"), sizeof(FAssetScanConfig), Get_Z_Construct_UScriptStruct_FAssetScanConfig_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FAssetScanConfig>()
{
	return FAssetScanConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetScanConfig(FAssetScanConfig::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("AssetScanConfig"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssetScanConfig
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssetScanConfig()
	{
		UScriptStruct::DeferCppStructOps<FAssetScanConfig>(FName(TEXT("AssetScanConfig")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFAssetScanConfig;
	struct Z_Construct_UScriptStruct_FAssetScanConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPutPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutPutPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCastingMap_MetaData[];
#endif
		static void NewProp_IsCastingMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCastingMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ModName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FilesPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilesPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FilesPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetIncludeFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetIncludeFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetIncludeFilters;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeFilters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryAsset_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrimaryAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsNeedAlpha_MetaData[];
#endif
		static void NewProp_bIsNeedAlpha_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsNeedAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetScanConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath_MetaData[] = {
		{ "Category", "Asset Filters" },
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath = { "OutPutPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, OutPutPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe9\x93\xb8\xe9\x80\xa0\xe7\x94\xa8\xe5\x85\xb3\xe5\x8d\xa1" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "Tooltip", "\xe5\xbf\x85\xe5\xa1\xab\xef\xbc\x81\xef\xbc\x81\xef\xbc\x81 \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xaf\xe5\x8d\x95\xe7\x8b\xac\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\x8d\xe8\xa6\x81\xe5\x8b\xbe\xe9\x80\x89\xef\xbc\x81\xef\xbc\x81" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_SetBit(void* Obj)
	{
		((FAssetScanConfig*)Obj)->IsCastingMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap = { "IsCastingMap", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetScanConfig), &Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "pak\xe5\x8c\x85\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName = { "ModName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, ModName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_Inner = { "FilesPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe5\x8c\x85\xe5\x90\xab\xe7\x9a\x84\xe6\x96\x87\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath = { "FilesPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, FilesPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_Inner = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe5\xbf\x85\xe8\xa6\x81\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90" },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters = { "AssetIncludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, AssetIncludeFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_Inner = { "ExcludeFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x8e\x92\xe9\x99\xa4\xe7\x9a\x84\xe5\x90\x8e\xe7\xbc\x80\xe5\x90\x8d \xe4\xb8\x8d\xe5\x8a\xa0. ex:lua" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters = { "ExcludeFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, ExcludeFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_Inner = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe4\xb8\xbb\xe8\xa6\x81\xe8\xb5\x84\xe4\xba\xa7\xe5\x88\x97\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset = { "PrimaryAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetScanConfig, PrimaryAsset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_MetaData[] = {
		{ "Category", "AssetScanConfig" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x80\x8f\xe6\x98\x8e\xe5\x9b\xbe" },
		{ "ModuleRelativePath", "Public/AssestDiffDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_SetBit(void* Obj)
	{
		((FAssetScanConfig*)Obj)->bIsNeedAlpha = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha = { "bIsNeedAlpha", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAssetScanConfig), &Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_OutPutPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_IsCastingMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ModName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_FilesPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_AssetIncludeFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_ExcludeFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_PrimaryAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetScanConfig_Statics::NewProp_bIsNeedAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetScanConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"AssetScanConfig",
		sizeof(FAssetScanConfig),
		alignof(FAssetScanConfig),
		Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetScanConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetScanConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetScanConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetScanConfig"), sizeof(FAssetScanConfig), Get_Z_Construct_UScriptStruct_FAssetScanConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetScanConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetScanConfig_Hash() { return 1676183268U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
