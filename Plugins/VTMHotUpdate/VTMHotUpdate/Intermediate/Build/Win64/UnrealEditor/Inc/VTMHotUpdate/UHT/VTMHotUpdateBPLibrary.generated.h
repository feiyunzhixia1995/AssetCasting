// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VTMHotUpdateBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USkeletalMeshComponent;
class UTexture2D;
struct FCastingMachineOutputJsonData;
struct FCooperateMPCChangeData;
struct FRuntimePakSettings;
#ifdef VTMHOTUPDATE_VTMHotUpdateBPLibrary_generated_h
#error "VTMHotUpdateBPLibrary.generated.h already included, missing '#pragma once' in VTMHotUpdateBPLibrary.h"
#endif
#define VTMHOTUPDATE_VTMHotUpdateBPLibrary_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execLoadTextureFromFile); \
	DECLARE_FUNCTION(execReadSkeletonStringCompFromJsonString); \
	DECLARE_FUNCTION(execReadSkeletonStringCompFromJsonPath); \
	DECLARE_FUNCTION(execRecoverySkeletonMeshCompFromJson); \
	DECLARE_FUNCTION(execRecoverySkeletonMeshCompFromPath); \
	DECLARE_FUNCTION(execIsEnableMPC); \
	DECLARE_FUNCTION(execGetAllAlphaImage); \
	DECLARE_FUNCTION(execChangeTargetCombin); \
	DECLARE_FUNCTION(execMakeCMJsonFromContainerData); \
	DECLARE_FUNCTION(execExecuteCMD); \
	DECLARE_FUNCTION(execRuntimeMakePakFile); \
	DECLARE_FUNCTION(execMakePakFile); \
	DECLARE_FUNCTION(execGetCurrnetVersion);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVTMHotUpdateBPLibrary(); \
	friend struct Z_Construct_UClass_UVTMHotUpdateBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVTMHotUpdateBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UVTMHotUpdateBPLibrary)


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVTMHotUpdateBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVTMHotUpdateBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVTMHotUpdateBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVTMHotUpdateBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVTMHotUpdateBPLibrary(UVTMHotUpdateBPLibrary&&); \
	UVTMHotUpdateBPLibrary(const UVTMHotUpdateBPLibrary&); \
public: \
	NO_API virtual ~UVTMHotUpdateBPLibrary();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_11_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_RPC_WRAPPERS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_INCLASS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UVTMHotUpdateBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_VTMHotUpdateBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
