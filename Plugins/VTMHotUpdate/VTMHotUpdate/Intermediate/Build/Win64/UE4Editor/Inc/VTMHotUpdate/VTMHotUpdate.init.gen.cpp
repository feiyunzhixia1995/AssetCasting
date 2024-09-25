// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdate_init() {}
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_HttpDownloadDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_SpawnModActorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_LoadModResourceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_ModDownloadProgresstDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/VTMHotUpdate",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x612092B5,
				0x1C619935,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
