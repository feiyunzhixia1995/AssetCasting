// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncDownloadFile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncDownloadFile;
class UObject;
#ifdef VTMHOTUPDATE_AsyncDownloadFile_generated_h
#error "AsyncDownloadFile.generated.h already included, missing '#pragma once' in AsyncDownloadFile.h"
#endif
#define VTMHOTUPDATE_AsyncDownloadFile_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_11_DELEGATE \
VTMHOTUPDATE_API void FHttpDownloadDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpDownloadDelegate, const FString& DestPathOrMsg, float Progress);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDownLoadHttpFile);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncDownloadFile(); \
	friend struct Z_Construct_UClass_UAsyncDownloadFile_Statics; \
public: \
	DECLARE_CLASS(UAsyncDownloadFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UAsyncDownloadFile)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncDownloadFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncDownloadFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncDownloadFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncDownloadFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncDownloadFile(UAsyncDownloadFile&&); \
	UAsyncDownloadFile(const UAsyncDownloadFile&); \
public: \
	NO_API virtual ~UAsyncDownloadFile();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_23_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UAsyncDownloadFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h


#define FOREACH_ENUM_ETASKSTATE(op) \
	op(ETaskState::_Ready) \
	op(ETaskState::_Downloading) \
	op(ETaskState::_Succees) \
	op(ETaskState::_Retry) \
	op(ETaskState::_Failed) 

enum class ETaskState : uint8;
template<> struct TIsUEnumClass<ETaskState> { enum { Value = true }; };
template<> VTMHOTUPDATE_API UEnum* StaticEnum<ETaskState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
