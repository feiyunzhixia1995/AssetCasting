// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdate/Public/ModsController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModsController() {}
// Cross Module References
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModsController_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModsController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdate();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FModDownloadData();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModsReplicateComponent_NoRegister();
	VTMHOTUPDATE_API UFunction* Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_AModControlActor_NoRegister();
	VTMHOTUPDATE_API UClass* Z_Construct_UClass_UModReplicateManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModsController::execBpRequestLoadResouceFormModLocal)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BpRequestLoadResouceFormModLocal(Z_Param_Out__downloadData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModsController::execBpRequestLoadResouceFormMod)
	{
		P_GET_STRUCT_REF(FModDownloadData,Z_Param_Out__downloadData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BpRequestLoadResouceFormMod(Z_Param_Out__downloadData);
		P_NATIVE_END;
	}
	void AModsController::StaticRegisterNativesAModsController()
	{
		UClass* Class = AModsController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BpRequestLoadResouceFormMod", &AModsController::execBpRequestLoadResouceFormMod },
			{ "BpRequestLoadResouceFormModLocal", &AModsController::execBpRequestLoadResouceFormModLocal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics
	{
		struct ModsController_eventBpRequestLoadResouceFormMod_Parms
		{
			FModDownloadData _downloadData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsController_eventBpRequestLoadResouceFormMod_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::NewProp__downloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \n/// </summary>\n/// <param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>\n" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
		{ "ToolTip", "<summary>\n\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3\n</summary>\n<param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModsController, nullptr, "BpRequestLoadResouceFormMod", nullptr, nullptr, sizeof(ModsController_eventBpRequestLoadResouceFormMod_Parms), Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics
	{
		struct ModsController_eventBpRequestLoadResouceFormModLocal_Parms
		{
			FModDownloadData _downloadData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__downloadData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__downloadData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData = { "_downloadData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModsController_eventBpRequestLoadResouceFormModLocal_Parms, _downloadData), Z_Construct_UScriptStruct_FModDownloadData, METADATA_PARAMS(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::NewProp__downloadData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe7\xba\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \xe6\x97\xa0\xe9\x9c\x80\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n/// </summary>\n/// <param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>\n" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
		{ "ToolTip", "<summary>\n\xe7\xba\xaf\xe6\x9c\xac\xe5\x9c\xb0\xe8\xaf\xb7\xe6\xb1\x82mod\xe5\x85\xa5\xe5\x8f\xa3 \xe6\x97\xa0\xe9\x9c\x80\xe7\xbd\x91\xe7\xbb\x9c\xe5\x90\x8c\xe6\xad\xa5\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\n</summary>\n<param name=\"_downloadData\">\xe4\xb8\x8b\xe8\xbd\xbd\xe4\xbf\xa1\xe6\x81\xaf</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModsController, nullptr, "BpRequestLoadResouceFormModLocal", nullptr, nullptr, sizeof(ModsController_eventBpRequestLoadResouceFormModLocal_Parms), Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModsController_NoRegister()
	{
		return AModsController::StaticClass();
	}
	struct Z_Construct_UClass_AModsController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModsReplicateComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModsReplicateComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerModLoadResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ServerModLoadResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientModLoadResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientModLoadResultDelegate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModActorInViewFrustumStayTimeMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModActorInViewFrustumStayTimeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ModActorInViewFrustumStayTimeMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModsController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModsController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormMod, "BpRequestLoadResouceFormMod" }, // 1448748
		{ &Z_Construct_UFunction_AModsController_BpRequestLoadResouceFormModLocal, "BpRequestLoadResouceFormModLocal" }, // 3918154009
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModsController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModsController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent_MetaData[] = {
		{ "Category", "ModsController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent = { "ModsReplicateComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModsController, ModsReplicateComponent), Z_Construct_UClass_UModsReplicateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate = { "ServerModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModsController, ServerModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate = { "ClientModLoadResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModsController, ClientModLoadResultDelegate), Z_Construct_UDelegateFunction_VTMHotUpdate_ModLoadResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_ValueProp = { "ModActorInViewFrustumStayTimeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp = { "ModActorInViewFrustumStayTimeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AModControlActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_MetaData[] = {
		{ "Category", "ModsController" },
		{ "ModuleRelativePath", "Public/ModsController.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap = { "ModActorInViewFrustumStayTimeMap", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModsController, ModActorInViewFrustumStayTimeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModsController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModsReplicateComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ServerModLoadResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ClientModLoadResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModsController_Statics::NewProp_ModActorInViewFrustumStayTimeMap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModsController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UModReplicateManager_NoRegister, (int32)VTABLE_OFFSET(AModsController, IModReplicateManager), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModsController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModsController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModsController_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_AModsController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModsController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModsController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModsController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModsController, 847010507);
	template<> VTMHOTUPDATE_API UClass* StaticClass<AModsController>()
	{
		return AModsController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModsController(Z_Construct_UClass_AModsController, &AModsController::StaticClass, TEXT("/Script/VTMHotUpdate"), TEXT("AModsController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModsController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
