// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
// engine header
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"

#include "AssestDiffDefine.h"
#include "PakSettings.generated.h"

/** Singleton wrapper to allow for using the setting structure in SSettingsView */
USTRUCT(BlueprintType)
struct VTMHOTUPDATE_API FPakSettings
{
	GENERATED_USTRUCT_BODY()
public:

	FPakSettings();

	FORCEINLINE static FPakSettings* Get()
	{
		static FPakSettings StaticIns;

		return &StaticIns;
	}

	//将AssetIncludeFilters和FilesPath转换为json
	FString ToJsonString(const FAssetScanConfig& _assetConfig);
	FString ToJsonString(const FString& _targetProjectPath, const TArray<FString>& _pakDirectorys, const TArray<FString>& _primaryAssets, const TArray<FString>& _pakFiles, const TArray<FString>& _excludeFilter, const FString& _pakName);

	//读取AssetIncludeFilters,递归的将所有文件夹下的文件都加入到数组中 返回
	TArray<FString> GetAssetIncludeFilters(const TArray<FString>& _pakDirectorys, TArray<FString>& Dependencies);

	TArray<FString> GetDependencies(const FString& AssetFullPath, const FString& AssetPath, TArray<FString>& Dependencies, TMap<FString, TArray<FName>>& DependenciesMap);

	void RecursiveGetFiles(const FString& DirectoryPath, TArray<FString>& Files);

	FString RuntimeToJsonString(const FRuntimePakSettings& _runtimePakSettings);

	FString GetAssetType(const FString& _absAssetPath, const FString& _fullcontentPath);

public:
	bool bIsByFileList = true;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "打包模式"))
	TEnumAsByte<EPakConfigMod> ConfigMod = EPakConfigMod::Development;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Filters", meta = (DisplayName = "打包设置"))
	FAssetScanConfig AssetScanConfig;

	TArray<FString> PrimaryAssetsFullPath;
};