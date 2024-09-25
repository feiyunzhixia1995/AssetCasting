// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsController.h"
#include "VTMHotUpdate/Public/VTMHotupdateDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModsController();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModsController_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
// End Cross Module References

// Begin Class AModsController Function BpRequestLoadResouceFormMod
struct Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics
{
	struct ModsController_eventBpRequestLoadResouceFormMod_Parms
	{
		FModDownloadData _downloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \n/// </summary>\n/// <param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3\n</summary>\n<param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsController_eventBpRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModsController, nullptr, "BpRequestLoadResouceFormMod", nullptr, nullptr, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::ModsController_eventBpRequestLoadResouceFormMod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::ModsController_eventBpRequestLoadResouceFormMod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModsController::execBpRequestLoadResouceFormMod)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BpRequestLoadResouceFormMod(Z_Param_Out__downloadData);
	P_NATIVE_END;
}
// End Class AModsController Function BpRequestLoadResouceFormMod

// Begin Class AModsController Function BpRequestLoadResouceFormModLocal
struct Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics
{
	struct ModsController_eventBpRequestLoadResouceFormModLocal_Parms
	{
		FModDownloadData _downloadData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xe7\xba\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \xe6\x97\xa0\xe9\x9c\x80\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n/// </summary>\n/// <param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>\n" },
#endif
		{ "ModuleRelativePath", "Public/ModsController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xe7\xba\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \xe6\x97\xa0\xe9\x9c\x80\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n</summary>\n<param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__downloadData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModsController_eventBpRequestLoadResouceFormModLocal_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__downloadData_MetaData), NewProp__downloadData_MetaData) }; // 1446792847
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModsController, nullptr, "BpRequestLoadResouceFormModLocal", nullptr, nullptr, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::ModsController_eventBpRequestLoadResouceFormModLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::ModsController_eventBpRequestLoadResouceFormModLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModsController::execBpRequestLoadResouceFormModLocal)
{
	P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BpRequestLoadResouceFormModLocal(Z_Param_Out__downloadData);
	P_NATIVE_END;
}
// End Class AModsController Function BpRequestLoadResouceFormModLocal

// Begin Class AModsController
void AModsController::StaticRegisterNativesAModsController()
{
	UClass* Class = AModsController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BpRequestLoadResouceFormMod", &AModsController::execBpRequestLoadResouceFormMod },
		{ "BpRequestLoadResouceFormModLocal", &AModsController::execBpRequestLoadResouceFormModLocal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModsController);
UClass* Z_Construct_UClass_AModsController_NoRegister()
{
	return AModsController::StaticClass();
}
struct Z_Construct_UClass_AModsController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ModsController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModsReplicateComponent_MetaData[] = {
		{ "Category", "ModsController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModActorInViewFrustumStayTimeMap_MetaData[] = {
		{ "Category", "ModsController" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModsReplicateComponent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModLoadResultDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModLoadResultDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModActorInViewFrustumStayTimeMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ModActorInViewFrustumStayTimeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod, "BpRequestLoadResouceFormMod" }, // 1833298318
		{ &Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal, "BpRequestLoadResouceFormModLocal" }, // 3021983991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModsController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent = { "ModsReplicateComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModsController, ModsReplicateComponent), Z_Construct_UClass_UModsReplicateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModsReplicateComponent_MetaData), NewProp_ModsReplicateComponent_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate = { "ServerModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModsController, ServerModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerModLoadResultDelegate_MetaData), NewProp_ServerModLoadResultDelegate_MetaData) }; // 1519742562
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate = { "ClientModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModsController, ClientModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientModLoadResultDelegate_MetaData), NewProp_ClientModLoadResultDelegate_MetaData) }; // 1519742562
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_ValueProp = { "ModActorInViewFrustumStayTimeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp = { "ModActorInViewFrustumStayTimeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap = { "ModActorInViewFrustumStayTimeMap", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModsController, ModActorInViewFrustumStayTimeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModActorInViewFrustumStayTimeMap_MetaData), NewProp_ModActorInViewFrustumStayTimeMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModsController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModsController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModsController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UModReplicateManager_NoRegister, (int32)VTABLE_OFFSET(AModsController, IModReplicateManager), false },  // 3435638710
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModsController_Statics::ClassParams = {
	&AModsController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModsController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::Class_MetaDataParams), Z_Construct_UClass_AModsController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModsController()
{
	if (!Z_Registration_Info_UClass_AModsController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModsController.OuterSingleton, Z_Construct_UClass_AModsController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModsController.OuterSingleton;
}
template<> VTMHOTUPDATE_API UClass* StaticClass<AModsController>()
{
	return AModsController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModsController);
AModsController::~AModsController() {}
// End Class AModsController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModsController, AModsController::StaticClass, TEXT("AModsController"), &Z_Registration_Info_UClass_AModsController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModsController), 26142086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_2099619567(TEXT("/Script/VTMHotUpdate"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdate_Public_ModsController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
