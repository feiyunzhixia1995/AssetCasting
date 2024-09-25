// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdate_init() {}
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VTMHotUpdate;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VTMHotUpdate()
	{
		if (!Z_Registration_Info_UPackage__Script_VTMHotUpdate.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VTMHotUpdate",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2BF7AF88,
				0x70212A7A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VTMHotUpdate.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VTMHotUpdate.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VTMHotUpdate(Z_Construct_UPackage__Script_VTMHotUpdate, TEXT("/Script/VTMHotUpdate"), Z_Registration_Info_UPackage__Script_VTMHotUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2BF7AF88, 0x70212A7A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
