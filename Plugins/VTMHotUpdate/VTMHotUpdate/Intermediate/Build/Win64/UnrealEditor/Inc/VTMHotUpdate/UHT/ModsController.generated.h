// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModsController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModDownloadData;
#ifdef VTMHOTUPDATE_ModsController_generated_h
#error "ModsController.generated.h already included, missing '#pragma once' in ModsController.h"
#endif
#define VTMHOTUPDATE_ModsController_generated_h

#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBpRequestLoadResouceFormModLocal); \
	DECLARE_FUNCTION(execBpRequestLoadResouceFormMod);


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAModsController(); \
	friend struct Z_Construct_UClass_AModsController_Statics; \
public: \
	DECLARE_CLASS(AModsController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(AModsController) \
	virtual UObject* _getUObject() const override { return const_cast<AModsController*>(this); }


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModsController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModsController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModsController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModsController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModsController(AModsController&&); \
	AModsController(const AModsController&); \
public: \
	NO_API virtual ~AModsController();


#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_21_PROLOG
#define FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_RPC_WRAPPERS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_INCLASS \
	FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class AModsController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
