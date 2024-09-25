// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FModDownloadData;
class AModControlActor;
struct FTransform;
#ifdef VTMHOTUPDATE_ModControlActor_generated_h
#error "ModControlActor.generated.h already included, missing '#pragma once' in ModControlActor.h"
#endif
#define VTMHOTUPDATE_ModControlActor_generated_h

#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_SPARSE_DATA
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsNeedReplicateMod); \
	DECLARE_FUNCTION(execOnReq_ModDownloadDataChange); \
	DECLARE_FUNCTION(execOnModActorDestory); \
	DECLARE_FUNCTION(execRegistModActorDestory); \
	DECLARE_FUNCTION(execRequestMod); \
	DECLARE_FUNCTION(execRequestModResource); \
	DECLARE_FUNCTION(execRequestModActor);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsNeedReplicateMod); \
	DECLARE_FUNCTION(execOnReq_ModDownloadDataChange); \
	DECLARE_FUNCTION(execOnModActorDestory); \
	DECLARE_FUNCTION(execRegistModActorDestory); \
	DECLARE_FUNCTION(execRequestMod); \
	DECLARE_FUNCTION(execRequestModResource); \
	DECLARE_FUNCTION(execRequestModActor);


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModControlActor(); \
	friend struct Z_Construct_UClass_AModControlActor_Statics; \
public: \
	DECLARE_CLASS(AModControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(AModControlActor) \
	virtual UObject* _getUObject() const override { return const_cast<AModControlActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModDownloadData=NETFIELD_REP_START, \
		ModsReplicateComponent, \
		ModRequestType, \
		NETFIELD_REP_END=ModRequestType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAModControlActor(); \
	friend struct Z_Construct_UClass_AModControlActor_Statics; \
public: \
	DECLARE_CLASS(AModControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VTMHotUpdate"), NO_API) \
	DECLARE_SERIALIZER(AModControlActor) \
	virtual UObject* _getUObject() const override { return const_cast<AModControlActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModDownloadData=NETFIELD_REP_START, \
		ModsReplicateComponent, \
		ModRequestType, \
		NETFIELD_REP_END=ModRequestType	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModControlActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModControlActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModControlActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModControlActor(AModControlActor&&); \
	NO_API AModControlActor(const AModControlActor&); \
public:


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModControlActor(AModControlActor&&); \
	NO_API AModControlActor(const AModControlActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModControlActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModControlActor)


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_PRIVATE_PROPERTY_OFFSET
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_16_PROLOG
#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_RPC_WRAPPERS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_INCLASS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_PRIVATE_PROPERTY_OFFSET \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_SPARSE_DATA \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_INCLASS_NO_PURE_DECLS \
	assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VTMHOTUPDATE_API UClass* StaticClass<class AModControlActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModControlActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
