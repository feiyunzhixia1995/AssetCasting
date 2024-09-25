// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdateEditor/VTMHotUpdateEditorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdateEditorFunctionLibrary() {}
// Cross Module References
	VTMHOTUPDATEEDITOR_API UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_NoRegister();
	VTMHOTUPDATEEDITOR_API UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VTMHotUpdateEditor();
	VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData();
// End Cross Module References
	DEFINE_FUNCTION(UVTMHotUpdateEditorFunctionLibrary::execGetMaterialParamData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__csvFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMaterialParamData>*)Z_Param__Result=UVTMHotUpdateEditorFunctionLibrary::GetMaterialParamData(Z_Param__csvFilePath);
		P_NATIVE_END;
	}
	void UVTMHotUpdateEditorFunctionLibrary::StaticRegisterNativesUVTMHotUpdateEditorFunctionLibrary()
	{
		UClass* Class = UVTMHotUpdateEditorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialParamData", &UVTMHotUpdateEditorFunctionLibrary::execGetMaterialParamData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics
	{
		struct VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms
		{
			FString _csvFilePath;
			TArray<FMaterialParamData> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__csvFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__csvFilePath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath = { "_csvFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms, _csvFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParamData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AssestCasting" },
		{ "ModuleRelativePath", "VTMHotUpdateEditorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary, nullptr, "GetMaterialParamData", nullptr, nullptr, sizeof(VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms), Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_NoRegister()
	{
		return UVTMHotUpdateEditorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdateEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData, "GetMaterialParamData" }, // 4224457296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VTMHotUpdateEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "VTMHotUpdateEditorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVTMHotUpdateEditorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::ClassParams = {
		&UVTMHotUpdateEditorFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVTMHotUpdateEditorFunctionLibrary, 249445545);
	template<> VTMHOTUPDATEEDITOR_API UClass* StaticClass<UVTMHotUpdateEditorFunctionLibrary>()
	{
		return UVTMHotUpdateEditorFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVTMHotUpdateEditorFunctionLibrary(Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary, &UVTMHotUpdateEditorFunctionLibrary::StaticClass, TEXT("/Script/VTMHotUpdateEditor"), TEXT("UVTMHotUpdateEditorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVTMHotUpdateEditorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
