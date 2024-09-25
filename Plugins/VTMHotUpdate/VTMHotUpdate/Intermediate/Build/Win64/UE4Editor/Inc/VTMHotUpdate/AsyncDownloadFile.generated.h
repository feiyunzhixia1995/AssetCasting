// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAsyncDownloadFile;
#ifdef VTMHOTUPDATE_AsyncDownloadFile_generated_h
#error "AsyncDownloadFile.generated.h already included, missing '#pragma once' in AsyncDownloadFile.h"
#endif
#define VTMHOTUPDATE_AsyncDownloadFile_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_11_DELEGATE \
struct _Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms \
{ \
	FString DestPathOrMsg; \
	float Progress; \
}; \
static inline void FHttpDownloadDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpDownloadDelegate, const FString& DestPathOrMsg, float Progress) \
{ \
	_Script_VTMHotUpdate_eventHttpDownloadDelegate_Parms Parms; \
	Parms.DestPathOrMsg=DestPathOrMsg; \
	Parms.Progress=Progress; \
	HttpDownloadDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownLoadHttpFile);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownLoadHttpFile);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncDownloadFile(); \
	friend struct Z_Construct_UClass_UAsyncDownloadFile_Statics; \
public: \
	DECLARE_CLASS(UAsyncDownloadFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UAsyncDownloadFile)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncDownloadFile(); \
	friend struct Z_Construct_UClass_UAsyncDownloadFile_Statics; \
public: \
	DECLARE_CLASS(UAsyncDownloadFile, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UAsyncDownloadFile)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncDownloadFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncDownloadFile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncDownloadFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncDownloadFile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncDownloadFile(UAsyncDownloadFile&&); \
	NO_API UAsyncDownloadFile(const UAsyncDownloadFile&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncDownloadFile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncDownloadFile(UAsyncDownloadFile&&); \
	NO_API UAsyncDownloadFile(const UAsyncDownloadFile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncDownloadFile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncDownloadFile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncDownloadFile)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(UAsyncDownloadFile, State); } \
	FORCEINLINE static uint32 __PPO__TryCount() { return STRUCT_OFFSET(UAsyncDownloadFile, TryCount); } \
	FORCEINLINE static uint32 __PPO__Url() { return STRUCT_OFFSET(UAsyncDownloadFile, Url); } \
	FORCEINLINE static uint32 __PPO__FileName() { return STRUCT_OFFSET(UAsyncDownloadFile, FileName); } \
	FORCEINLINE static uint32 __PPO__Directory() { return STRUCT_OFFSET(UAsyncDownloadFile, Directory); } \
	FORCEINLINE static uint32 __PPO__Progress() { return STRUCT_OFFSET(UAsyncDownloadFile, Progress); } \
	FORCEINLINE static uint32 __PPO__CurFileSize() { return STRUCT_OFFSET(UAsyncDownloadFile, CurFileSize); } \
	FORCEINLINE static uint32 __PPO__TotalFileSize() { return STRUCT_OFFSET(UAsyncDownloadFile, TotalFileSize); } \
	FORCEINLINE static uint32 __PPO__MaxTask() { return STRUCT_OFFSET(UAsyncDownloadFile, MaxTask); } \
	FORCEINLINE static uint32 __PPO__MD5Str() { return STRUCT_OFFSET(UAsyncDownloadFile, MD5Str); } \
	FORCEINLINE static uint32 __PPO__bClearCache() { return STRUCT_OFFSET(UAsyncDownloadFile, bClearCache); } \
	FORCEINLINE static uint32 __PPO__WaitResponse() { return STRUCT_OFFSET(UAsyncDownloadFile, WaitResponse); } \
	FORCEINLINE static uint32 __PPO__Mgr() { return STRUCT_OFFSET(UAsyncDownloadFile, Mgr); }


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_23_PROLOG
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncDownloadFile."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UAsyncDownloadFile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_AsyncDownloadFile_h


#define FOREACH_ENUM_ETASKSTATE(op) \
	op(ETaskState::_Ready) \
	op(ETaskState::_Downloading) \
	op(ETaskState::_Succees) \
	op(ETaskState::_Retry) \
	op(ETaskState::_Failed) 

enum class ETaskState : uint8;
template<> VTMHOTUPDATE_API UEnum* StaticEnum<ETaskState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
