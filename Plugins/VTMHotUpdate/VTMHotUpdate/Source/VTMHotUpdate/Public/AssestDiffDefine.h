
#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialParameterCollection.h"
#include "VTMCreateModDefine.h"
#include "RenderCommandFence.h"
#include "Runtime/ImageWriteQueue/Public/ImageWriteBlueprintLibrary.h"
#include "IImageWrapper.h"
#include "AssestDiffDefine.generated.h"


UENUM(BlueprintType)
enum  EPakConfigMod
{
	Development UMETA(DisplayName = "Development"),
	DebugGame UMETA(DisplayName = "DebugGame"),
	Shipping UMETA(DisplayName = "Shipping"),
};

USTRUCT(BlueprintType)
struct VTMHOTUPDATE_API FAssetScanConfig
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Filters", meta = (DisplayName = "输出路径"))
	FString OutPutPath = TEXT("");

	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "是否是铸造用关卡", Tooltip = "必填！！！ 如果是单独资产不要勾选！！"))
	bool IsCastingMap = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "pak包名称"))
	FString ModName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "包含的文件"))
	TArray <FFilePath> FilesPath;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, meta = (RelativeToGameContentDir, LongPackageName, DisplayName = "必要的资源"))
	TArray<FDirectoryPath> AssetIncludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "排除的后缀名 不加. ex:lua"))
	TArray<FString> ExcludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayName = "主要资产列表 "))
	TArray <FFilePath> PrimaryAsset;

	UPROPERTY(BlueprintReadWrite, meta = (DisplayName = "是否需要透明图"))
	bool bIsNeedAlpha = false;
};
USTRUCT(BlueprintType)
struct VTMHOTUPDATE_API FRuntimePakSettings
{
	GENERATED_USTRUCT_BODY()

	/// <summary>
	/// 是否使用本工程进行打包
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSelfPorject = true;

	/// <summary>
	/// 要打包的文件夹
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DirectoryArr;

	/// <summary>
	/// 要打包的文件
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> FilesArr;

	/// <summary>
	/// 主要资产列表
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PrimaryAssetArr;

	/// <summary>
	/// 要排除的后缀
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ExcludeArr;

	/// <summary>
	/// 目标工程路径
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetProjectPath;

	/// <summary>
	/// 目标工程名
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetProjectName;

	/// <summary>
	/// 目标引擎路径
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetEnginePath;

	/// <summary>
	/// 目标pak包名
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetPakName;

	/// <summary>
	/// 下载地址
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DownloadUrl = TEXT("Default");

	/// <summary>
	/// 平台
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetPaltform = TEXT("Win64");

	/// <summary>
	/// 输出路径
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OutputPath = TEXT("Default");
};

/// <summary>
/// 材质效果排列组合结果
/// </summary>
USTRUCT(BlueprintType)
struct FMaterialParamDataResult
{
	GENERATED_BODY()

public:

	//骨骼材质插槽索引
	UPROPERTY( BlueprintReadWrite)
	int32 SkeletonSlotIndex = 0;

	UPROPERTY(BlueprintReadWrite)
	FString MaterialPath;

	//材质效果描述
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> ParamDatas;

	UPROPERTY(BlueprintReadWrite)
	TArray<FString> AddtionSettings;
};

/// <summary>
/// 一种效果的材质参数数据
/// </summary>
USTRUCT(BlueprintType)
struct FMaterialParamData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMaterialParamData", meta = (DisplayName = "材质参数", Tooltip = "格式: 材质参数名_参数类型_参数值 ") )
	TArray<FString> ParamDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMaterialParamData", meta = (DisplayName = "同中效果重复的次数"))
	int32 CopyCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMaterialParamData", meta = (DisplayName = "额外配置"))
	TArray<FString> AddtionSettings;
};


/// <summary>
/// 单一骨骼插槽材质数据
/// </summary>
USTRUCT(BlueprintType)
struct FMaterialInstanceParam
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMaterialInstanceParam", meta = (DisplayName = "材质实例"))
	UMaterial* Material = nullptr;

	UPROPERTY(BlueprintReadWrite, Category = "FMaterialInstanceParam", meta = (DisplayName = "材质效果集合"))
	TArray<FMaterialParamData> MaterialParamMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FMaterialInstanceParam", meta = (DisplayName = "材质效果描述csv文件 如果有值则忽略材质效果集合"))
	FFilePath MaterialDescPath;
};

/// <summary>
/// 差异化参数结构
/// </summary>
USTRUCT(BlueprintType)
struct FAssestDiff
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "数字资产名称"))
	FString AssetName = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "数字资产描述"))
	FString AssetInfo = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "缩略图尺寸"))
	FVector2D RenderSize = FVector2D(1024.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "缩略图类型"))
	EDesiredImageFormat RenderFormat = EDesiredImageFormat::PNG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FAssestDiff", meta = (DisplayName = "差异化材质实例数据"))
	TMap<int32, FMaterialInstanceParam> MaterialInstanceParamMap;
};

/// <summary>
/// 差异化参数结构
/// </summary>
USTRUCT(BlueprintType)
struct FSkeletalMeshAssestDiff 
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 AssestType = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "数据配置"))
	FAssestDiff AssestDiff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "指定骨骼"))
	USkeletalMesh* TargetMesh = nullptr;
};


/// <summary>
/// 差异化参数结构
/// </summary>
USTRUCT(BlueprintType)
struct FStaticMeshAssestDiff 
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 AssestType = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "数据配置"))
	FAssestDiff AssestDiff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "指定静态网格体"))
	UStaticMesh* TargetMesh = nullptr;
};

/// <summary>
/// 最终组合输出json数据 单一组合
/// </summary>
USTRUCT(BlueprintType)
struct FOutPutJsonDataSingle
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<FMaterialParamDataResult> MaterialResult;
};

/// <summary>
/// 最终组合输出json数据
/// </summary>
USTRUCT(BlueprintType)
struct FOutPutJsonData
{
	GENERATED_BODY()

public:
	//骨骼路径.
	UPROPERTY()
	FString TargetAssestPath = TEXT("");

	UPROPERTY()
	int32 AssestType = 1;

	//资产名称.
	UPROPERTY()
	FString AssetName = TEXT("");

	//资产描述.
	UPROPERTY()
	FString AssetInfo = TEXT("");

	//引擎版本描述.
	UPROPERTY()
	FString EngineInfo = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "缩略图尺寸"))
	FVector2D RenderSize = FVector2D(256.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "缩略图类型"))
	EDesiredImageFormat RenderFormat = EDesiredImageFormat::PNG;

	UPROPERTY()
	TArray<FOutPutJsonDataSingle> MaterialParamDataResults;
};