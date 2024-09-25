// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/VTMHotUpdateBPLibrary.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
#include "VTMHotUpdate/Public/VTMCreateModDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdateBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary_NoRegister();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings();
// End Cross Module References

// Begin Class UVTMHotUpdateBPLibrary Function ChangeTargetCombin
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics
{
	struct VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms
	{
		FString _combinStr;
		FString _jsonPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combinStr_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__jsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__combinStr;
	static const UECodeGen_Private::FStrPropertyParams NewProp__jsonPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr = { "_combinStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms, _combinStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combinStr_MetaData), NewProp__combinStr_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath = { "_jsonPath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms, _jsonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__jsonPath_MetaData), NewProp__jsonPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ChangeTargetCombin", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execChangeTargetCombin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__combinStr);
	P_GET_PROPERTY(FStrProperty,Z_Param__jsonPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::ChangeTargetCombin(Z_Param__combinStr,Z_Param__jsonPath);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function ChangeTargetCombin

// Begin Class UVTMHotUpdateBPLibrary Function ExecuteCMD
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics
{
	struct VTMHotUpdateBPLibrary_eventExecuteCMD_Parms
	{
		FString _cmd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__cmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd = { "_cmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventExecuteCMD_Parms, _cmd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__cmd_MetaData), NewProp__cmd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ExecuteCMD", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::VTMHotUpdateBPLibrary_eventExecuteCMD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::VTMHotUpdateBPLibrary_eventExecuteCMD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execExecuteCMD)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__cmd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::ExecuteCMD(Z_Param__cmd);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function ExecuteCMD

// Begin Class UVTMHotUpdateBPLibrary Function GetAllAlphaImage
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xe5\x9b\xbe\xe5\x83\x8f" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "GetAllAlphaImage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execGetAllAlphaImage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::GetAllAlphaImage();
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function GetAllAlphaImage

// Begin Class UVTMHotUpdateBPLibrary Function GetCurrnetVersion
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics
{
	struct VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VTMHotUpdate" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "GetCurrnetVersion", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execGetCurrnetVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVTMHotUpdateBPLibrary::GetCurrnetVersion();
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function GetCurrnetVersion

// Begin Class UVTMHotUpdateBPLibrary Function IsEnableMPC
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics
{
	struct VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms
	{
		FCooperateMPCChangeData _mpcCooperate;
		FCastingMachineOutputJsonData _desData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe6\x98\xaf\xe8\xa6\x81\xe9\x9c\x80\xe8\xa6\x81\xe6\x94\xb9\xe5\x8f\x98MPC" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__mpcCooperate;
	static const UECodeGen_Private::FStructPropertyParams NewProp__desData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__mpcCooperate = { "_mpcCooperate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms, _mpcCooperate), Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(0, nullptr) }; // 2061310919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__desData = { "_desData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms, _desData), Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, METADATA_PARAMS(0, nullptr) }; // 4068737037
void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__mpcCooperate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__desData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "IsEnableMPC", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execIsEnableMPC)
{
	P_GET_STRUCT(FCooperateMPCChangeData,Z_Param__mpcCooperate);
	P_GET_STRUCT(FCastingMachineOutputJsonData,Z_Param__desData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVTMHotUpdateBPLibrary::IsEnableMPC(Z_Param__mpcCooperate,Z_Param__desData);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function IsEnableMPC

// Begin Class UVTMHotUpdateBPLibrary Function LoadTextureFromFile
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics
{
	struct VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms
	{
		FString ImagePath;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe8\xaf\xbb\xe5\x8f\x96png\xe5\x9b\xbe\xe7\x89\x87\xe4\xb8\xbatexture2d" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms, ImagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImagePath_MetaData), NewProp_ImagePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "LoadTextureFromFile", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execLoadTextureFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UVTMHotUpdateBPLibrary::LoadTextureFromFile(Z_Param_ImagePath);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function LoadTextureFromFile

// Begin Class UVTMHotUpdateBPLibrary Function MakeCMJsonFromContainerData
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics
{
	struct VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms
	{
		TArray<FString> _allcombinStr;
		FString _outJsonPath;
		FString _jsonName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__outJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__jsonName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__allcombinStr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__allcombinStr;
	static const UECodeGen_Private::FStrPropertyParams NewProp__outJsonPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp__jsonName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr_Inner = { "_allcombinStr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr = { "_allcombinStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _allcombinStr), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath = { "_outJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _outJsonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__outJsonPath_MetaData), NewProp__outJsonPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName = { "_jsonName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _jsonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__jsonName_MetaData), NewProp__jsonName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "MakeCMJsonFromContainerData", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execMakeCMJsonFromContainerData)
{
	P_GET_TARRAY(FString,Z_Param__allcombinStr);
	P_GET_PROPERTY(FStrProperty,Z_Param__outJsonPath);
	P_GET_PROPERTY(FStrProperty,Z_Param__jsonName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::MakeCMJsonFromContainerData(Z_Param__allcombinStr,Z_Param__outJsonPath,Z_Param__jsonName);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function MakeCMJsonFromContainerData

// Begin Class UVTMHotUpdateBPLibrary Function MakePakFile
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics
{
	struct VTMHotUpdateBPLibrary_eventMakePakFile_Parms
	{
		TArray<FString> _pakDirectorys;
		TArray<FString> _pakFiles;
		TArray<FString> _primaryAssets;
		TArray<FString> _excludeFilter;
		FString _pakName;
		FString _downloadUrl;
		FString _outputPath;
		FString _platform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VTMPakTool" },
		{ "CPP_Default__downloadUrl", "Default" },
		{ "CPP_Default__outputPath", "Default" },
		{ "CPP_Default__platform", "Win64" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pakDirectorys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pakFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__primaryAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__excludeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__pakName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__outputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__pakDirectorys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__pakDirectorys;
	static const UECodeGen_Private::FStrPropertyParams NewProp__pakFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__pakFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp__primaryAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__primaryAssets;
	static const UECodeGen_Private::FStrPropertyParams NewProp__excludeFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__excludeFilter;
	static const UECodeGen_Private::FStrPropertyParams NewProp__pakName;
	static const UECodeGen_Private::FStrPropertyParams NewProp__downloadUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp__outputPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp__platform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_Inner = { "_pakDirectorys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys = { "_pakDirectorys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakDirectorys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pakDirectorys_MetaData), NewProp__pakDirectorys_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_Inner = { "_pakFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles = { "_pakFiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pakFiles_MetaData), NewProp__pakFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_Inner = { "_primaryAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets = { "_primaryAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _primaryAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__primaryAssets_MetaData), NewProp__primaryAssets_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_Inner = { "_excludeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter = { "_excludeFilter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _excludeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__excludeFilter_MetaData), NewProp__excludeFilter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName = { "_pakName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__pakName_MetaData), NewProp__pakName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl = { "_downloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _downloadUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadUrl_MetaData), NewProp__downloadUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath = { "_outputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _outputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__outputPath_MetaData), NewProp__outputPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform = { "_platform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _platform), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__platform_MetaData), NewProp__platform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "MakePakFile", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::VTMHotUpdateBPLibrary_eventMakePakFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::VTMHotUpdateBPLibrary_eventMakePakFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execMakePakFile)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out__pakDirectorys);
	P_GET_TARRAY_REF(FString,Z_Param_Out__pakFiles);
	P_GET_TARRAY_REF(FString,Z_Param_Out__primaryAssets);
	P_GET_TARRAY_REF(FString,Z_Param_Out__excludeFilter);
	P_GET_PROPERTY(FStrProperty,Z_Param__pakName);
	P_GET_PROPERTY(FStrProperty,Z_Param__downloadUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param__outputPath);
	P_GET_PROPERTY(FStrProperty,Z_Param__platform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::MakePakFile(Z_Param_Out__pakDirectorys,Z_Param_Out__pakFiles,Z_Param_Out__primaryAssets,Z_Param_Out__excludeFilter,Z_Param__pakName,Z_Param__downloadUrl,Z_Param__outputPath,Z_Param__platform);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function MakePakFile

// Begin Class UVTMHotUpdateBPLibrary Function ReadSkeletonStringCompFromJsonPath
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics
{
	struct VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms
	{
		FString _combinJsonPath;
		UObject* _Instigate;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe8\xaf\xbb\xe5\x8f\x96\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combinJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__combinJsonPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Instigate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath = { "_combinJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, _combinJsonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combinJsonPath_MetaData), NewProp__combinJsonPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__Instigate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ReadSkeletonStringCompFromJsonPath", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execReadSkeletonStringCompFromJsonPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__combinJsonPath);
	P_GET_OBJECT(UObject,Z_Param__Instigate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVTMHotUpdateBPLibrary::ReadSkeletonStringCompFromJsonPath(Z_Param__combinJsonPath,Z_Param__Instigate);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function ReadSkeletonStringCompFromJsonPath

// Begin Class UVTMHotUpdateBPLibrary Function ReadSkeletonStringCompFromJsonString
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics
{
	struct VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms
	{
		FString _combinJson;
		UObject* _Instigate;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe8\xaf\xbb\xe5\x8f\x96\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combinJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__combinJson;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Instigate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson = { "_combinJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, _combinJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combinJson_MetaData), NewProp__combinJson_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__Instigate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ReadSkeletonStringCompFromJsonString", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execReadSkeletonStringCompFromJsonString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__combinJson);
	P_GET_OBJECT(UObject,Z_Param__Instigate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVTMHotUpdateBPLibrary::ReadSkeletonStringCompFromJsonString(Z_Param__combinJson,Z_Param__Instigate);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function ReadSkeletonStringCompFromJsonString

// Begin Class UVTMHotUpdateBPLibrary Function RecoverySkeletonMeshCompFromJson
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics
{
	struct VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms
	{
		USkeletalMeshComponent* _skeletalMeshComp;
		FString _combinJsonStr;
		UObject* _Instigate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe5\xa4\x8d\xe5\x8e\x9f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combinJsonStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComp;
	static const UECodeGen_Private::FStrPropertyParams NewProp__combinJsonStr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Instigate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp = { "_skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__skeletalMeshComp_MetaData), NewProp__skeletalMeshComp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr = { "_combinJsonStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _combinJsonStr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combinJsonStr_MetaData), NewProp__combinJsonStr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__Instigate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RecoverySkeletonMeshCompFromJson", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execRecoverySkeletonMeshCompFromJson)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param__skeletalMeshComp);
	P_GET_PROPERTY(FStrProperty,Z_Param__combinJsonStr);
	P_GET_OBJECT(UObject,Z_Param__Instigate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVTMHotUpdateBPLibrary::RecoverySkeletonMeshCompFromJson(Z_Param__skeletalMeshComp,Z_Param__combinJsonStr,Z_Param__Instigate);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function RecoverySkeletonMeshCompFromJson

// Begin Class UVTMHotUpdateBPLibrary Function RecoverySkeletonMeshCompFromPath
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics
{
	struct VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms
	{
		USkeletalMeshComponent* _skeletalMeshComp;
		FString _combinJsonPath;
		UObject* _Instigate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe5\xa4\x8d\xe5\x8e\x9f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__combinJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComp;
	static const UECodeGen_Private::FStrPropertyParams NewProp__combinJsonPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Instigate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp = { "_skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__skeletalMeshComp_MetaData), NewProp__skeletalMeshComp_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath = { "_combinJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _combinJsonPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__combinJsonPath_MetaData), NewProp__combinJsonPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__Instigate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RecoverySkeletonMeshCompFromPath", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execRecoverySkeletonMeshCompFromPath)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param__skeletalMeshComp);
	P_GET_PROPERTY(FStrProperty,Z_Param__combinJsonPath);
	P_GET_OBJECT(UObject,Z_Param__Instigate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVTMHotUpdateBPLibrary::RecoverySkeletonMeshCompFromPath(Z_Param__skeletalMeshComp,Z_Param__combinJsonPath,Z_Param__Instigate);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function RecoverySkeletonMeshCompFromPath

// Begin Class UVTMHotUpdateBPLibrary Function RuntimeMakePakFile
struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics
{
	struct VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms
	{
		FRuntimePakSettings _runimtPakSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VTMPakTool" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__runimtPakSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__runimtPakSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings = { "_runimtPakSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms, _runimtPakSettings), Z_Construct_UScriptStruct_FRuntimePakSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__runimtPakSettings_MetaData), NewProp__runimtPakSettings_MetaData) }; // 2177196352
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RuntimeMakePakFile", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execRuntimeMakePakFile)
{
	P_GET_STRUCT_REF(FRuntimePakSettings,Z_Param_Out__runimtPakSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVTMHotUpdateBPLibrary::RuntimeMakePakFile(Z_Param_Out__runimtPakSettings);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateBPLibrary Function RuntimeMakePakFile

// Begin Class UVTMHotUpdateBPLibrary
void UVTMHotUpdateBPLibrary::StaticRegisterNativesUVTMHotUpdateBPLibrary()
{
	UClass* Class = UVTMHotUpdateBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeTargetCombin", &UVTMHotUpdateBPLibrary::execChangeTargetCombin },
		{ "ExecuteCMD", &UVTMHotUpdateBPLibrary::execExecuteCMD },
		{ "GetAllAlphaImage", &UVTMHotUpdateBPLibrary::execGetAllAlphaImage },
		{ "GetCurrnetVersion", &UVTMHotUpdateBPLibrary::execGetCurrnetVersion },
		{ "IsEnableMPC", &UVTMHotUpdateBPLibrary::execIsEnableMPC },
		{ "LoadTextureFromFile", &UVTMHotUpdateBPLibrary::execLoadTextureFromFile },
		{ "MakeCMJsonFromContainerData", &UVTMHotUpdateBPLibrary::execMakeCMJsonFromContainerData },
		{ "MakePakFile", &UVTMHotUpdateBPLibrary::execMakePakFile },
		{ "ReadSkeletonStringCompFromJsonPath", &UVTMHotUpdateBPLibrary::execReadSkeletonStringCompFromJsonPath },
		{ "ReadSkeletonStringCompFromJsonString", &UVTMHotUpdateBPLibrary::execReadSkeletonStringCompFromJsonString },
		{ "RecoverySkeletonMeshCompFromJson", &UVTMHotUpdateBPLibrary::execRecoverySkeletonMeshCompFromJson },
		{ "RecoverySkeletonMeshCompFromPath", &UVTMHotUpdateBPLibrary::execRecoverySkeletonMeshCompFromPath },
		{ "RuntimeMakePakFile", &UVTMHotUpdateBPLibrary::execRuntimeMakePakFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVTMHotUpdateBPLibrary);
UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary_NoRegister()
{
	return UVTMHotUpdateBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VTMHotUpdateBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin, "ChangeTargetCombin" }, // 152058337
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD, "ExecuteCMD" }, // 2057486860
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage, "GetAllAlphaImage" }, // 1883437341
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion, "GetCurrnetVersion" }, // 3041804717
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC, "IsEnableMPC" }, // 3087243826
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile, "LoadTextureFromFile" }, // 2824548086
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData, "MakeCMJsonFromContainerData" }, // 433676102
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile, "MakePakFile" }, // 1853939288
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath, "ReadSkeletonStringCompFromJsonPath" }, // 2198672642
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString, "ReadSkeletonStringCompFromJsonString" }, // 1448614441
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson, "RecoverySkeletonMeshCompFromJson" }, // 1234396819
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath, "RecoverySkeletonMeshCompFromPath" }, // 1221736066
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile, "RuntimeMakePakFile" }, // 1262510949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVTMHotUpdateBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::ClassParams = {
	&UVTMHotUpdateBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary()
{
	if (!Z_Registration_Info_UClass_UVTMHotUpdateBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVTMHotUpdateBPLibrary.OuterSingleton, Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVTMHotUpdateBPLibrary.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UVTMHotUpdateBPLibrary>()
{
	return UVTMHotUpdateBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVTMHotUpdateBPLibrary);
UVTMHotUpdateBPLibrary::~UVTMHotUpdateBPLibrary() {}
// End Class UVTMHotUpdateBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVTMHotUpdateBPLibrary, UVTMHotUpdateBPLibrary::StaticClass, TEXT("UVTMHotUpdateBPLibrary"), &Z_Registration_Info_UClass_UVTMHotUpdateBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVTMHotUpdateBPLibrary), 4054541634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_3676546558(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
