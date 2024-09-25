// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsManager.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsDownloader_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsManager();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsManager_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsSetting();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsSetting_NoRegister();
VTMHOTUPDATE_API UEnum* Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FLodModsStruct();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDependenciesObjData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModObjData();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FReconnectStruct();
// End Cross Module References

// Begin Class UModsSetting
void UModsSetting::StaticRegisterNativesUModsSetting()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModsSetting);
UClass* Z_Construct_UClass_UModsSetting_NoRegister()
{
	return UModsSetting::StaticClass();
}
struct Z_Construct_UClass_UModsSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ModsSetting" },
		{ "IncludePath", "ModsManager.h" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadModSetting_MetaData[] = {
		{ "Category", "Config | ModsSetting" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadModSetting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsSetting>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting = { "LoadModSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsSetting, LoadModSetting), Z_Construct_UScriptStruct_FLodModsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadModSetting_MetaData), NewProp_LoadModSetting_MetaData) }; // 3105176559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsSetting_Statics::NewProp_LoadModSetting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModsSetting_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModsSetting_Statics::ClassParams = {
	&UModsSetting::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModsSetting_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModsSetting_Statics::Class_MetaDataParams), Z_Construct_UClass_UModsSetting_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModsSetting()
{
	if (!Z_Registration_Info_UClass_UModsSetting.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModsSetting.OuterSingleton, Z_Construct_UClass_UModsSetting_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModsSetting.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UModsSetting>()
{
	return UModsSetting::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModsSetting);
UModsSetting::~UModsSetting() {}
// End Class UModsSetting

// Begin Delegate FDownloadModProgressDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__state;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__state_MetaData), NewProp__state_MetaData) }; // 175813423
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModProgressDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadModProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadModProgressDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	struct _Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
	_Script_VTMHotUpdate_eventDownloadModProgressDelegate_Parms Parms;
	Parms._modDownloadData=_modDownloadData;
	Parms._state=_state;
	Parms._progress=_progress;
	DownloadModProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDownloadModProgressDelegate

// Begin Delegate FDownloadModProgressSingleDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__state_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FBytePropertyParams NewProp__state;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _state), Z_Construct_UEnum_VTMHotUpdate_EHotUpdateState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__state_MetaData), NewProp__state_MetaData) }; // 175813423
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModProgressSingleDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadModProgressSingleDelegate_DelegateWrapper(const FScriptDelegate& DownloadModProgressSingleDelegate, FModDownloadData const& _modDownloadData, TEnumAsByte<EHotUpdateState> const& _state, float const& _progress)
{
	struct _Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms
	{
		FModDownloadData _modDownloadData;
		TEnumAsByte<EHotUpdateState> _state;
		float _progress;
	};
	_Script_VTMHotUpdate_eventDownloadModProgressSingleDelegate_Parms Parms;
	Parms._modDownloadData=_modDownloadData;
	Parms._state=_state;
	Parms._progress=_progress;
	DownloadModProgressSingleDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDownloadModProgressSingleDelegate

// Begin Delegate FDownloadModResultDelegate
struct Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics
{
	struct _Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms
	{
		FModData _modData;
		bool result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modData;
	static void NewProp_result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData = { "_modData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms, _modData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modData_MetaData), NewProp__modData_MetaData) }; // 100364597
void Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_SetBit(void* Obj)
{
	((_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms*)Obj)->result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms), &Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_result_MetaData), NewProp_result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp__modData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::NewProp_result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VTMHotUpdate, nullptr, "DownloadModResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDownloadModResultDelegate_DelegateWrapper(const FScriptDelegate& DownloadModResultDelegate, FModData const& _modData, bool result)
{
	struct _Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms
	{
		FModData _modData;
		bool result;
	};
	_Script_VTMHotUpdate_eventDownloadModResultDelegate_Parms Parms;
	Parms._modData=_modData;
	Parms.result=result ? true : false;
	DownloadModResultDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDownloadModResultDelegate

// Begin Class UModsManager Function BegingDownloadMod
struct Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics
{
	struct ModsManager_eventBegingDownloadMod_Parms
	{
		UModsDownloader* _modDownloader;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xae\xb0\xe5\xbd\x95\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84Mod\n/// </summary>\n/// <param name=\"_modDownloader\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xae\xb0\xe5\xbd\x95\xe5\xbc\x80\xe5\xa7\x8b\xe4\xb8\x8b\xe8\xbd\xbd\xe7\x9a\x84Mod\n</summary>\n<param name=\"_modDownloader\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__modDownloader;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp__modDownloader = { "_modDownloader", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBegingDownloadMod_Parms, _modDownloader), Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModsManager_eventBegingDownloadMod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModsManager_eventBegingDownloadMod_Parms), &Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp__modDownloader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BegingDownloadMod", nullptr, nullptr, Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::ModsManager_eventBegingDownloadMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::ModsManager_eventBegingDownloadMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_BegingDownloadMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_BegingDownloadMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execBegingDownloadMod)
{
	P_GET_OBJECT(UModsDownloader,Z_Param__modDownloader);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BegingDownloadMod(Z_Param__modDownloader);
	P_NATIVE_END;
}
// End Class UModsManager Function BegingDownloadMod

// Begin Class UModsManager Function BpLoadModResouce
struct Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics
{
	struct ModsManager_eventBpLoadModResouce_Parms
	{
		FString ModObjId;
		FString ModID;
		AActor* Instigator;
		UObject* Outer;
		FString Name;
		FString Filename;
		int32 LoadFlags;
		UPackageMap* Sandbox;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Filename", "" },
		{ "CPP_Default_LoadFlags", "0" },
		{ "CPP_Default_Sandbox", "None" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModObjId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModObjId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadFlags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sandbox;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId = { "ModObjId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ModObjId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModObjId_MetaData), NewProp_ModObjId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID = { "ModID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ModID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModID_MetaData), NewProp_ModID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_LoadFlags = { "LoadFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, LoadFlags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, Sandbox), Z_Construct_UClass_UPackageMap, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpLoadModResouce_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModObjId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ModID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_LoadFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_Sandbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BpLoadModResouce", nullptr, nullptr, Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::ModsManager_eventBpLoadModResouce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::ModsManager_eventBpLoadModResouce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_BpLoadModResouce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_BpLoadModResouce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execBpLoadModResouce)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModObjId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModID);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FIntProperty,Z_Param_LoadFlags);
	P_GET_OBJECT(UPackageMap,Z_Param_Sandbox);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=UModsManager::BpLoadModResouce(Z_Param_ModObjId,Z_Param_ModID,Z_Param_Instigator,Z_Param_Outer,Z_Param_Name,Z_Param_Filename,Z_Param_LoadFlags,Z_Param_Sandbox);
	P_NATIVE_END;
}
// End Class UModsManager Function BpLoadModResouce

// Begin Class UModsManager Function BpSpawnModActor
struct Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics
{
	struct ModsManager_eventBpSpawnModActor_Parms
	{
		FString ModActorId;
		FString ModId;
		AActor* Instigator;
		const UObject* WorldContextObject;
		TSubclassOf<AActor> ActorClass;
		FTransform SpawnTransform;
		ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;
		AActor* Owner;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModActorId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModActorId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionHandlingOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionHandlingOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId = { "ModActorId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ModActorId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModActorId_MetaData), NewProp_ModActorId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId = { "ModId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ModId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModId_MetaData), NewProp_ModId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride = { "CollisionHandlingOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, CollisionHandlingOverride), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(0, nullptr) }; // 2749820453
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventBpSpawnModActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ModId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_CollisionHandlingOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "BpSpawnModActor", nullptr, nullptr, Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::ModsManager_eventBpSpawnModActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::ModsManager_eventBpSpawnModActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_BpSpawnModActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_BpSpawnModActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execBpSpawnModActor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModActorId);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModId);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_GET_ENUM(ESpawnActorCollisionHandlingMethod,Z_Param_CollisionHandlingOverride);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UModsManager::BpSpawnModActor(Z_Param_ModActorId,Z_Param_ModId,Z_Param_Instigator,Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_SpawnTransform,ESpawnActorCollisionHandlingMethod(Z_Param_CollisionHandlingOverride),Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UModsManager Function BpSpawnModActor

// Begin Class UModsManager Function CloseActorChannel
struct Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics
{
	struct ModsManager_eventCloseActorChannel_Parms
	{
		int64 _objectid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xae\xb5\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe5\x85\xb3\xe9\x97\xad\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84""ActorChannel \xe4\xbd\xbf\xe5\xbe\x97""actorchannel\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba\n/// </summary>\n/// <param name=\"_objectid\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe6\xae\xb5\xe8\xbf\x90\xe8\xa1\x8c\n\xe5\x85\xb3\xe9\x97\xad\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84""ActorChannel \xe4\xbd\xbf\xe5\xbe\x97""actorchannel\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba\n</summary>\n<param name=\"_objectid\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__objectid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp__objectid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid = { "_objectid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventCloseActorChannel_Parms, _objectid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__objectid_MetaData), NewProp__objectid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::NewProp__objectid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "CloseActorChannel", nullptr, nullptr, Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::ModsManager_eventCloseActorChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::ModsManager_eventCloseActorChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_CloseActorChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_CloseActorChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execCloseActorChannel)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out__objectid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseActorChannel(Z_Param_Out__objectid);
	P_NATIVE_END;
}
// End Class UModsManager Function CloseActorChannel

// Begin Class UModsManager Function CreateDownloader
struct Z_Construct_UFunction_UModsManager_CreateDownloader_Statics
{
	struct ModsManager_eventCreateDownloader_Parms
	{
		FModDownloadData _modsDownloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modsDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modsDownloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData = { "_modsDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventCreateDownloader_Parms, _modsDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modsDownloadData_MetaData), NewProp__modsDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::NewProp__modsDownloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "CreateDownloader", nullptr, nullptr, Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::ModsManager_eventCreateDownloader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::ModsManager_eventCreateDownloader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_CreateDownloader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_CreateDownloader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execCreateDownloader)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modsDownloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDownloader(Z_Param_Out__modsDownloadData);
	P_NATIVE_END;
}
// End Class UModsManager Function CreateDownloader

// Begin Class UModsManager Function DownloadModFailed
struct Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics
{
	struct ModsManager_eventDownloadModFailed_Parms
	{
		FModDownloadData _modDownloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5\n/// </summary>\n/// <param name=\"_modFileName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xa4\xb1\xe8\xb4\xa5\n</summary>\n<param name=\"_modFileName\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventDownloadModFailed_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::NewProp__modDownloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "DownloadModFailed", nullptr, nullptr, Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::ModsManager_eventDownloadModFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::ModsManager_eventDownloadModFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_DownloadModFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_DownloadModFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execDownloadModFailed)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadModFailed(Z_Param_Out__modDownloadData);
	P_NATIVE_END;
}
// End Class UModsManager Function DownloadModFailed

// Begin Class UModsManager Function DownloadModSuccess
struct Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics
{
	struct ModsManager_eventDownloadModSuccess_Parms
	{
		FModDownloadData _modDownloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n/// </summary>\n/// <param name=\"_modName\"></param>\n/// <param name=\"_modFileName\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\nMod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x88\x90\xe5\x8a\x9f\n</summary>\n<param name=\"_modName\"></param>\n<param name=\"_modFileName\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventDownloadModSuccess_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::NewProp__modDownloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "DownloadModSuccess", nullptr, nullptr, Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::ModsManager_eventDownloadModSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::ModsManager_eventDownloadModSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_DownloadModSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_DownloadModSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execDownloadModSuccess)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadModSuccess(Z_Param_Out__modDownloadData);
	P_NATIVE_END;
}
// End Class UModsManager Function DownloadModSuccess

// Begin Class UModsManager Function GetDependenciesAassetById
struct Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics
{
	struct ModsManager_eventGetDependenciesAassetById_Parms
	{
		FString _modId;
		FString _assetId;
		TArray<FModDependenciesObjData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7id\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7id\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__assetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FStrPropertyParams NewProp__assetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId = { "_assetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, _assetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__assetId_MetaData), NewProp__assetId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModDependenciesObjData, METADATA_PARAMS(0, nullptr) }; // 1870266990
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetById_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1870266990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp__assetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetDependenciesAassetById", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::ModsManager_eventGetDependenciesAassetById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::ModsManager_eventGetDependenciesAassetById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetDependenciesAassetById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetDependenciesAassetById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetDependenciesAassetById)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FStrProperty,Z_Param__assetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FModDependenciesObjData>*)Z_Param__Result=UModsManager::GetDependenciesAassetById(Z_Param__modId,Z_Param__assetId);
	P_NATIVE_END;
}
// End Class UModsManager Function GetDependenciesAassetById

// Begin Class UModsManager Function GetDependenciesAassetByName
struct Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics
{
	struct ModsManager_eventGetDependenciesAassetByName_Parms
	{
		FString _modId;
		FString _assetName;
		TArray<FModDependenciesObjData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x89\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe6\x9f\xa5\xe6\x89\xbe\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe4\xbe\x9d\xe8\xb5\x96\xe5\x85\xb3\xe7\xb3\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__assetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FStrPropertyParams NewProp__assetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName = { "_assetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, _assetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__assetName_MetaData), NewProp__assetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModDependenciesObjData, METADATA_PARAMS(0, nullptr) }; // 1870266990
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetDependenciesAassetByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1870266990
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp__assetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetDependenciesAassetByName", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::ModsManager_eventGetDependenciesAassetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::ModsManager_eventGetDependenciesAassetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetDependenciesAassetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FStrProperty,Z_Param__assetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FModDependenciesObjData>*)Z_Param__Result=UModsManager::GetDependenciesAassetByName(Z_Param__modId,Z_Param__assetName);
	P_NATIVE_END;
}
// End Class UModsManager Function GetDependenciesAassetByName

// Begin Class UModsManager Function GetInstance
struct Z_Construct_UFunction_UModsManager_GetInstance_Statics
{
	struct ModsManager_eventGetInstance_Parms
	{
		UModsManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96modsManager\xe5\xae\x9e\xe4\xbe\x8b\n/// </summary>\n/// <returns></returns>\n" },
#endif
		{ "DisplayName", "GetModsManagerInstance" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96modsManager\xe5\xae\x9e\xe4\xbe\x8b\n</summary>\n<returns></returns>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UModsManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetInstance_Statics::ModsManager_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetInstance_Statics::ModsManager_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModsManager**)Z_Param__Result=UModsManager::GetInstance();
	P_NATIVE_END;
}
// End Class UModsManager Function GetInstance

// Begin Class UModsManager Function GetLoadModsSetting
struct Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics
{
	struct ModsManager_eventGetLoadModsSetting_Parms
	{
		FLodModsStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96ModSetting\n/// </summary>\n/// <returns></returns>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96ModSetting\n</summary>\n<returns></returns>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetLoadModsSetting_Parms, ReturnValue), Z_Construct_UScriptStruct_FLodModsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3105176559
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetLoadModsSetting", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::ModsManager_eventGetLoadModsSetting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::ModsManager_eventGetLoadModsSetting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetLoadModsSetting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetLoadModsSetting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetLoadModsSetting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLodModsStruct*)Z_Param__Result=P_THIS->GetLoadModsSetting();
	P_NATIVE_END;
}
// End Class UModsManager Function GetLoadModsSetting

// Begin Class UModsManager Function GetModData
struct Z_Construct_UFunction_UModsManager_GetModData_Statics
{
	struct ModsManager_eventGetModData_Parms
	{
		FString _modId;
		FModData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetModData_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetModData_Parms, ReturnValue), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 100364597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetModData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetModData", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetModData_Statics::ModsManager_eventGetModData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetModData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetModData_Statics::ModsManager_eventGetModData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetModData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetModData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetModData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModData*)Z_Param__Result=P_THIS->GetModData(Z_Param__modId);
	P_NATIVE_END;
}
// End Class UModsManager Function GetModData

// Begin Class UModsManager Function GetModObjData
struct Z_Construct_UFunction_UModsManager_GetModObjData_Statics
{
	struct ModsManager_eventGetModObjData_Parms
	{
		FString _modId;
		FString _modAssetId;
		FModObjData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modAssetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FStrPropertyParams NewProp__modAssetId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId = { "_modAssetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, _modAssetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modAssetId_MetaData), NewProp__modAssetId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetModObjData_Parms, ReturnValue), Z_Construct_UScriptStruct_FModObjData, METADATA_PARAMS(0, nullptr) }; // 3627642193
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp__modAssetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetModObjData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetModObjData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetModObjData", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::ModsManager_eventGetModObjData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetModObjData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetModObjData_Statics::ModsManager_eventGetModObjData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetModObjData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetModObjData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetModObjData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FStrProperty,Z_Param__modAssetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModObjData*)Z_Param__Result=P_THIS->GetModObjData(Z_Param__modId,Z_Param__modAssetId);
	P_NATIVE_END;
}
// End Class UModsManager Function GetModObjData

// Begin Class UModsManager Function GetObjectGuidCacheData
struct Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics
{
	struct ModsManager_eventGetObjectGuidCacheData_Parms
	{
		UObject* _actor;
		FReconnectStruct _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n///\x09\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe8\x8e\xb7\xe5\x8f\x96""actor\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xac""actor CDO\xe5\x92\x8c""class \n/// </summary>\n/// <param name=\"_actor\"></param>\n/// <param name=\"_value\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n      \xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n\xe8\x8e\xb7\xe5\x8f\x96""actor\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xac""actor CDO\xe5\x92\x8c""class\n</summary>\n<param name=\"_actor\"></param>\n<param name=\"_value\"></param>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__actor = { "_actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetObjectGuidCacheData_Parms, _actor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetObjectGuidCacheData_Parms, _value), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(0, nullptr) }; // 2158008370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetObjectGuidCacheData", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::ModsManager_eventGetObjectGuidCacheData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::ModsManager_eventGetObjectGuidCacheData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetObjectGuidCacheData)
{
	P_GET_OBJECT(UObject,Z_Param__actor);
	P_GET_STRUCT_REF(FReconnectStruct,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetObjectGuidCacheData(Z_Param__actor,Z_Param_Out__value);
	P_NATIVE_END;
}
// End Class UModsManager Function GetObjectGuidCacheData

// Begin Class UModsManager Function GetReplicateObj
struct Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics
{
	struct ModsManager_eventGetReplicateObj_Parms
	{
		FString _objectid;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\x8f\x96\xe9\x9c\x80\xe8\xa6\x81\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84object \xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe5\xba\x94\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xbf\x90\xe8\xa1\x8c\n/// </summary>\n/// <param name=\"_objectid\"></param>\n/// <returns></returns>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\x8f\x96\xe9\x9c\x80\xe8\xa6\x81\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84object \xe6\xad\xa4\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\xaa\xe5\xba\x94\xe5\x9c\xa8\xe6\x9c\x8d\xe5\x8a\xa1\xe5\x99\xa8\xe8\xbf\x90\xe8\xa1\x8c\n</summary>\n<param name=\"_objectid\"></param>\n<returns></returns>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__objectid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__objectid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid = { "_objectid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetReplicateObj_Parms, _objectid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__objectid_MetaData), NewProp__objectid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventGetReplicateObj_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp__objectid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "GetReplicateObj", nullptr, nullptr, Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::ModsManager_eventGetReplicateObj_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::ModsManager_eventGetReplicateObj_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_GetReplicateObj()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_GetReplicateObj_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execGetReplicateObj)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__objectid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetReplicateObj(Z_Param__objectid);
	P_NATIVE_END;
}
// End Class UModsManager Function GetReplicateObj

// Begin Class UModsManager Function IsModsLoaded
struct Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics
{
	struct ModsManager_eventIsModsLoaded_Parms
	{
		FString _modName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName = { "_modName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventIsModsLoaded_Parms, _modName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modName_MetaData), NewProp__modName_MetaData) };
void Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ModsManager_eventIsModsLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModsManager_eventIsModsLoaded_Parms), &Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp__modName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "IsModsLoaded", nullptr, nullptr, Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::ModsManager_eventIsModsLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::ModsManager_eventIsModsLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_IsModsLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_IsModsLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execIsModsLoaded)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsModsLoaded(Z_Param__modName);
	P_NATIVE_END;
}
// End Class UModsManager Function IsModsLoaded

// Begin Class UModsManager Function OpenModLevel
struct Z_Construct_UFunction_UModsManager_OpenModLevel_Statics
{
	struct ModsManager_eventOpenModLevel_Parms
	{
		FString _modId;
		FString _levelName;
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2mod\xe4\xb8\xad\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n/// </summary>\n/// <param name=\"_modId\">mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80</param>\n/// <param name=\"_levelName\">\xe5\x85\xb3\xe5\x8d\xa1\xe5\x90\x8d</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xa6\x81\xe5\x88\x87\xe6\x8d\xa2mod\xe4\xb8\xad\xe7\x9a\x84\xe5\x85\xb3\xe5\x8d\xa1\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n</summary>\n<param name=\"_modId\">mod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x9c\xb0\xe5\x9d\x80</param>\n<param name=\"_levelName\">\xe5\x85\xb3\xe5\x8d\xa1\xe5\x90\x8d</param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__levelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FStrPropertyParams NewProp__levelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName = { "_levelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, _levelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__levelName_MetaData), NewProp__levelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventOpenModLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp__levelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "OpenModLevel", nullptr, nullptr, Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::ModsManager_eventOpenModLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::ModsManager_eventOpenModLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_OpenModLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_OpenModLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execOpenModLevel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FStrProperty,Z_Param__levelName);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModsManager::OpenModLevel(Z_Param__modId,Z_Param__levelName,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UModsManager Function OpenModLevel

// Begin Class UModsManager Function ReadModFileJson
struct Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics
{
	struct ModsManager_eventReadModFileJson_Parms
	{
		FString _modName;
		FString _modSavePath;
		FModData _outModData;
		FString _modId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default__modId", "" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modSavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modName;
	static const UECodeGen_Private::FStrPropertyParams NewProp__modSavePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp__outModData;
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName = { "_modName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modName_MetaData), NewProp__modName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath = { "_modSavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modSavePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modSavePath_MetaData), NewProp__modSavePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__outModData = { "_outModData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _outModData), Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(0, nullptr) }; // 100364597
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventReadModFileJson_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modSavePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__outModData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::NewProp__modId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "ReadModFileJson", nullptr, nullptr, Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::ModsManager_eventReadModFileJson_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::ModsManager_eventReadModFileJson_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_ReadModFileJson()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_ReadModFileJson_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execReadModFileJson)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modName);
	P_GET_PROPERTY(FStrProperty,Z_Param__modSavePath);
	P_GET_STRUCT_REF(FModData,Z_Param_Out__outModData);
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadModFileJson(Z_Param__modName,Z_Param__modSavePath,Z_Param_Out__outModData,Z_Param__modId);
	P_NATIVE_END;
}
// End Class UModsManager Function ReadModFileJson

// Begin Class UModsManager Function RegistActorGuidCacheForClient
struct Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics
{
	struct ModsManager_eventRegistActorGuidCacheForClient_Parms
	{
		FReconnectStruct _value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n/// \xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\xb3\xa8\xe5\x86\x8cobject\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xacobject CDO\xe5\x92\x8c""class ,\xe8\xbf\x99\xe4\xba\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\x94\xa8\xe4\xba\x8e\xe9\x87\x8d\xe8\xbf\x9e\xe6\x97\xb6\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba""actor \xe4\xbb\xa5\xe8\xbe\xbe\xe5\x88\xb0\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe7\x9b\xae\xe7\x9a\x84\n/// </summary>\n/// <param name=\"_value\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe8\xbf\x90\xe8\xa1\x8c\n\xe5\x9c\xa8\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaf\xe6\xb3\xa8\xe5\x86\x8cobject\xe7\x9a\x84GUID\xe7\xbc\x93\xe5\xad\x98\xe6\x95\xb0\xe6\x8d\xae \xe5\x8c\x85\xe6\x8b\xacobject CDO\xe5\x92\x8c""class ,\xe8\xbf\x99\xe4\xba\x9b\xe6\x95\xb0\xe6\x8d\xae\xe7\x94\xa8\xe4\xba\x8e\xe9\x87\x8d\xe8\xbf\x9e\xe6\x97\xb6\xe9\x87\x8d\xe6\x96\xb0\xe5\x88\x9b\xe5\xbb\xba""actor \xe4\xbb\xa5\xe8\xbe\xbe\xe5\x88\xb0\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe7\x9b\xae\xe7\x9a\x84\n</summary>\n<param name=\"_value\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRegistActorGuidCacheForClient_Parms, _value), Z_Construct_UScriptStruct_FReconnectStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__value_MetaData), NewProp__value_MetaData) }; // 2158008370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::NewProp__value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistActorGuidCacheForClient", nullptr, nullptr, Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::ModsManager_eventRegistActorGuidCacheForClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::ModsManager_eventRegistActorGuidCacheForClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execRegistActorGuidCacheForClient)
{
	P_GET_STRUCT_REF(FReconnectStruct,Z_Param_Out__value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistActorGuidCacheForClient(Z_Param_Out__value);
	P_NATIVE_END;
}
// End Class UModsManager Function RegistActorGuidCacheForClient

// Begin Class UModsManager Function RegistModDownloadCallBack
struct Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics
{
	struct ModsManager_eventRegistModDownloadCallBack_Parms
	{
		FString _modId;
		FScriptDelegate _callBackFuc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadCallBack_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadCallBack_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1907644008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::NewProp__callBackFuc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistModDownloadCallBack", nullptr, nullptr, Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::ModsManager_eventRegistModDownloadCallBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::ModsManager_eventRegistModDownloadCallBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execRegistModDownloadCallBack)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistModDownloadCallBack(Z_Param__modId,FDownloadModResultDelegate(Z_Param__callBackFuc));
	P_NATIVE_END;
}
// End Class UModsManager Function RegistModDownloadCallBack

// Begin Class UModsManager Function RegistModDownloadProgressCallBack
struct Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics
{
	struct ModsManager_eventRegistModDownloadProgressCallBack_Parms
	{
		FString _modId;
		FScriptDelegate _callBackFuc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__modId;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId = { "_modId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadProgressCallBack_Parms, _modId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modId_MetaData), NewProp__modId_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRegistModDownloadProgressCallBack_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressSingleDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1268524179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__modId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::NewProp__callBackFuc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RegistModDownloadProgressCallBack", nullptr, nullptr, Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::ModsManager_eventRegistModDownloadProgressCallBack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::ModsManager_eventRegistModDownloadProgressCallBack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execRegistModDownloadProgressCallBack)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__modId);
	P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegistModDownloadProgressCallBack(Z_Param__modId,FDownloadModProgressSingleDelegate(Z_Param__callBackFuc));
	P_NATIVE_END;
}
// End Class UModsManager Function RegistModDownloadProgressCallBack

// Begin Class UModsManager Function RequestLoadResouceFormMod
struct Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics
{
	struct ModsManager_eventRequestLoadResouceFormMod_Parms
	{
		FModDownloadData _downloadData;
		FScriptDelegate _callBackFuc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe4\xb8\x80\xe4\xb8\xaamod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n/// </summary>\n/// <param name=\"_downloadData\"></param>\n/// <param name=\"_callBackFuc\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe5\x88\xb0mod\xe4\xb8\xad\xe8\xb5\x84\xe6\xba\x90\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x8c\xe8\xb0\x83\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe4\xbc\xa0\xe9\x80\x92mod\xe4\xb8\x8b\xe8\xbd\xbd\xe6\x89\x80\xe9\x9c\x80\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe6\xb3\xa8\xe5\x86\x8c\xe4\xb8\x80\xe4\xb8\xaamod\xe4\xb8\x8b\xe8\xbd\xbd\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n</summary>\n<param name=\"_downloadData\"></param>\n<param name=\"_callBackFuc\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp__callBackFuc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__callBackFuc = { "_callBackFuc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventRequestLoadResouceFormMod_Parms, _callBackFuc), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModResultDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1907644008
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__downloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::NewProp__callBackFuc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "RequestLoadResouceFormMod", nullptr, nullptr, Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::ModsManager_eventRequestLoadResouceFormMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::ModsManager_eventRequestLoadResouceFormMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execRequestLoadResouceFormMod)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
	P_GET_PROPERTY(FDelegateProperty,Z_Param__callBackFuc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLoadResouceFormMod(Z_Param_Out__downloadData,FDownloadModResultDelegate(Z_Param__callBackFuc));
	P_NATIVE_END;
}
// End Class UModsManager Function RequestLoadResouceFormMod

// Begin Class UModsManager Function SplicingModActorPath
struct Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics
{
	struct ModsManager_eventSplicingModActorPath_Parms
	{
		FString _mountPoint;
		FString _actorName;
		FString _relativePath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__mountPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__actorName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__relativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__mountPoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp__actorName;
	static const UECodeGen_Private::FStrPropertyParams NewProp__relativePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint = { "_mountPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _mountPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__mountPoint_MetaData), NewProp__mountPoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName = { "_actorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _actorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__actorName_MetaData), NewProp__actorName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath = { "_relativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, _relativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__relativePath_MetaData), NewProp__relativePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventSplicingModActorPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__mountPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__actorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp__relativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "SplicingModActorPath", nullptr, nullptr, Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::ModsManager_eventSplicingModActorPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::ModsManager_eventSplicingModActorPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_SplicingModActorPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_SplicingModActorPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execSplicingModActorPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__mountPoint);
	P_GET_PROPERTY(FStrProperty,Z_Param__actorName);
	P_GET_PROPERTY(FStrProperty,Z_Param__relativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UModsManager::SplicingModActorPath(Z_Param__mountPoint,Z_Param__actorName,Z_Param__relativePath);
	P_NATIVE_END;
}
// End Class UModsManager Function SplicingModActorPath

// Begin Class UModsManager Function UpdateDownloadingMods
struct Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics
{
	struct ModsManager_eventUpdateDownloadingMods_Parms
	{
		FModDownloadData _modDownloadData;
		float _progress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe6\x9b\xb4\xe6\x96\xb0Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n/// </summary>\n/// <param name=\"_modFileName\"></param>\n/// <param name=\"_progress\"></param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe6\x9b\xb4\xe6\x96\xb0Mod\xe4\xb8\x8b\xe8\xbd\xbd\xe8\xbf\x9b\xe5\xba\xa6\n</summary>\n<param name=\"_modFileName\"></param>\n<param name=\"_progress\"></param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__modDownloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__modDownloadData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp__progress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData = { "_modDownloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventUpdateDownloadingMods_Parms, _modDownloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__modDownloadData_MetaData), NewProp__modDownloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress = { "_progress", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsManager_eventUpdateDownloadingMods_Parms, _progress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__progress_MetaData), NewProp__progress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__modDownloadData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::NewProp__progress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModsManager, nullptr, "UpdateDownloadingMods", nullptr, nullptr, Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::ModsManager_eventUpdateDownloadingMods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::ModsManager_eventUpdateDownloadingMods_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModsManager_UpdateDownloadingMods()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModsManager_UpdateDownloadingMods_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModsManager::execUpdateDownloadingMods)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__modDownloadData);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out__progress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDownloadingMods(Z_Param_Out__modDownloadData,Z_Param_Out__progress);
	P_NATIVE_END;
}
// End Class UModsManager Function UpdateDownloadingMods

// Begin Class UModsManager
void UModsManager::StaticRegisterNativesUModsManager()
{
	UClass* Class = UModsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BegingDownloadMod", &UModsManager::execBegingDownloadMod },
		{ "BpLoadModResouce", &UModsManager::execBpLoadModResouce },
		{ "BpSpawnModActor", &UModsManager::execBpSpawnModActor },
		{ "CloseActorChannel", &UModsManager::execCloseActorChannel },
		{ "CreateDownloader", &UModsManager::execCreateDownloader },
		{ "DownloadModFailed", &UModsManager::execDownloadModFailed },
		{ "DownloadModSuccess", &UModsManager::execDownloadModSuccess },
		{ "GetDependenciesAassetById", &UModsManager::execGetDependenciesAassetById },
		{ "GetDependenciesAassetByName", &UModsManager::execGetDependenciesAassetByName },
		{ "GetInstance", &UModsManager::execGetInstance },
		{ "GetLoadModsSetting", &UModsManager::execGetLoadModsSetting },
		{ "GetModData", &UModsManager::execGetModData },
		{ "GetModObjData", &UModsManager::execGetModObjData },
		{ "GetObjectGuidCacheData", &UModsManager::execGetObjectGuidCacheData },
		{ "GetReplicateObj", &UModsManager::execGetReplicateObj },
		{ "IsModsLoaded", &UModsManager::execIsModsLoaded },
		{ "OpenModLevel", &UModsManager::execOpenModLevel },
		{ "ReadModFileJson", &UModsManager::execReadModFileJson },
		{ "RegistActorGuidCacheForClient", &UModsManager::execRegistActorGuidCacheForClient },
		{ "RegistModDownloadCallBack", &UModsManager::execRegistModDownloadCallBack },
		{ "RegistModDownloadProgressCallBack", &UModsManager::execRegistModDownloadProgressCallBack },
		{ "RequestLoadResouceFormMod", &UModsManager::execRequestLoadResouceFormMod },
		{ "SplicingModActorPath", &UModsManager::execSplicingModActorPath },
		{ "UpdateDownloadingMods", &UModsManager::execUpdateDownloadingMods },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModsManager);
UClass* Z_Construct_UClass_UModsManager_NoRegister()
{
	return UModsManager::StaticClass();
}
struct Z_Construct_UClass_UModsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\xae\xa1\xe7\x90\x86Mods\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x92\x8c\xe5\x8a\xa0\xe8\xbd\xbd\n/// </summary>\n" },
#endif
		{ "IncludePath", "ModsManager.h" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\xae\xa1\xe7\x90\x86Mods\xe7\x9a\x84\xe4\xb8\x8b\xe8\xbd\xbd\xe5\x92\x8c\xe5\x8a\xa0\xe8\xbd\xbd\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadingMods_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitToDownloadMods_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownloadModProgressDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstalledModsMap_MetaData[] = {
		{ "Category", "ModsManager" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateModObjectMap_MetaData[] = {
		{ "Category", "ModsManager" },
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastingOutputPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DownloadingMods_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DownloadingMods_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DownloadingMods;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaitToDownloadMods_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaitToDownloadMods;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadModProgressDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstalledModsMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstalledModsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InstalledModsMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicateModObjectMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicateModObjectMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReplicateModObjectMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CastingOutputPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModsManager_BegingDownloadMod, "BegingDownloadMod" }, // 2513082644
		{ &Z_Construct_UFunction_UModsManager_BpLoadModResouce, "BpLoadModResouce" }, // 3896091725
		{ &Z_Construct_UFunction_UModsManager_BpSpawnModActor, "BpSpawnModActor" }, // 933322924
		{ &Z_Construct_UFunction_UModsManager_CloseActorChannel, "CloseActorChannel" }, // 462792630
		{ &Z_Construct_UFunction_UModsManager_CreateDownloader, "CreateDownloader" }, // 2316314814
		{ &Z_Construct_UFunction_UModsManager_DownloadModFailed, "DownloadModFailed" }, // 163520044
		{ &Z_Construct_UFunction_UModsManager_DownloadModSuccess, "DownloadModSuccess" }, // 3068458195
		{ &Z_Construct_UFunction_UModsManager_GetDependenciesAassetById, "GetDependenciesAassetById" }, // 881718078
		{ &Z_Construct_UFunction_UModsManager_GetDependenciesAassetByName, "GetDependenciesAassetByName" }, // 3507642996
		{ &Z_Construct_UFunction_UModsManager_GetInstance, "GetInstance" }, // 978441874
		{ &Z_Construct_UFunction_UModsManager_GetLoadModsSetting, "GetLoadModsSetting" }, // 3328817889
		{ &Z_Construct_UFunction_UModsManager_GetModData, "GetModData" }, // 2942860982
		{ &Z_Construct_UFunction_UModsManager_GetModObjData, "GetModObjData" }, // 4022347936
		{ &Z_Construct_UFunction_UModsManager_GetObjectGuidCacheData, "GetObjectGuidCacheData" }, // 1583323680
		{ &Z_Construct_UFunction_UModsManager_GetReplicateObj, "GetReplicateObj" }, // 400357141
		{ &Z_Construct_UFunction_UModsManager_IsModsLoaded, "IsModsLoaded" }, // 3060231072
		{ &Z_Construct_UFunction_UModsManager_OpenModLevel, "OpenModLevel" }, // 3956250209
		{ &Z_Construct_UFunction_UModsManager_ReadModFileJson, "ReadModFileJson" }, // 1696130729
		{ &Z_Construct_UFunction_UModsManager_RegistActorGuidCacheForClient, "RegistActorGuidCacheForClient" }, // 7380524
		{ &Z_Construct_UFunction_UModsManager_RegistModDownloadCallBack, "RegistModDownloadCallBack" }, // 2871035608
		{ &Z_Construct_UFunction_UModsManager_RegistModDownloadProgressCallBack, "RegistModDownloadProgressCallBack" }, // 540188461
		{ &Z_Construct_UFunction_UModsManager_RequestLoadResouceFormMod, "RequestLoadResouceFormMod" }, // 2239807707
		{ &Z_Construct_UFunction_UModsManager_SplicingModActorPath, "SplicingModActorPath" }, // 1318235916
		{ &Z_Construct_UFunction_UModsManager_UpdateDownloadingMods, "UpdateDownloadingMods" }, // 1599113796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_ValueProp = { "DownloadingMods", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_Key_KeyProp = { "DownloadingMods_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods = { "DownloadingMods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, DownloadingMods), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadingMods_MetaData), NewProp_DownloadingMods_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_Inner = { "WaitToDownloadMods", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModsDownloader_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods = { "WaitToDownloadMods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, WaitToDownloadMods), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitToDownloadMods_MetaData), NewProp_WaitToDownloadMods_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate = { "DownloadModProgressDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, DownloadModProgressDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_DownloadModProgressDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownloadModProgressDelegate_MetaData), NewProp_DownloadModProgressDelegate_MetaData) }; // 1910155224
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_ValueProp = { "InstalledModsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModData, METADATA_PARAMS(0, nullptr) }; // 100364597
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_Key_KeyProp = { "InstalledModsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap = { "InstalledModsMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, InstalledModsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstalledModsMap_MetaData), NewProp_InstalledModsMap_MetaData) }; // 100364597
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_ValueProp = { "ReplicateModObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_Key_KeyProp = { "ReplicateModObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap = { "ReplicateModObjectMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, ReplicateModObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateModObjectMap_MetaData), NewProp_ReplicateModObjectMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath = { "CastingOutputPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModsManager, CastingOutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastingOutputPath_MetaData), NewProp_CastingOutputPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadingMods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_WaitToDownloadMods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_DownloadModProgressDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_InstalledModsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_ReplicateModObjectMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModsManager_Statics::NewProp_CastingOutputPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModsManager_Statics::ClassParams = {
	&UModsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModsManager()
{
	if (!Z_Registration_Info_UClass_UModsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModsManager.OuterSingleton, Z_Construct_UClass_UModsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModsManager.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<UModsManager>()
{
	return UModsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModsManager);
// End Class UModsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModsSetting, UModsSetting::StaticClass, TEXT("UModsSetting"), &Z_Registration_Info_UClass_UModsSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModsSetting), 3626761990U) },
		{ Z_Construct_UClass_UModsManager, UModsManager::StaticClass, TEXT("UModsManager"), &Z_Registration_Info_UClass_UModsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModsManager), 3805434037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_3055293976(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
