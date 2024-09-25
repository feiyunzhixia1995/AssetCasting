// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModsDownloader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModDownloadData;
#ifdef VTMHOTUPDATE_ModsDownloader_generated_h
#error "ModsDownloader.generated.h already included, missing '#pragma once' in ModsDownloader.h"
#endif
#define VTMHOTUPDATE_ModsDownloader_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnHttpDownloadCancel_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadProgress_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadFail_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadWait_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadSuccess_Implementation(const FString& DestPathOrMsg, float Progress); \
	DECLARE_FUNCTION(execOnHttpDownloadCancel); \
	DECLARE_FUNCTION(execOnHttpDownloadProgress); \
	DECLARE_FUNCTION(execOnHttpDownloadFail); \
	DECLARE_FUNCTION(execOnHttpDownloadWait); \
	DECLARE_FUNCTION(execOnHttpDownloadSuccess); \
	DECLARE_FUNCTION(execRetryDownloadMod); \
	DECLARE_FUNCTION(execCancelDownloadMod); \
	DECLARE_FUNCTION(execDownloadMod);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_CALLBACK_WRAPPERS
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsDownloader(); \
	friend struct Z_Construct_UClass_UModsDownloader_Statics; \
public: \
	DECLARE_CLASS(UModsDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsDownloader)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModsDownloader(UModsDownloader&&); \
	UModsDownloader(const UModsDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModsDownloader)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_13_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_CALLBACK_WRAPPERS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS_NO_PURE_DECLS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
