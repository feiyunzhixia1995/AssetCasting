// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VTMHotUpdateEditor/VTMHotUpdateEditorFunctionLibrary.h"
#include "VTMHotUpdate/Public/AssestDiffDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVTMHotUpdateEditorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VTMHotUpdateEditor();
VTMHOTUPDATE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParamData();
VTMHOTUPDATEEDITOR_API UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary();
VTMHOTUPDATEEDITOR_API UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_NoRegister();
// End Cross Module References

// Begin Class UVTMHotUpdateEditorFunctionLibrary Function GetMaterialParamData
struct Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics
{
	struct VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms
	{
		FString _csvFilePath;
		TArray<FMaterialParamData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AssestCasting" },
		{ "ModuleRelativePath", "VTMHotUpdateEditorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__csvFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__csvFilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath = { "_csvFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms, _csvFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__csvFilePath_MetaData), NewProp__csvFilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParamData, METADATA_PARAMS(0, nullptr) }; // 3840209657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3840209657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp__csvFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary, nullptr, "GetMaterialParamData", nullptr, nullptr, Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::VTMHotUpdateEditorFunctionLibrary_eventGetMaterialParamData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVTMHotUpdateEditorFunctionLibrary::execGetMaterialParamData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__csvFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMaterialParamData>*)Z_Param__Result=UVTMHotUpdateEditorFunctionLibrary::GetMaterialParamData(Z_Param__csvFilePath);
	P_NATIVE_END;
}
// End Class UVTMHotUpdateEditorFunctionLibrary Function GetMaterialParamData

// Begin Class UVTMHotUpdateEditorFunctionLibrary
void UVTMHotUpdateEditorFunctionLibrary::StaticRegisterNativesUVTMHotUpdateEditorFunctionLibrary()
{
	UClass* Class = UVTMHotUpdateEditorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterialParamData", &UVTMHotUpdateEditorFunctionLibrary::execGetMaterialParamData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVTMHotUpdateEditorFunctionLibrary);
UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_NoRegister()
{
	return UVTMHotUpdateEditorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VTMHotUpdateEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "VTMHotUpdateEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVTMHotUpdateEditorFunctionLibrary_GetMaterialParamData, "GetMaterialParamData" }, // 105081645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVTMHotUpdateEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VTMHotUpdateEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UVTMHotUpdateEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVTMHotUpdateEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVTMHotUpdateEditorFunctionLibrary.OuterSingleton;
}
template<> VTMHOTUPDATEEDITOR_API UClass* StaticClass<UVTMHotUpdateEditorFunctionLibrary>()
{
	return UVTMHotUpdateEditorFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVTMHotUpdateEditorFunctionLibrary);
UVTMHotUpdateEditorFunctionLibrary::~UVTMHotUpdateEditorFunctionLibrary() {}
// End Class UVTMHotUpdateEditorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdateEditor_VTMHotUpdateEditorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVTMHotUpdateEditorFunctionLibrary, UVTMHotUpdateEditorFunctionLibrary::StaticClass, TEXT("UVTMHotUpdateEditorFunctionLibrary"), &Z_Registration_Info_UClass_UVTMHotUpdateEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVTMHotUpdateEditorFunctionLibrary), 889867674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdateEditor_VTMHotUpdateEditorFunctionLibrary_h_3326024578(TEXT("/Script/VTMHotUpdateEditor"),
	Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdateEditor_VTMHotUpdateEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_assestcasting_Plugins_VTMHotUpdate_VTMHotUpdate_Source_VTMHotUpdateEditor_VTMHotUpdateEditorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
