// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssestDiffDefine.h"

#include "VTMHotUpdateEditorFunctionLibrary.generated.h"

UCLASS()
class VTMHOTUPDATEEDITOR_API UVTMHotUpdateEditorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "AssestCasting")
	static TArray<FMaterialParamData> GetMaterialParamData(const FString& _csvFilePath);

	template<typename T>
	static FOutPutJsonData GetAllCombinResult( const T& _diffData,const FString& _pakName);

	template<typename T>
	static void GetCombinations(const TArray<TArray<T>>& arrays, TArray<T>& combination, int arrayIndex, TArray<TArray<T>>& allCombinations);

	template<typename T>
	static void GenerateCombinations(const TArray<TArray<T>>& Arrays, TArray<T>& CurrentCombination, int32 Depth, TArray<TArray<T>>& AllCombinations);
};
