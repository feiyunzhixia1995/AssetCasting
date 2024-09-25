// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModData;
struct FModDownloadData;
struct FReconnectStruct;
#ifdef VTMHOTUPDATE_ModsReplicateComponent_generated_h
#error "ModsReplicateComponent.generated.h already included, missing '#pragma once' in ModsReplicateComponent.h"
#endif
#define VTMHOTUPDATE_ModsReplicateComponent_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_RPC_WRAPPERS \
	virtual void RequestLoadResouceFormMod_Implementation(FModDownloadData const& _downloadData); \
	virtual void ClientsRegistModObjGuidCache_Implementation(FReconnectStruct const& _reconnectData); \
	virtual void TellServerClientDownloadModFinished_Implementation(FModDownloadData const& _downloadData); \
	virtual void MulticastClientsDownloadMod_Implementation(FModDownloadData const& _downloadData); \
 \
	DECLARE_FUNCTION(execOnClientDownloadFinish); \
	DECLARE_FUNCTION(execRequestLoadResouceFormModLocal); \
	DECLARE_FUNCTION(execRequestLoadResouceFormMod); \
	DECLARE_FUNCTION(execClientsRegistModObjGuidCache); \
	DECLARE_FUNCTION(execTellServerClientDownloadModFinished); \
	DECLARE_FUNCTION(execMulticastClientsDownloadMod);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RequestLoadResouceFormMod_Implementation(FModDownloadData const& _downloadData); \
	virtual void ClientsRegistModObjGuidCache_Implementation(FReconnectStruct const& _reconnectData); \
	virtual void TellServerClientDownloadModFinished_Implementation(FModDownloadData const& _downloadData); \
	virtual void MulticastClientsDownloadMod_Implementation(FModDownloadData const& _downloadData); \
 \
	DECLARE_FUNCTION(execOnClientDownloadFinish); \
	DECLARE_FUNCTION(execRequestLoadResouceFormModLocal); \
	DECLARE_FUNCTION(execRequestLoadResouceFormMod); \
	DECLARE_FUNCTION(execClientsRegistModObjGuidCache); \
	DECLARE_FUNCTION(execTellServerClientDownloadModFinished); \
	DECLARE_FUNCTION(execMulticastClientsDownloadMod);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_EVENT_PARMS \
	struct ModsReplicateComponent_eventClientsRegistModObjGuidCache_Parms \
	{ \
		FReconnectStruct _reconnectData; \
	}; \
	struct ModsReplicateComponent_eventMulticastClientsDownloadMod_Parms \
	{ \
		FModDownloadData _downloadData; \
	}; \
	struct ModsReplicateComponent_eventRequestLoadResouceFormMod_Parms \
	{ \
		FModDownloadData _downloadData; \
	}; \
	struct ModsReplicateComponent_eventTellServerClientDownloadModFinished_Parms \
	{ \
		FModDownloadData _downloadData; \
	};


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_CALLBACK_WRAPPERS
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModsReplicateComponent(); \
	friend struct Z_Construct_UClass_UModsReplicateComponent_Statics; \
public: \
	DECLARE_CLASS(UModsReplicateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsReplicateComponent)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUModsReplicateComponent(); \
	friend struct Z_Construct_UClass_UModsReplicateComponent_Statics; \
public: \
	DECLARE_CLASS(UModsReplicateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(UModsReplicateComponent)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModsReplicateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModsReplicateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsReplicateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsReplicateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsReplicateComponent(UModsReplicateComponent&&); \
	NO_API UModsReplicateComponent(const UModsReplicateComponent&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModsReplicateComponent(UModsReplicateComponent&&); \
	NO_API UModsReplicateComponent(const UModsReplicateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModsReplicateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModsReplicateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModsReplicateComponent)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_12_PROLOG \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_EVENT_PARMS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_CALLBACK_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_CALLBACK_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class UModsReplicateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsReplicateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
