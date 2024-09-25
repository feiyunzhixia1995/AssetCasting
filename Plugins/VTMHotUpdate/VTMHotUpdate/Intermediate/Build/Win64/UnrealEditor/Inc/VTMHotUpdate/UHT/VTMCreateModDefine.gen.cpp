// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/VTMCreateModDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMCreateModDefine() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialParamData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputSlotData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPC();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData();
// End Cross Module References

// Begin Enum ECMMaterialParamValueType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECMMaterialParamValueType;
static UEnum* ECMMaterialParamValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECMMaterialParamValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECMMaterialParamValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ECMMaterialParamValueType"));
	}
	return Z_Registration_Info_UEnum_ECMMaterialParamValueType.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<ECMMaterialParamValueType>()
{
	return ECMMaterialParamValueType_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MaterialParamValueType_Arr.Comment", "//MaterialParamValueType_CopyCount  UMETA(DisplayName = \"\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe9\x87\x8f\"),\n" },
		{ "MaterialParamValueType_Arr.DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84" },
		{ "MaterialParamValueType_Arr.Name", "MaterialParamValueType_Arr" },
		{ "MaterialParamValueType_Arr.ToolTip", "MaterialParamValueType_CopyCount  UMETA(DisplayName = \"\xe5\xa4\x8d\xe5\x88\xb6\xe6\x95\xb0\xe9\x87\x8f\")," },
		{ "MaterialParamValueType_Increase.DisplayName", "\xe9\x80\x92\xe5\xa2\x9e\xe5\x80\xbc" },
		{ "MaterialParamValueType_Increase.Name", "MaterialParamValueType_Increase" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MaterialParamValueType_Increase", (int64)MaterialParamValueType_Increase },
		{ "MaterialParamValueType_Arr", (int64)MaterialParamValueType_Arr },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"ECMMaterialParamValueType",
	"ECMMaterialParamValueType",
	Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType()
{
	if (!Z_Registration_Info_UEnum_ECMMaterialParamValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECMMaterialParamValueType.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECMMaterialParamValueType.InnerSingleton;
}
// End Enum ECMMaterialParamValueType

// Begin Enum ECMMaterialParamType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECMMaterialParamType;
static UEnum* ECMMaterialParamType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECMMaterialParamType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECMMaterialParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("ECMMaterialParamType"));
	}
	return Z_Registration_Info_UEnum_ECMMaterialParamType.OuterSingleton;
}
template<> VTMHOTUPDATE_API UEnum* StaticEnum<ECMMaterialParamType>()
{
	return ECMMaterialParamType_StaticEnum();
}
struct Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Scalar", (int64)Scalar },
		{ "Vector", (int64)Vector },
		{ "Texture", (int64)Texture },
		{ "DoubleVector", (int64)DoubleVector },
		{ "Font", (int64)Font },
		{ "VirtualTexture", (int64)VirtualTexture },
		{ "SparseVolumeTexture", (int64)SparseVolumeTexture },
		{ "StaticSwitch", (int64)StaticSwitch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	"ECMMaterialParamType",
	"ECMMaterialParamType",
	Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType()
{
	if (!Z_Registration_Info_UEnum_ECMMaterialParamType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECMMaterialParamType.InnerSingleton, Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECMMaterialParamType.InnerSingleton;
}
// End Enum ECMMaterialParamType

// Begin ScriptStruct FCooperateMPCChangeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CooperateMPCChangeData;
class UScriptStruct* FCooperateMPCChangeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooperateMPCChangeData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CooperateMPCChangeData"));
	}
	return Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCooperateMPCChangeData>()
{
	return FCooperateMPCChangeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCParamName_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCParamValue_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc \xe5\xa6\x82\xe6\x9e\x9c\xe6\x98\xafScalar\xe7\xb1\xbb\xe5\x9e\x8b \xe5\x8f\xaa\xe5\x8f\x96R\xe7\x9a\x84\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsScalarValue_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xbaScalar" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendCopyFile_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\xa2\x9d\xe5\xa4\x96\xe5\xa4\x8d\xe5\x88\xb6\xe5\x88\xb0\xe9\x93\xb8\xe9\x80\xa0\xe5\x90\x8e\xe6\x96\x87\xe4\xbb\xb6\xe5\xa4\xb9\xe7\x9a\x84\xe5\xb8\xa6\xe5\x90\x8e\xe7\xbc\x80\xe6\x96\x87\xe4\xbb\xb6\xe5\x90\x8d,\xe6\xba\x90\xe6\x8c\x87\xe5\x90\x91\xe8\xb5\x84\xe4\xba\xa7pak\xe7\x9b\xae\xe5\xbd\x95" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCondition_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe5\x90\xaf\xe7\x94\xa8\xe7\x9a\x84\xe6\x9d\xa1\xe4\xbb\xb6 \xe6\x8f\x92\xe6\xa7\xbd+\xe6\x9d\x90\xe8\xb4\xa8\xe5\x90\x8d&&\xe6\x8f\x92\xe6\xa7\xbd""1#\xe6\x9d\x90\xe8\xb4\xa8""1\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""1#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc&\xe6\x8f\x92\xe6\xa7\xbd""2#\xe6\x9d\x90\xe8\xb4\xa8""2\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""2#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc || \xe6\x8f\x92\xe6\xa7\xbd""3#\xe6\x9d\x90\xe8\xb4\xa8""3\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""3#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc&\xe6\x8f\x92\xe6\xa7\xbd""4#\xe6\x9d\x90\xe8\xb4\xa8""4\xe5\xae\x9e\xe4\xbe\x8b\xe5\x90\x8d#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d""4#\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MPCParamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MPCParamValue;
	static void NewProp_bIsScalarValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScalarValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtendCopyFile_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtendCopyFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnableCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooperateMPCChangeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName = { "MPCParamName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPCChangeData, MPCParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCParamName_MetaData), NewProp_MPCParamName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue = { "MPCParamValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPCChangeData, MPCParamValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCParamValue_MetaData), NewProp_MPCParamValue_MetaData) };
void Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_SetBit(void* Obj)
{
	((FCooperateMPCChangeData*)Obj)->bIsScalarValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue = { "bIsScalarValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCooperateMPCChangeData), &Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsScalarValue_MetaData), NewProp_bIsScalarValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_Inner = { "ExtendCopyFile", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile = { "ExtendCopyFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPCChangeData, ExtendCopyFile), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendCopyFile_MetaData), NewProp_ExtendCopyFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition = { "EnableCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPCChangeData, EnableCondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCondition_MetaData), NewProp_EnableCondition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_MPCParamValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_bIsScalarValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_ExtendCopyFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewProp_EnableCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CooperateMPCChangeData",
	Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::PropPointers),
	sizeof(FCooperateMPCChangeData),
	alignof(FCooperateMPCChangeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData()
{
	if (!Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.InnerSingleton, Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CooperateMPCChangeData.InnerSingleton;
}
// End ScriptStruct FCooperateMPCChangeData

// Begin ScriptStruct FCooperateMPC
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CooperateMPC;
class UScriptStruct* FCooperateMPC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CooperateMPC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CooperateMPC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCooperateMPC, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CooperateMPC"));
	}
	return Z_Registration_Info_UScriptStruct_CooperateMPC.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCooperateMPC>()
{
	return FCooperateMPC::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCooperateMPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe9\x85\x8d\xe5\x90\x88\xe7\x9a\x84MPC\xe5\x8f\x82\xe6\x95\xb0\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCChangeDataArr_MetaData[] = {
		{ "Category", "FCooperateMPC" },
		{ "DisplayName", "MPC\xe5\x8f\x82\xe6\x95\xb0\xe9\x9b\x86\xe6\x94\xb9\xe5\x8f\x98\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MPCChangeDataArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MPCChangeDataArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCooperateMPC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPC, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPC_MetaData), NewProp_MPC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_Inner = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(0, nullptr) }; // 2061310919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCooperateMPC, MPCChangeDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCChangeDataArr_MetaData), NewProp_MPCChangeDataArr_MetaData) }; // 2061310919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewProp_MPCChangeDataArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCooperateMPC_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CooperateMPC",
	Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::PropPointers),
	sizeof(FCooperateMPC),
	alignof(FCooperateMPC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCooperateMPC_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCooperateMPC_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPC()
{
	if (!Z_Registration_Info_UScriptStruct_CooperateMPC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CooperateMPC.InnerSingleton, Z_Construct_UScriptStruct_FCooperateMPC_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CooperateMPC.InnerSingleton;
}
// End ScriptStruct FCooperateMPC

// Begin ScriptStruct FCastingMachineMaterialParamData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData;
class UScriptStruct* FCastingMachineMaterialParamData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialParamData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialParamData>()
{
	return FCastingMachineMaterialParamData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamValueType_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe8\x8c\x83\xe5\x9b\xb4" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe9\x80\x92\xe5\xa2\x9e\xe5\x80\xbc \xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe5\xa1\xab\xe5\x86\x99\xef\xbc\x81""ex:0-1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyCountMap_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe5\x90\x8c\xe4\xb8\x80\xe7\xa7\x8d\xe6\x95\x88\xe6\x9e\x9c\xe9\x87\x8d\xe5\xa4\x8d\xe7\x9a\x84\xe6\x95\xb0\xe9\x87\x8f" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "ex:\xe6\x9e\xaa\xe7\x9a\xae\xe7\xa3\xa8\xe6\x8d\x9f\xe5\xba\xa6\xe4\xb8\xba""1\xe7\x9a\x84 \xe9\x87\x8d\xe5\xa4\x8d""100\xe6\x8a\x8a key:\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc value:\xe9\x87\x8d\xe5\xa4\x8d\xe6\x95\xb0\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureArr_MetaData[] = {
		{ "Category", "FCastingMachineMaterialParamData" },
		{ "DisplayName", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "\xe4\xbb\x85\xe5\xbd\x93\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\xe4\xb8\xba\xe9\x9a\x8f\xe6\x9c\xba\xe8\xb4\xb4\xe5\x9b\xbe\xe6\x95\xb0\xe7\xbb\x84 \xe6\x97\xb6\xe9\x9c\x80\xe8\xa6\x81\xe5\xa1\xab\xe5\x86\x99\xef\xbc\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePathStr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParamValueType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CopyCountMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CopyCountMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CopyCountMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureArr;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TexturePathStr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TexturePathStr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialParamData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, ParamType), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamType_MetaData), NewProp_ParamType_MetaData) }; // 1759452791
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType = { "ParamValueType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, ParamValueType), Z_Construct_UEnum_VTMHotUpdate_ECMMaterialParamValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamValueType_MetaData), NewProp_ParamValueType_MetaData) }; // 367552788
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_ValueProp = { "CopyCountMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_Key_KeyProp = { "CopyCountMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap = { "CopyCountMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, CopyCountMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyCountMap_MetaData), NewProp_CopyCountMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_Inner = { "TextureArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr = { "TextureArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, TextureArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureArr_MetaData), NewProp_TextureArr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_Inner = { "TexturePathStr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr = { "TexturePathStr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialParamData, TexturePathStr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePathStr_MetaData), NewProp_TexturePathStr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_ParamValueType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_CopyCountMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TextureArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewProp_TexturePathStr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineMaterialParamData",
	Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::PropPointers),
	sizeof(FCastingMachineMaterialParamData),
	alignof(FCastingMachineMaterialParamData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialParamData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData.InnerSingleton;
}
// End ScriptStruct FCastingMachineMaterialParamData

// Begin ScriptStruct FCastingMachineMaterialSlotData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData;
class UScriptStruct* FCastingMachineMaterialSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialSlotData>()
{
	return FCastingMachineMaterialSlotData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x8f\x92\xe6\xa7\xbdID" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamMap_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// key : \xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d  data : \xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\n/// </summary>\n" },
#endif
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\x8f\x98\xe5\x8c\x96\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x88\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nkey : \xe5\x8f\x82\xe6\x95\xb0\xe5\x90\x8d  data : \xe5\x8f\x82\xe6\x95\xb0\xe5\x80\xbc\n</summary>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParamMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialParamMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialParamMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialSlotData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPath_MetaData), NewProp_MaterialPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_ValueProp = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCastingMachineMaterialParamData, METADATA_PARAMS(0, nullptr) }; // 1712412656
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_Key_KeyProp = { "MaterialParamMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap = { "MaterialParamMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotData, MaterialParamMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamMap_MetaData), NewProp_MaterialParamMap_MetaData) }; // 1712412656
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewProp_MaterialParamMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineMaterialSlotData",
	Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::PropPointers),
	sizeof(FCastingMachineMaterialSlotData),
	alignof(FCastingMachineMaterialSlotData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData.InnerSingleton;
}
// End ScriptStruct FCastingMachineMaterialSlotData

// Begin ScriptStruct FCastingMachineMaterialSlotChangeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData;
class UScriptStruct* FCastingMachineMaterialSlotChangeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMaterialSlotChangeData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMaterialSlotChangeData>()
{
	return FCastingMachineMaterialSlotChangeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe6\x9b\xbf\xe6\x8d\xa2\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe7\x9a\x84\xe6\x8f\x92\xe6\xa7\xbd" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialArr_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "DisplayName", "\xe6\x9b\xbf\xe6\x8d\xa2\xe7\x9a\x84\xe6\x9d\x90\xe8\xb4\xa8\xe5\xae\x9e\xe4\xbe\x8b\xe6\x95\xb0\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMaterialSlotChangeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotChangeData, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_Inner = { "MaterialArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr = { "MaterialArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMaterialSlotChangeData, MaterialArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialArr_MetaData), NewProp_MaterialArr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewProp_MaterialArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineMaterialSlotChangeData",
	Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::PropPointers),
	sizeof(FCastingMachineMaterialSlotChangeData),
	alignof(FCastingMachineMaterialSlotChangeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData.InnerSingleton;
}
// End ScriptStruct FCastingMachineMaterialSlotChangeData

// Begin ScriptStruct FCastingMachineJsonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineJsonData;
class UScriptStruct* FCastingMachineJsonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineJsonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineJsonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineJsonData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineJsonData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineJsonData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineJsonData>()
{
	return FCastingMachineJsonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotMap_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// key \xe6\x8f\x92\xe6\xa7\xbdid  data : \xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbf\xa1\xe6\x81\xaf\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nkey \xe6\x8f\x92\xe6\xa7\xbdid  data : \xe6\x8f\x92\xe6\xa7\xbd\xe6\x9d\x90\xe8\xb4\xa8\xe4\xbf\xa1\xe6\x81\xaf\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringDesc_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[] = {
		{ "Category", "FCastingMachineJsonData" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialSlotMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialSlotMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntDesc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorDesc;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringDesc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Colors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineJsonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, SkeletonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonPath_MetaData), NewProp_SkeletonPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_ValueProp = { "MaterialSlotMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData, METADATA_PARAMS(0, nullptr) }; // 3225769640
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_Key_KeyProp = { "MaterialSlotMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap = { "MaterialSlotMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, MaterialSlotMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotMap_MetaData), NewProp_MaterialSlotMap_MetaData) }; // 3225769640
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, ActorPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPath_MetaData), NewProp_ActorPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, MaterialPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPath_MetaData), NewProp_MaterialPath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc = { "FloatDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, FloatDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatDesc_MetaData), NewProp_FloatDesc_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc = { "IntDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, IntDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntDesc_MetaData), NewProp_IntDesc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc = { "VectorDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, VectorDesc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorDesc_MetaData), NewProp_VectorDesc_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc = { "StringDesc", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, StringDesc), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringDesc_MetaData), NewProp_StringDesc_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineJsonData, Colors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Colors_MetaData), NewProp_Colors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_SkeletonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialSlotMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_ActorPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_MaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_FloatDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_IntDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_VectorDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_StringDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewProp_Colors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineJsonData",
	Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::PropPointers),
	sizeof(FCastingMachineJsonData),
	alignof(FCastingMachineJsonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineJsonData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineJsonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineJsonData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineJsonData.InnerSingleton;
}
// End ScriptStruct FCastingMachineJsonData

// Begin ScriptStruct FCastingMachineOutputSlotData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData;
class UScriptStruct* FCastingMachineOutputSlotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputSlotData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputSlotData>()
{
	return FCastingMachineOutputSlotData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputSlotData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputSlotData, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputSlotData, MaterialPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPath_MetaData), NewProp_MaterialPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewProp_MaterialPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineOutputSlotData",
	Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::PropPointers),
	sizeof(FCastingMachineOutputSlotData),
	alignof(FCastingMachineOutputSlotData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputSlotData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData.InnerSingleton;
}
// End ScriptStruct FCastingMachineOutputSlotData

// Begin ScriptStruct FCastingMachineOutputChangeParamMaterialData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData;
class UScriptStruct* FCastingMachineOutputChangeParamMaterialData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputChangeParamMaterialData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputChangeParamMaterialData>()
{
	return FCastingMachineOutputChangeParamMaterialData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTextureValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParamValue;
	static void NewProp_bIsTextureValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTextureValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputChangeParamMaterialData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId = { "SlotId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, SlotId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotId_MetaData), NewProp_SlotId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath = { "MaterialPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, MaterialPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialPath_MetaData), NewProp_MaterialPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialData, ParamValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamValue_MetaData), NewProp_ParamValue_MetaData) };
void Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_SetBit(void* Obj)
{
	((FCastingMachineOutputChangeParamMaterialData*)Obj)->bIsTextureValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue = { "bIsTextureValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCastingMachineOutputChangeParamMaterialData), &Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTextureValue_MetaData), NewProp_bIsTextureValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_SlotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_MaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_ParamValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewProp_bIsTextureValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineOutputChangeParamMaterialData",
	Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::PropPointers),
	sizeof(FCastingMachineOutputChangeParamMaterialData),
	alignof(FCastingMachineOutputChangeParamMaterialData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData.InnerSingleton;
}
// End ScriptStruct FCastingMachineOutputChangeParamMaterialData

// Begin ScriptStruct FCastingMachineOutputChangeParamMaterialDataArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray;
class UScriptStruct* FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputChangeParamMaterialDataArray"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputChangeParamMaterialDataArray>()
{
	return FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeParamMaterialDataArar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChangeParamMaterialDataArar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputChangeParamMaterialDataArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_Inner = { "ChangeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData, METADATA_PARAMS(0, nullptr) }; // 1461094031
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar = { "ChangeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputChangeParamMaterialDataArray, ChangeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeParamMaterialDataArar_MetaData), NewProp_ChangeParamMaterialDataArar_MetaData) }; // 1461094031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewProp_ChangeParamMaterialDataArar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineOutputChangeParamMaterialDataArray",
	Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::PropPointers),
	sizeof(FCastingMachineOutputChangeParamMaterialDataArray),
	alignof(FCastingMachineOutputChangeParamMaterialDataArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray.InnerSingleton;
}
// End ScriptStruct FCastingMachineOutputChangeParamMaterialDataArray

// Begin ScriptStruct FCastingMachineMPCOutputJsonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData;
class UScriptStruct* FCastingMachineMPCOutputJsonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineMPCOutputJsonData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineMPCOutputJsonData>()
{
	return FCastingMachineMPCOutputJsonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPCChangeDataArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MPCPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MPCChangeDataArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MPCChangeDataArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineMPCOutputJsonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath = { "MPCPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMPCOutputJsonData, MPCPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCPath_MetaData), NewProp_MPCPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_Inner = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(0, nullptr) }; // 2061310919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr = { "MPCChangeDataArr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineMPCOutputJsonData, MPCChangeDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPCChangeDataArr_MetaData), NewProp_MPCChangeDataArr_MetaData) }; // 2061310919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewProp_MPCChangeDataArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineMPCOutputJsonData",
	Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::PropPointers),
	sizeof(FCastingMachineMPCOutputJsonData),
	alignof(FCastingMachineMPCOutputJsonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData.InnerSingleton;
}
// End ScriptStruct FCastingMachineMPCOutputJsonData

// Begin ScriptStruct FCastingMachineOutputJsonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData;
class UScriptStruct* FCastingMachineOutputJsonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputJsonData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputJsonData>()
{
	return FCastingMachineOutputJsonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureActorPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_changeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooperateMPC_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActorPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CaptureActorPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ContainerIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_changeParamMaterialDataArar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_changeParamMaterialDataArar;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooperateMPC_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CooperateMPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputJsonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, SkeletonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonPath_MetaData), NewProp_SkeletonPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath = { "ActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, ActorPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPath_MetaData), NewProp_ActorPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath = { "CaptureActorPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, CaptureActorPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureActorPath_MetaData), NewProp_CaptureActorPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, AssetInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfo_MetaData), NewProp_AssetInfo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize = { "RenderSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, RenderSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderSize_MetaData), NewProp_RenderSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex = { "ContainerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, ContainerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerIndex_MetaData), NewProp_ContainerIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_Inner = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, METADATA_PARAMS(0, nullptr) }; // 1868636235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, MaterialSlotArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotArr_MetaData), NewProp_MaterialSlotArr_MetaData) }; // 1868636235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, METADATA_PARAMS(0, nullptr) }; // 936878064
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, changeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_changeParamMaterialDataArar_MetaData), NewProp_changeParamMaterialDataArar_MetaData) }; // 936878064
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_Inner = { "CooperateMPC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData, METADATA_PARAMS(0, nullptr) }; // 3843850968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC = { "CooperateMPC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonData, CooperateMPC), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooperateMPC_MetaData), NewProp_CooperateMPC_MetaData) }; // 3843850968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_SkeletonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ActorPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CaptureActorPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_AssetInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_RenderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_ContainerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_MaterialSlotArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_changeParamMaterialDataArar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewProp_CooperateMPC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineOutputJsonData",
	Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::PropPointers),
	sizeof(FCastingMachineOutputJsonData),
	alignof(FCastingMachineOutputJsonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData.InnerSingleton;
}
// End ScriptStruct FCastingMachineOutputJsonData

