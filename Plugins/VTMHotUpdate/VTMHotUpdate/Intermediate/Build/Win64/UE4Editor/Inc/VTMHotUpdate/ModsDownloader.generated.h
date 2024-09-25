// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModDownloadData;
#ifdef VTMHOTUPDATE_ModsDownloader_generated_h
#error "ModsDownloader.generated.h already included, missing '#pragma once' in ModsDownloader.h"
#endif
#define VTMHOTUPDATE_ModsDownloader_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS \
	virtual void OnHttpDownloadCancel_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadProgress_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadFail_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadWait_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadSuccess_Implementation(const FString& DestPathOrMsg, float Progress); \
 \
	DECLARE_FUNCTION(execOnHttpDownloadCancel); \
	DECLARE_FUNCTION(execOnHttpDownloadProgress); \
	DECLARE_FUNCTION(execOnHttpDownloadFail); \
	DECLARE_FUNCTION(execOnHttpDownloadWait); \
	DECLARE_FUNCTION(execOnHttpDownloadSuccess); \
	DECLARE_FUNCTION(execRetryDownloadMod); \
	DECLARE_FUNCTION(execCancelDownloadMod); \
	DECLARE_FUNCTION(execDownloadMod);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnHttpDownloadCancel_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadProgress_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadFail_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadWait_Implementation(const FString& DestPathOrMsg, float Progress); \
	virtual void OnHttpDownloadSuccess_Implementation(const FString& DestPathOrMsg, float Progress); \
 \
	DECLARE_FUNCTION(execOnHttpDownloadCancel); \
	DECLARE_FUNCTION(execOnHttpDownloadProgress); \
	DECLARE_FUNCTION(execOnHttpDownloadFail); \
	DECLARE_FUNCTION(execOnHttpDownloadWait); \
	DECLARE_FUNCTION(execOnHttpDownloadSuccess); \
	DECLARE_FUNCTION(execRetryDownloadMod); \
	DECLARE_FUNCTION(execCancelDownloadMod); \
	DECLARE_FUNCTION(execDownloadMod);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_EVENT_PARMS \
	struct ModsDownloader_eventOnHttpDownloadCancel_Parms \
	{ \
		FString DestPathOrMsg; \
		float Progress; \
	}; \
	struct ModsDownloader_eventOnHttpDownloadFail_Parms \
	{ \
		FString DestPathOrMsg; \
		float Progress; \
	}; \
	struct ModsDownloader_eventOnHttpDownloadProgress_Parms \
	{ \
		FString DestPathOrMsg; \
		float Progress; \
	}; \
	struct ModsDownloader_eventOnHttpDownloadSuccess_Parms \
	{ \
		FString DestPathOrMsg; \
		float Progress; \
	}; \
	struct ModsDownloader_eventOnHttpDownloadWait_Parms \
	{ \
		FString DestPathOrMsg; \
		float Progress; \
	};


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_CALLBACK_WRAPPERS
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsDownloader(); \
	friend struct Z_Construct_UClass_UModsDownloader_Statics; \
public: \
	DECLARE_CLASS(UModsDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsDownloader)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUModsDownloader(); \
	friend struct Z_Construct_UClass_UModsDownloader_Statics; \
public: \
	DECLARE_CLASS(UModsDownloader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsDownloader)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsDownloader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsDownloader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsDownloader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsDownloader(UModsDownloader&&); \
	NO_API UModsDownloader(const UModsDownloader&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsDownloader(UModsDownloader&&); \
	NO_API UModsDownloader(const UModsDownloader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsDownloader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsDownloader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModsDownloader)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_PRIVATE_PROPERTY_OFFSET
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_13_PROLOG \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_EVENT_PARMS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_CALLBACK_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_CALLBACK_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsDownloader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsDownloader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
