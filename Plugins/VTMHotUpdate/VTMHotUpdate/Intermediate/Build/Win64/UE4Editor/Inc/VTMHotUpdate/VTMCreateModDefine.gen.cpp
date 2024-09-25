// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/VTMCreateModDefine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMCreateModDefine() {}
// Cross Module References
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputSlotData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineJsonData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialParamData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPC();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References
	static UEnum* ECMMaterialParamType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ECMMaterialParamType"));
		}
		return Singleton;
	}
	template<> VTMHOTUPDATE_API UEnum* StaticEnum<ECMMaterialParamType>()
	{
		return ECMMaterialParamType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECMMaterialParamType(ECMMaterialParamType_StaticEnum, TEXT("/Script/VTMHotUpdate"), TEXT("ECMMaterialParamType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Hash() { return 2904530679U; }
	UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECMMaterialParamType"), 0, Get_Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Scalar", (int64)Scalar },
				{ "Vector", (int64)Vector },
				{ "Texture", (int64)Texture },
				{ "DoubleVector", (int64)DoubleVector },
				{ "Font", (int64)Font },
				{ "VirtualTexture", (int64)VirtualTexture },
				{ "SparseVolumeTexture", (int64)SparseVolumeTexture },
				{ "StaticSwitch", (int64)StaticSwitch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DoubleVector.DisplayName", "\xe9\xab\x98\xe7\xb2\xbe\xe5\xba\xa6\xe5\x90\x91\xe9\x87\x8f DoubleVector" },
				{ "DoubleVector.Name", "DoubleVector" },
				{ "Font.DisplayName", "\xe5\xad\x97\xe4\xbd\x93 Font" },
				{ "Font.Name", "Font" },
				{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
				{ "Scalar.DisplayName", "\xe6\xa0\x87\xe9\x87\x8f Scalar" },
				{ "Scalar.Name", "Scalar" },
				{ "SparseVolumeTexture.DisplayName", "\xe7\xa8\x80\xe7\x96\x8f\xe4\xbd\x93\xe7\xa7\xaf\xe7\xba\xb9\xe7\x90\x86 SparseVolumeTexture" },
				{ "SparseVolumeTexture.Name", "SparseVolumeTexture" },
				{ "StaticSwitch.DisplayName", "\xe9\x9d\x99\xe6\x80\x81\xe5\xbc\x80\xe5\x85\xb3 StaticSwitch" },
				{ "StaticSwitch.Name", "StaticSwitch" },
				{ "Texture.DisplayName", "\xe7\xba\xb9\xe7\x90\x86 Texture" },
				{ "Texture.Name", "Texture" },
				{ "Vector.DisplayName", "\xe5\x90\x91\xe9\x87\x8f Vector" },
				{ "Vector.Name", "Vector" },
				{ "VirtualTexture.DisplayName", "\xe8\x99\x9a\xe6\x8b\x9f\xe7\xba\xb9\xe7\x90\x86 VirtualTexture" },
				{ "VirtualTexture.Name", "VirtualTexture" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
				nullptr,
				"ECMMaterialParamType",
				"ECMMaterialParamType",
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
	static UEnum* ECMMaterialParamValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ECMMaterialParamValueType"));
		}
		return Singleton;
	}
	template<> VTMHOTUPDATE_API UEnum* StaticEnum<ECMMaterialParamValueType>()
	{
		return ECMMaterialParamValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECMMaterialParamValueType(ECMMaterialParamValueType_StaticEnum, TEXT("/Script/VTMHotUpdate"), TEXT("ECMMaterialParamValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Hash() { return 36634891U; }
	UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECMMaterialParamValueType"), 0, Get_Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MaterialParamValueType_Increase", (int64)MaterialParamValueType_Increase },
				{ "MaterialParamValueType_Arr", (int64)MaterialParamValueType_Arr },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MaterialParamValueType_Arr.Comment", "//MaterialParamValueType_CopyCount  UMETA(DisplayName = \"\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe9\x87\x8f\"),\n" },
				{ "MaterialParamValueType_Arr.DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84" },
				{ "MaterialParamValueType_Arr.Name", "MaterialParamValueType_Arr" },
				{ "MaterialParamValueType_Arr.ToolTip", "MaterialParamValueType_CopyCount  UMETA(DisplayName = \"\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe9\x87\x8f\")," },
				{ "MaterialParamValueType_Increase.DisplayName", "\xe9\x80\x92\xe5\xa2\x9e\xe5\x80\xbc" },
				{ "MaterialParamValueType_Increase.Name", "MaterialParamValueType_Increase" },
				{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
				nullptr,
				"ECMMaterialParamValueType",
				"ECMMaterialParamValueType",
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
class UScriptStruct* FCastingMachineAssetDescriptionJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineAssetDescriptionJsonData"), sizeof(FCastingMachineAssetDescriptionJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineAssetDescriptionJsonData>()
{
	return FCastingMachineAssetDescriptionJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineAssetDescriptionJsonData(FCastingMachineAssetDescriptionJsonData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineAssetDescriptionJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineAssetDescriptionJsonData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineAssetDescriptionJsonData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineAssetDescriptionJsonData>(FName(TEXT("CastingMachineAssetDescriptionJsonData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineAssetDescriptionJsonData;
	struct Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EengineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EengineVersion;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSlotArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotArr;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_changeParamMaterialDataArar_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_changeParamMaterialDataArar_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_changeParamMaterialDataArar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineAssetDescriptionJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, SkeletonPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, AssetInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion = { "EengineVersion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, EengineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_Inner = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, MaterialSlotArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, changeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineAssetDescriptionJsonData",
		sizeof(FCastingMachineAssetDescriptionJsonData),
		alignof(FCastingMachineAssetDescriptionJsonData),
		Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineAssetDescriptionJsonData"), sizeof(FCastingMachineAssetDescriptionJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Hash() { return 3335016412U; }
class UScriptStruct* FCastingMachineOutputJsonDataArr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputJsonDataArr"), sizeof(FCastingMachineOutputJsonDataArr), Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputJsonDataArr>()
{
	return FCastingMachineOutputJsonDataArr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineOutputJsonDataArr(FCastingMachineOutputJsonDataArr::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineOutputJsonDataArr"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonDataArr
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonDataArr()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineOutputJsonDataArr>(FName(TEXT("CastingMachineOutputJsonDataArr")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonDataArr;
	struct Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputJsonDataArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputJsonDataArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputJsonDataArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputJsonDataArr>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_Inner = { "OutputJsonDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr = { "OutputJsonDataArr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonDataArr, OutputJsonDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineOutputJsonDataArr",
		sizeof(FCastingMachineOutputJsonDataArr),
		alignof(FCastingMachineOutputJsonDataArr),
		Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineOutputJsonDataArr"), sizeof(FCastingMachineOutputJsonDataArr), Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Hash() { return 3576044187U; }
class UScriptStruct* FCastingMachineOutputJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputJsonData"), sizeof(FCastingMachineOutputJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputJsonData>()
{
	return FCastingMachineOutputJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineOutputJsonData(FCastingMachineOutputJsonData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineOutputJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineOutputJsonData>(FName(TEXT("CastingMachineOutputJsonData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputJsonData;
	struct Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureActorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CaptureActorPath;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContainerIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSlotArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotArr;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_changeParamMaterialDataArar_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_changeParamMaterialDataArar_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_changeParamMaterialDataArar;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooperateMPC_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooperateMPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CooperateMPC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, SkeletonPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, ActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath = { "CaptureActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, CaptureActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, AssetInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex = { "ContainerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, ContainerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_Inner = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, MaterialSlotArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, changeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_Inner = { "CooperateMPC", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC = { "CooperateMPC", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, CooperateMPC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineOutputJsonData",
		sizeof(FCastingMachineOutputJsonData),
		alignof(FCastingMachineOutputJsonData),
		Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineOutputJsonData"), sizeof(FCastingMachineOutputJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Hash() { return 854111133U; }
class UScriptStruct* FCastingMachineMPCOutputJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMPCOutputJsonData"), sizeof(FCastingMachineMPCOutputJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMPCOutputJsonData>()
{
	return FCastingMachineMPCOutputJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineMPCOutputJsonData(FCastingMachineMPCOutputJsonData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineMPCOutputJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMPCOutputJsonData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMPCOutputJsonData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineMPCOutputJsonData>(FName(TEXT("CastingMachineMPCOutputJsonData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMPCOutputJsonData;
	struct Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPCPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MPCPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MPCChangeDataArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPCChangeDataArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MPCChangeDataArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMPCOutputJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath = { "MPCPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMPCOutputJsonData, MPCPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_Inner = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMPCOutputJsonData, MPCChangeDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineMPCOutputJsonData",
		sizeof(FCastingMachineMPCOutputJsonData),
		alignof(FCastingMachineMPCOutputJsonData),
		Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineMPCOutputJsonData"), sizeof(FCastingMachineMPCOutputJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Hash() { return 191892497U; }
class UScriptStruct* FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputChangeParamMaterialDataArray"), sizeof(FCastingMachineOutputChangeParamMaterialDataArray), Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputChangeParamMaterialDataArray>()
{
	return FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray(FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineOutputChangeParamMaterialDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialDataArray
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialDataArray()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineOutputChangeParamMaterialDataArray>(FName(TEXT("CastingMachineOutputChangeParamMaterialDataArray")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialDataArray;
	struct Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChangeParamMaterialDataArar_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeParamMaterialDataArar_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChangeParamMaterialDataArar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputChangeParamMaterialDataArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_Inner = { "ChangeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar = { "ChangeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialDataArray, ChangeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineOutputChangeParamMaterialDataArray",
		sizeof(FCastingMachineOutputChangeParamMaterialDataArray),
		alignof(FCastingMachineOutputChangeParamMaterialDataArray),
		Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineOutputChangeParamMaterialDataArray"), sizeof(FCastingMachineOutputChangeParamMaterialDataArray), Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Hash() { return 2663108691U; }
class UScriptStruct* FCastingMachineOutputChangeParamMaterialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputChangeParamMaterialData"), sizeof(FCastingMachineOutputChangeParamMaterialData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputChangeParamMaterialData>()
{
	return FCastingMachineOutputChangeParamMaterialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData(FCastingMachineOutputChangeParamMaterialData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineOutputChangeParamMaterialData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineOutputChangeParamMaterialData>(FName(TEXT("CastingMachineOutputChangeParamMaterialData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputChangeParamMaterialData;
	struct Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTextureValue_MetaData[];
#endif
		static void NewProp_bIsTextureValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTextureValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputChangeParamMaterialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, SlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, MaterialPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, ParamValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_SetBit(void* Obj)
	{
		((FCastingMachineOutputChangeParamMaterialData*)Obj)->bIsTextureValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue = { "bIsTextureValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCastingMachineOutputChangeParamMaterialData), &Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineOutputChangeParamMaterialData",
		sizeof(FCastingMachineOutputChangeParamMaterialData),
		alignof(FCastingMachineOutputChangeParamMaterialData),
		Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineOutputChangeParamMaterialData"), sizeof(FCastingMachineOutputChangeParamMaterialData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Hash() { return 2502698788U; }
class UScriptStruct* FCastingMachineOutputSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputSlotData"), sizeof(FCastingMachineOutputSlotData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputSlotData>()
{
	return FCastingMachineOutputSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineOutputSlotData(FCastingMachineOutputSlotData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineOutputSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputSlotData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputSlotData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineOutputSlotData>(FName(TEXT("CastingMachineOutputSlotData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineOutputSlotData;
	struct Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputSlotData, SlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineOutputSlotData, MaterialPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineOutputSlotData",
		sizeof(FCastingMachineOutputSlotData),
		alignof(FCastingMachineOutputSlotData),
		Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineOutputSlotData"), sizeof(FCastingMachineOutputSlotData), Get_Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Hash() { return 2858288896U; }
class UScriptStruct* FCastingMachineJsonData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineJsonData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineJsonData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineJsonData"), sizeof(FCastingMachineJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineJsonData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineJsonData>()
{
	return FCastingMachineJsonData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineJsonData(FCastingMachineJsonData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineJsonData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineJsonData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineJsonData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineJsonData>(FName(TEXT("CastingMachineJsonData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineJsonData;
	struct Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialSlotMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialSlotMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialSlotMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ActorPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineJsonData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, SkeletonPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_ValueProp = { "MaterialSlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_Key_KeyProp = { "MaterialSlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "Comment", "/// <summary>\n/// key \xe6\x8f\x92\xe6\xa7\xbdid  data : \xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
		{ "ToolTip", "<summary>\nkey \xe6\x8f\x92\xe6\xa7\xbdid  data : \xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap = { "MaterialSlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, MaterialSlotMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, ActorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, MaterialPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc = { "FloatDesc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, FloatDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc = { "IntDesc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, IntDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc = { "VectorDesc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, VectorDesc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc = { "StringDesc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, StringDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineJsonData, Colors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineJsonData",
		sizeof(FCastingMachineJsonData),
		alignof(FCastingMachineJsonData),
		Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineJsonData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineJsonData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineJsonData"), sizeof(FCastingMachineJsonData), Get_Z_Construct_UScriptStruct_FCastingMachineJsonData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineJsonData_Hash() { return 2030634413U; }
class UScriptStruct* FCastingMachineMaterialSlotChangeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialSlotChangeData"), sizeof(FCastingMachineMaterialSlotChangeData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialSlotChangeData>()
{
	return FCastingMachineMaterialSlotChangeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineMaterialSlotChangeData(FCastingMachineMaterialSlotChangeData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineMaterialSlotChangeData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotChangeData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotChangeData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineMaterialSlotChangeData>(FName(TEXT("CastingMachineMaterialSlotChangeData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotChangeData;
	struct Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialSlotChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotChangeData, SlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_Inner = { "MaterialArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr = { "MaterialArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotChangeData, MaterialArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineMaterialSlotChangeData",
		sizeof(FCastingMachineMaterialSlotChangeData),
		alignof(FCastingMachineMaterialSlotChangeData),
		Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineMaterialSlotChangeData"), sizeof(FCastingMachineMaterialSlotChangeData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Hash() { return 724114698U; }
class UScriptStruct* FCastingMachineMaterialSlotData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialSlotData"), sizeof(FCastingMachineMaterialSlotData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialSlotData>()
{
	return FCastingMachineMaterialSlotData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineMaterialSlotData(FCastingMachineMaterialSlotData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineMaterialSlotData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineMaterialSlotData>(FName(TEXT("CastingMachineMaterialSlotData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialSlotData;
	struct Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SlotId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialParamMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialParamMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialParamMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialSlotData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x8f\x92\xe6\xa7\xbdID" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, SlotId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_ValueProp = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCastingMachineMaterialParamData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_Key_KeyProp = { "MaterialParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "Comment", "/// <summary>\n/// key : \xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d  data : \xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\n/// </summary>\n" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x88\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
		{ "ToolTip", "<summary>\nkey : \xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d  data : \xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialParamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineMaterialSlotData",
		sizeof(FCastingMachineMaterialSlotData),
		alignof(FCastingMachineMaterialSlotData),
		Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineMaterialSlotData"), sizeof(FCastingMachineMaterialSlotData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Hash() { return 1093896126U; }
class UScriptStruct* FCastingMachineMaterialParamData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialParamData"), sizeof(FCastingMachineMaterialParamData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialParamData>()
{
	return FCastingMachineMaterialParamData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCastingMachineMaterialParamData(FCastingMachineMaterialParamData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CastingMachineMaterialParamData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialParamData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialParamData()
	{
		UScriptStruct::DeferCppStructOps<FCastingMachineMaterialParamData>(FName(TEXT("CastingMachineMaterialParamData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCastingMachineMaterialParamData;
	struct Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParamValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyCountMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CopyCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CopyCountMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureArr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TexturePathStr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexturePathStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TexturePathStr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialParamData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, ParamType), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType = { "ParamValueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, ParamValueType), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
		{ "Tooltip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe9\x80\x92\xe5\xa2\x9e\xe5\x80\xbc \xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe5\xa1\xab\xe5\x86\x99\xef\xbc\x81""ex:0-1" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_ValueProp = { "CopyCountMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_Key_KeyProp = { "CopyCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe5\x90\x8c\xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe9\x87\x8d\xe5\xa4\x8d\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
		{ "Tooltip", "ex:\xe6\x9e\xaa\xe7\x9a\xae\xe7\xa3\xa8\xe6\x8d\x9f\xe5\xba\xa6\xe4\xb8\xba""1\xe7\x9a\x84 \xe9\x87\x8d\xe5\xa4\x8d""100\xe6\x8a\x8a key:\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc value:\xe9\x87\x8d\xe5\xa4\x8d\xe6\x95\xb0\xe9\x87\x8f" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap = { "CopyCountMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, CopyCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_Inner = { "TextureArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
		{ "Tooltip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84 \xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe5\xa1\xab\xe5\x86\x99\xef\xbc\x81" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr = { "TextureArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, TextureArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_Inner = { "TexturePathStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr = { "TexturePathStr", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, TexturePathStr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CastingMachineMaterialParamData",
		sizeof(FCastingMachineMaterialParamData),
		alignof(FCastingMachineMaterialParamData),
		Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialParamData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CastingMachineMaterialParamData"), sizeof(FCastingMachineMaterialParamData), Get_Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Hash() { return 2487713572U; }
class UScriptStruct* FCooperateMPC::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCooperateMPC_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooperateMPC, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CooperateMPC"), sizeof(FCooperateMPC), Get_Z_Construct_UScriptStruct_FCooperateMPC_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCooperateMPC>()
{
	return FCooperateMPC::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCooperateMPC(FCooperateMPC::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CooperateMPC"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPC
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPC()
	{
		UScriptStruct::DeferCppStructOps<FCooperateMPC>(FName(TEXT("CooperateMPC")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPC;
	struct Z_Construct_UScriptStruct_FCooperateMPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MPC;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MPCChangeDataArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPCChangeDataArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MPCChangeDataArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooperateMPC>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPC, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_Inner = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "MPC\xe5\x8f\x82\xe6\x95\xb0\xe9\x9b\x86\xe6\x94\xb9\xe5\x8f\x98\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPC, MPCChangeDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CooperateMPC",
		sizeof(FCooperateMPC),
		alignof(FCooperateMPC),
		Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPC()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCooperateMPC_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CooperateMPC"), sizeof(FCooperateMPC), Get_Z_Construct_UScriptStruct_FCooperateMPC_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCooperateMPC_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCooperateMPC_Hash() { return 630931534U; }
class UScriptStruct* FCooperateMPCChangeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VTMHOTUPDATE_API uint32 Get_Z_Construct_UScriptStruct_FCooperateMPCChangeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooperateMPCChangeData, Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CooperateMPCChangeData"), sizeof(FCooperateMPCChangeData), Get_Z_Construct_UScriptStruct_FCooperateMPCChangeData_Hash());
	}
	return Singleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCooperateMPCChangeData>()
{
	return FCooperateMPCChangeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCooperateMPCChangeData(FCooperateMPCChangeData::StaticStruct, TEXT("/Script/VTMHotUpdate"), TEXT("CooperateMPCChangeData"), false, nullptr, nullptr);
static struct FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPCChangeData
{
	FScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPCChangeData()
	{
		UScriptStruct::DeferCppStructOps<FCooperateMPCChangeData>(FName(TEXT("CooperateMPCChangeData")));
	}
} ScriptStruct_VTMHotUpdate_StaticRegisterNativesFCooperateMPCChangeData;
	struct Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPCParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MPCParamName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPCParamValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MPCParamValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScalarValue_MetaData[];
#endif
		static void NewProp_bIsScalarValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScalarValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtendCopyFile_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendCopyFile_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExtendCopyFile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnableCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooperateMPCChangeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName = { "MPCParamName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPCChangeData, MPCParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xafScalar\xe7\xb1\xbb\xe5\x9e\x8b \xe5\x8f\xaa\xe5\x8f\x96R\xe7\x9a\x84\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue = { "MPCParamValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPCChangeData, MPCParamValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xbaScalar" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_SetBit(void* Obj)
	{
		((FCooperateMPCChangeData*)Obj)->bIsScalarValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue = { "bIsScalarValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCooperateMPCChangeData), &Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_Inner = { "ExtendCopyFile", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\xa2\x9d\xe5\xa4\x96\xe5\xa4\x8d\xe5\x88\xb6\xe5\x88\xb0\xe9\x93\xb8\xe9\x80\xa0\xe5\x90\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe7\x9a\x84\xe5\xb8\xa6\xe5\x90\x8e\xe7\xbc\x80\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d,\xe6\xba\x90\xe6\x8c\x87\xe5\x90\x91\xe8\xb5\x84\xe4\xba\xa7pak\xe7\x9b\xae\xe5\xbd\x95" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile = { "ExtendCopyFile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPCChangeData, ExtendCopyFile), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe6\x8f\x92\xe6\xa7\xbd+\xe6\x9d\x90\xe8\xb4\xa8\xe5\x90\x8d&&\xe6\x8f\x92\xe6\xa7\xbd""1#\xe6\x9d\x90\xe8\xb4\xa8""1\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""1#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc&\xe6\x8f\x92\xe6\xa7\xbd""2#\xe6\x9d\x90\xe8\xb4\xa8""2\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""2#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc || \xe6\x8f\x92\xe6\xa7\xbd""3#\xe6\x9d\x90\xe8\xb4\xa8""3\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""3#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc&\xe6\x8f\x92\xe6\xa7\xbd""4#\xe6\x9d\x90\xe8\xb4\xa8""4\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""4#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition = { "EnableCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCooperateMPCChangeData, EnableCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
		nullptr,
		&NewStructOps,
		"CooperateMPCChangeData",
		sizeof(FCooperateMPCChangeData),
		alignof(FCooperateMPCChangeData),
		Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCooperateMPCChangeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VTMHotUpdate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CooperateMPCChangeData"), sizeof(FCooperateMPCChangeData), Get_Z_Construct_UScriptStruct_FCooperateMPCChangeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCooperateMPCChangeData_Hash() { return 1682729875U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