// Begin ScriptStruct FCastingMachineOutputJsonDataArr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr;
class UScriptStruct* FCastingMachineOutputJsonDataArr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineOutputJsonDataArr"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineOutputJsonDataArr>()
{
	return FCastingMachineOutputJsonDataArr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputJsonDataArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutputJsonDataArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputJsonDataArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineOutputJsonDataArr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_Inner = { "OutputJsonDataArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, METADATA_PARAMS(0, nullptr) }; // 4068737037
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr = { "OutputJsonDataArr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineOutputJsonDataArr, OutputJsonDataArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputJsonDataArr_MetaData), NewProp_OutputJsonDataArr_MetaData) }; // 4068737037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewProp_OutputJsonDataArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineOutputJsonDataArr",
	Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::PropPointers),
	sizeof(FCastingMachineOutputJsonDataArr),
	alignof(FCastingMachineOutputJsonDataArr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr.InnerSingleton;
}
// End ScriptStruct FCastingMachineOutputJsonDataArr

// Begin ScriptStruct FCastingMachineAssetDescriptionJsonData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData;
class UScriptStruct* FCastingMachineAssetDescriptionJsonData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData, (UObject*)Z_Construct_UPackage__Script_VTMHotUpdate(), TEXT("CastingMachineAssetDescriptionJsonData"));
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.OuterSingleton;
}
template<> VTMHOTUPDATE_API UScriptStruct* StaticStruct<FCastingMachineAssetDescriptionJsonData>()
{
	return FCastingMachineAssetDescriptionJsonData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EengineVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_changeParamMaterialDataArar_MetaData[] = {
		{ "ModuleRelativePath", "Public/VTMCreateModDefine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EengineVersion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSlotArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialSlotArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_changeParamMaterialDataArar_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_changeParamMaterialDataArar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCastingMachineAssetDescriptionJsonData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath = { "SkeletonPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, SkeletonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletonPath_MetaData), NewProp_SkeletonPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo = { "AssetInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, AssetInfo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetInfo_MetaData), NewProp_AssetInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion = { "EengineVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, EengineVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EengineVersion_MetaData), NewProp_EengineVersion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_Inner = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData, METADATA_PARAMS(0, nullptr) }; // 1868636235
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr = { "MaterialSlotArr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, MaterialSlotArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSlotArr_MetaData), NewProp_MaterialSlotArr_MetaData) }; // 1868636235
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray, METADATA_PARAMS(0, nullptr) }; // 936878064
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar = { "changeParamMaterialDataArar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCastingMachineAssetDescriptionJsonData, changeParamMaterialDataArar), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_changeParamMaterialDataArar_MetaData), NewProp_changeParamMaterialDataArar_MetaData) }; // 936878064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_SkeletonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_AssetInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_EengineVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_MaterialSlotArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewProp_changeParamMaterialDataArar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	nullptr,
	&NewStructOps,
	"CastingMachineAssetDescriptionJsonData",
	Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::PropPointers),
	sizeof(FCastingMachineAssetDescriptionJsonData),
	alignof(FCastingMachineAssetDescriptionJsonData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData()
{
	if (!Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.InnerSingleton, Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData.InnerSingleton;
}
// End ScriptStruct FCastingMachineAssetDescriptionJsonData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECMMaterialParamValueType_StaticEnum, TEXT("ECMMaterialParamValueType"), &Z_Registration_Info_UEnum_ECMMaterialParamValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 367552788U) },
		{ ECMMaterialParamType_StaticEnum, TEXT("ECMMaterialParamType"), &Z_Registration_Info_UEnum_ECMMaterialParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1759452791U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCooperateMPCChangeData::StaticStruct, Z_Construct_UScriptStruct_FCooperateMPCChangeData_Statics::NewStructOps, TEXT("CooperateMPCChangeData"), &Z_Registration_Info_UScriptStruct_CooperateMPCChangeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCooperateMPCChangeData), 2061310919U) },
		{ FCooperateMPC::StaticStruct, Z_Construct_UScriptStruct_FCooperateMPC_Statics::NewStructOps, TEXT("CooperateMPC"), &Z_Registration_Info_UScriptStruct_CooperateMPC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCooperateMPC), 592642124U) },
		{ FCastingMachineMaterialParamData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialParamData_Statics::NewStructOps, TEXT("CastingMachineMaterialParamData"), &Z_Registration_Info_UScriptStruct_CastingMachineMaterialParamData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineMaterialParamData), 1712412656U) },
		{ FCastingMachineMaterialSlotData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotData_Statics::NewStructOps, TEXT("CastingMachineMaterialSlotData"), &Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineMaterialSlotData), 3225769640U) },
		{ FCastingMachineMaterialSlotChangeData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineMaterialSlotChangeData_Statics::NewStructOps, TEXT("CastingMachineMaterialSlotChangeData"), &Z_Registration_Info_UScriptStruct_CastingMachineMaterialSlotChangeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineMaterialSlotChangeData), 3719775735U) },
		{ FCastingMachineJsonData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineJsonData_Statics::NewStructOps, TEXT("CastingMachineJsonData"), &Z_Registration_Info_UScriptStruct_CastingMachineJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineJsonData), 1293261207U) },
		{ FCastingMachineOutputSlotData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineOutputSlotData_Statics::NewStructOps, TEXT("CastingMachineOutputSlotData"), &Z_Registration_Info_UScriptStruct_CastingMachineOutputSlotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineOutputSlotData), 1868636235U) },
		{ FCastingMachineOutputChangeParamMaterialData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialData_Statics::NewStructOps, TEXT("CastingMachineOutputChangeParamMaterialData"), &Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineOutputChangeParamMaterialData), 1461094031U) },
		{ FCastingMachineOutputChangeParamMaterialDataArray::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineOutputChangeParamMaterialDataArray_Statics::NewStructOps, TEXT("CastingMachineOutputChangeParamMaterialDataArray"), &Z_Registration_Info_UScriptStruct_CastingMachineOutputChangeParamMaterialDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineOutputChangeParamMaterialDataArray), 936878064U) },
		{ FCastingMachineMPCOutputJsonData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineMPCOutputJsonData_Statics::NewStructOps, TEXT("CastingMachineMPCOutputJsonData"), &Z_Registration_Info_UScriptStruct_CastingMachineMPCOutputJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineMPCOutputJsonData), 3843850968U) },
		{ FCastingMachineOutputJsonData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineOutputJsonData_Statics::NewStructOps, TEXT("CastingMachineOutputJsonData"), &Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineOutputJsonData), 4068737037U) },
		{ FCastingMachineOutputJsonDataArr::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineOutputJsonDataArr_Statics::NewStructOps, TEXT("CastingMachineOutputJsonDataArr"), &Z_Registration_Info_UScriptStruct_CastingMachineOutputJsonDataArr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineOutputJsonDataArr), 1164477037U) },
		{ FCastingMachineAssetDescriptionJsonData::StaticStruct, Z_Construct_UScriptStruct_FCastingMachineAssetDescriptionJsonData_Statics::NewStructOps, TEXT("CastingMachineAssetDescriptionJsonData"), &Z_Registration_Info_UScriptStruct_CastingMachineAssetDescriptionJsonData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCastingMachineAssetDescriptionJsonData), 793363137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_2887300776(TEXT("/Script/VTMHotUpdate"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMCreateModDefine_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
