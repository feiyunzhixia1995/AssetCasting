// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/VTMHotUpdateBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdateBPLibrary() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCooperateMPCChangeData();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FCastingMachineOutputJsonData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimePakSettings();
// End Cross Module References
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execLoadTextureFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVTMHotUpdateBPLibrary::LoadTextureFromFile(Z_Param_ImagePath);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execReadSkeletonStringCompFromJsonPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__combinJsonPath);
		P_GET_OBJECT(UObject,Z_Param__Instigate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVTMHotUpdateBPLibrary::ReadSkeletonStringCompFromJsonPath(Z_Param__combinJsonPath,Z_Param__Instigate);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execIsEnableMPC)
	{
		P_GET_STRUCT(FCooperateMPCChangeData,Z_Param__mpcCooperate);
		P_GET_STRUCT(FCastingMachineOutputJsonData,Z_Param__desData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVTMHotUpdateBPLibrary::IsEnableMPC(Z_Param__mpcCooperate,Z_Param__desData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execGetAllAlphaImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVTMHotUpdateBPLibrary::GetAllAlphaImage();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execExecuteCMD)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVTMHotUpdateBPLibrary::ExecuteCMD(Z_Param__cmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execRuntimeMakePakFile)
	{
		P_GET_STRUCT_REF(FRuntimePakSettings,Z_Param_Out__runimtPakSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVTMHotUpdateBPLibrary::RuntimeMakePakFile(Z_Param_Out__runimtPakSettings);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UVTMHotUpdateBPLibrary::execGetCurrnetVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVTMHotUpdateBPLibrary::GetCurrnetVersion();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics
	{
		struct VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms
		{
			FString _combinStr;
			FString _jsonPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combinStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__combinStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jsonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__jsonPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr = { "_combinStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms, _combinStr), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath = { "_jsonPath", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms, _jsonPath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__combinStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::NewProp__jsonPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ChangeTargetCombin", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventChangeTargetCombin_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics
	{
		struct VTMHotUpdateBPLibrary_eventExecuteCMD_Parms
		{
			FString _cmd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cmd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd = { "_cmd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventExecuteCMD_Parms, _cmd), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::NewProp__cmd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ExecuteCMD", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventExecuteCMD_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\x80\x8f\xe6\x98\x8e\xe5\xba\xa6\xe5\x9b\xbe\xe5\x83\x8f" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "GetAllAlphaImage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics
	{
		struct VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VTMHotUpdate" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "GetCurrnetVersion", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventGetCurrnetVersion_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics
	{
		struct VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms
		{
			FCooperateMPCChangeData _mpcCooperate;
			FCastingMachineOutputJsonData _desData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__mpcCooperate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__desData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__mpcCooperate = { "_mpcCooperate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms, _mpcCooperate), Z_Construct_UScriptStruct_FCooperateMPCChangeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__desData = { "_desData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms, _desData), Z_Construct_UScriptStruct_FCastingMachineOutputJsonData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__mpcCooperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp__desData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\x98\xaf\xe8\xa6\x81\xe9\x9c\x80\xe8\xa6\x81\xe6\x94\xb9\xe5\x8f\x98MPC" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "IsEnableMPC", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventIsEnableMPC_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics
	{
		struct VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms
		{
			FString ImagePath;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe8\xaf\xbb\xe5\x8f\x96png\xe5\x9b\xbe\xe7\x89\x87\xe4\xb8\xbatexture2d" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "LoadTextureFromFile", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventLoadTextureFromFile_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics
	{
		struct VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms
		{
			TArray<FString> _allcombinStr;
			FString _outJsonPath;
			FString _jsonName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__allcombinStr_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__allcombinStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outJsonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outJsonPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__jsonName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__jsonName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr_Inner = { "_allcombinStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr = { "_allcombinStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _allcombinStr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath = { "_outJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _outJsonPath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName = { "_jsonName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms, _jsonName), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__allcombinStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__outJsonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::NewProp__jsonName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "MakeCMJsonFromContainerData", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventMakeCMJsonFromContainerData_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pakDirectorys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pakDirectorys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pakDirectorys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pakFiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pakFiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pakFiles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__primaryAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__primaryAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__primaryAssets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__excludeFilter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__excludeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__excludeFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pakName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__pakName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__downloadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outputPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outputPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__platform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_Inner = { "_pakDirectorys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys = { "_pakDirectorys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakDirectorys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_Inner = { "_pakFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles = { "_pakFiles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakFiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_Inner = { "_primaryAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets = { "_primaryAssets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _primaryAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_Inner = { "_excludeFilter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter = { "_excludeFilter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _excludeFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName = { "_pakName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _pakName), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl = { "_downloadUrl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _downloadUrl), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath = { "_outputPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _outputPath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform = { "_platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventMakePakFile_Parms, _platform), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakDirectorys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__primaryAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__excludeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__pakName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__downloadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__outputPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::NewProp__platform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VTMPakTool" },
		{ "CPP_Default__downloadUrl", "Default" },
		{ "CPP_Default__outputPath", "Default" },
		{ "CPP_Default__platform", "Win64" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "MakePakFile", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventMakePakFile_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics
	{
		struct VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms
		{
			FString _combinJsonPath;
			UObject* _Instigate;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combinJsonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__combinJsonPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Instigate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath = { "_combinJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, _combinJsonPath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__combinJsonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp__Instigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe8\xaf\xbb\xe5\x8f\x96\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ReadSkeletonStringCompFromJsonPath", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonPath_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics
	{
		struct VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms
		{
			FString _combinJson;
			UObject* _Instigate;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combinJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__combinJson;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Instigate;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson = { "_combinJson", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, _combinJson), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__combinJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp__Instigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe8\xaf\xbb\xe5\x8f\x96\xe9\xaa\xa8\xe9\xaa\xbc\xe8\xb7\xaf\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "ReadSkeletonStringCompFromJsonString", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventReadSkeletonStringCompFromJsonString_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combinJsonStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__combinJsonStr;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Instigate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp = { "_skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr = { "_combinJsonStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _combinJsonStr), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__skeletalMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__combinJsonStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp__Instigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe5\xa4\x8d\xe5\x8e\x9f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RecoverySkeletonMeshCompFromJson", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromJson_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__skeletalMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__skeletalMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__combinJsonPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__combinJsonPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Instigate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp = { "_skeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _skeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath = { "_combinJsonPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _combinJsonPath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__Instigate = { "_Instigate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms, _Instigate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms), &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__skeletalMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__combinJsonPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp__Instigate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "\xe6\xa0\xb9\xe6\x8d\xaeJson\xe6\x95\xb0\xe6\x8d\xae \xe5\xa4\x8d\xe5\x8e\x9f\xe9\xaa\xa8\xe9\xaa\xbc\xe6\x9d\x90\xe8\xb4\xa8" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RecoverySkeletonMeshCompFromPath", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventRecoverySkeletonMeshCompFromPath_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics
	{
		struct VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms
		{
			FRuntimePakSettings _runimtPakSettings;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__runimtPakSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__runimtPakSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings = { "_runimtPakSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms, _runimtPakSettings), Z_Construct_UScriptStruct_FRuntimePakSettings, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::NewProp__runimtPakSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VTMPakTool" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateBPLibrary, nullptr, "RuntimeMakePakFile", nullptr, nullptr, sizeof(VTMHotUpdateBPLibrary_eventRuntimeMakePakFile_Parms), Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary_NoRegister()
	{
		return UVTMHotUpdateBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ChangeTargetCombin, "ChangeTargetCombin" }, // 2920062758
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ExecuteCMD, "ExecuteCMD" }, // 3785825659
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetAllAlphaImage, "GetAllAlphaImage" }, // 1216060023
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_GetCurrnetVersion, "GetCurrnetVersion" }, // 1643323876
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_IsEnableMPC, "IsEnableMPC" }, // 2429178897
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_LoadTextureFromFile, "LoadTextureFromFile" }, // 3565637466
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakeCMJsonFromContainerData, "MakeCMJsonFromContainerData" }, // 2596253500
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_MakePakFile, "MakePakFile" }, // 1976086747
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonPath, "ReadSkeletonStringCompFromJsonPath" }, // 738053221
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_ReadSkeletonStringCompFromJsonString, "ReadSkeletonStringCompFromJsonString" }, // 4213802669
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromJson, "RecoverySkeletonMeshCompFromJson" }, // 2653979353
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RecoverySkeletonMeshCompFromPath, "RecoverySkeletonMeshCompFromPath" }, // 2851900214
		{ &Z_Construct_UFunction_UVTMHotUpdateBPLibrary_RuntimeMakePakFile, "RuntimeMakePakFile" }, // 566440876
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VTMHotUpdateBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VTMHotUpdateBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVTMHotUpdateBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVTMHotUpdateBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVTMHotUpdateBPLibrary, 1565539549);
	template<> VTMHOTUPDATE_API UClass* StaticClass<UVTMHotUpdateBPLibrary>()
	{
		return UVTMHotUpdateBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVTMHotUpdateBPLibrary(Z_Construct_UClass_UVTMHotUpdateBPLibrary, &UVTMHotUpdateBPLibrary::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("UVTMHotUpdateBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVTMHotUpdateBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
