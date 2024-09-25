#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialInstance.h"
#include "VTMCreateModDefine.generated.h"
UENUM()
enum ECMMaterialParamValueType
{
	MaterialParamValueType_Increase UMETA(DisplayName = "递增值"),
	//MaterialParamValueType_CopyCount  UMETA(DisplayName = "复制数量"),
	MaterialParamValueType_Arr UMETA(DisplayName = "随机贴图数组"),
};

UENUM()
enum ECMMaterialParamType 
{
	Scalar = 0u UMETA(DisplayName = "标量 Scalar"),
	Vector UMETA(DisplayName = "向量 Vector"),
	Texture UMETA(DisplayName = "纹理 Texture"),
	DoubleVector UMETA(DisplayName = "高精度向量 DoubleVector"),
	Font UMETA(DisplayName = "字体 Font"),
	VirtualTexture UMETA(DisplayName = "虚拟纹理 VirtualTexture"),
	SparseVolumeTexture UMETA(DisplayName = "稀疏体积纹理 SparseVolumeTexture"),
	StaticSwitch UMETA(DisplayName = "静态开关 StaticSwitch"),
};

USTRUCT(BlueprintType)
struct FCooperateMPCChangeData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "需要配合的MPC参数名"))
	FString MPCParamName = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "需要配合的MPC参数值 如果是Scalar类型 只取R的值"))
	FLinearColor MPCParamValue = FLinearColor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "是否为Scalar"))
	bool bIsScalarValue = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "需要额外复制到铸造后文件夹的带后缀文件名,源指向资产pak目录"))
	TArray<FString> ExtendCopyFile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta =
		(DisplayName = "启用的条件 插槽+材质名&&插槽1#材质1实例名#材质参数名1#材质参数值&插槽2#材质2实例名#材质参数名2#材质参数值 || 插槽3#材质3实例名#材质参数名3#材质参数值&插槽4#材质4实例名#材质参数名4#材质参数值"))
	FString EnableCondition = TEXT("");

	FCooperateMPCChangeData()
	{
		MPCParamName = TEXT("");
		MPCParamValue = FLinearColor();
		bIsScalarValue = false;
		ExtendCopyFile.Empty();
		EnableCondition = TEXT("");
	}
};

USTRUCT(BlueprintType)
struct FCooperateMPC
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "需要配合的MPC参数集"))
	UMaterialParameterCollection* MPC = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCooperateMPC", meta = (DisplayName = "MPC参数集改变设置"))
	TArray<FCooperateMPCChangeData> MPCChangeDataArr;

	FCooperateMPC()
	{
		MPC = nullptr;
		MPCChangeDataArr.Empty();
	}
};


USTRUCT(BlueprintType)
struct FCastingMachineMaterialParamData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineMaterialParamData", meta = (DisplayName = "材质参数类型"))
	TEnumAsByte<ECMMaterialParamType> ParamType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineMaterialParamData", meta = (DisplayName = "材质参数值变化的类型 "))
	TEnumAsByte<ECMMaterialParamValueType> ParamValueType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineMaterialParamData", meta = (DisplayName = "范围 ", Tooltip = "仅当材质参数值变化的类型为递增值 时需要填写！ex:0-1"))
	FString Range = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineMaterialParamData", meta = (DisplayName = "同一种效果重复的数量 ", Tooltip = "ex:枪皮磨损度为1的 重复100把 key:参数值 value:重复数量"))
	TMap<FString, int32> CopyCountMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineMaterialParamData", meta = (DisplayName = "随机贴图数组 ", Tooltip = "仅当材质参数值变化的类型为随机贴图数组 时需要填写！"))
	TArray<UTexture2D*> TextureArr;

	UPROPERTY()
	TArray<FString> TexturePathStr;
	
	FCastingMachineMaterialParamData()
	{
		ParamType = ECMMaterialParamType::Scalar;
		ParamValueType = ECMMaterialParamValueType::MaterialParamValueType_Increase;
		Range = TEXT("");
		CopyCountMap.Empty();
		TextureArr.Empty();
		TexturePathStr.Empty();
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineMaterialSlotData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "需要变化材质参数的材质实例插槽ID"))
	int32 SlotId = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "需要变化材质参数的材质实例"))
	UMaterialInstance* MaterialInstance = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "需要变化的材质路径"))
	FString MaterialPath = TEXT("");
	/// <summary>
	/// key : 参数名  data : 参数值
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "需要变化的材质参数合集"))
	TMap<FString, FCastingMachineMaterialParamData> MaterialParamMap;

	FCastingMachineMaterialSlotData()
	{
		SlotId = 0;
		MaterialInstance = nullptr;
		MaterialPath = TEXT("");
		MaterialParamMap.Empty();
	}

};

USTRUCT(BlueprintType)
struct FCastingMachineMaterialSlotChangeData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "需要替换材质实例的插槽"))
	int32 SlotId = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData", meta = (DisplayName = "替换的材质实例数组"))
	TArray<UMaterialInstance*> MaterialArr;

	FCastingMachineMaterialSlotChangeData()
	{
		SlotId = 0;
		MaterialArr.Empty();
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineJsonData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FString SkeletonPath = TEXT("");

	/// <summary>
	/// key 插槽id  data : 插槽材质信息
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCastingMachineJsonData")
	TMap<int32, FCastingMachineMaterialSlotData> MaterialSlotMap;

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FString ActorPath = TEXT("");

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FString MaterialPath = TEXT("");

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	float FloatDesc = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	int32 IntDesc = 0;

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FVector VectorDesc = FVector();

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FString StringDesc = TEXT("");

	UPROPERTY(BlueprintReadWrite, Category = "FCastingMachineJsonData")
	FLinearColor Colors = FLinearColor();

	FCastingMachineJsonData()
	{
		SkeletonPath = TEXT("");
		MaterialSlotMap.Empty();
		ActorPath = TEXT("");
		MaterialPath = TEXT("");
		FloatDesc = 0.0f;
		IntDesc = 0;
		VectorDesc = FVector();
		StringDesc = TEXT("");
		Colors = FLinearColor();
	}
};


USTRUCT(BlueprintType)
struct FCastingMachineOutputSlotData
{
	GENERATED_BODY()
public:

	UPROPERTY()
	int32 SlotId = 0;

	UPROPERTY()
	FString MaterialPath = TEXT("");

	FCastingMachineOutputSlotData()
	{
		SlotId = 0;
		MaterialPath = TEXT("");
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineOutputChangeParamMaterialData
{
	GENERATED_BODY()
public:

	UPROPERTY()
	int32 SlotId = 0;

	UPROPERTY()
	FString MaterialPath = TEXT("");

	UPROPERTY()
	FString ParamName = TEXT("");

	UPROPERTY()
	FString ParamValue = TEXT("");

	UPROPERTY()
	bool bIsTextureValue = false;

	FCastingMachineOutputChangeParamMaterialData()
	{
		SlotId = 0;
		MaterialPath = TEXT("");
		ParamName = TEXT("");
		ParamValue = TEXT("");
		bIsTextureValue = false;
	}
};


USTRUCT(BlueprintType)
struct FCastingMachineOutputChangeParamMaterialDataArray
{
	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<FCastingMachineOutputChangeParamMaterialData> ChangeParamMaterialDataArar;

	FCastingMachineOutputChangeParamMaterialDataArray()
	{
		ChangeParamMaterialDataArar.Empty();
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineMPCOutputJsonData
{
	GENERATED_BODY()
public:

	UPROPERTY()
	FString MPCPath = TEXT("");

	UPROPERTY()
	TArray<FCooperateMPCChangeData> MPCChangeDataArr;

	FCastingMachineMPCOutputJsonData()
	{
		MPCPath = TEXT("");
		MPCChangeDataArr.Empty();
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineOutputJsonData
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FString SkeletonPath = TEXT("");

	UPROPERTY()
	FString ActorPath = TEXT("");

	UPROPERTY()
	FString CaptureActorPath = TEXT("");

	UPROPERTY()
	FString AssetName = TEXT("");

	UPROPERTY()
	FString AssetInfo = TEXT("");

	UPROPERTY()
	FVector2D RenderSize = FVector2D();
	UPROPERTY()
	int32 ContainerIndex = 0;

	UPROPERTY()
	TArray<FCastingMachineOutputSlotData> MaterialSlotArr;

	UPROPERTY()
	TArray<FCastingMachineOutputChangeParamMaterialDataArray> changeParamMaterialDataArar;

	UPROPERTY()
	TArray<FCastingMachineMPCOutputJsonData> CooperateMPC;

	FCastingMachineOutputJsonData()
	{
		SkeletonPath = TEXT("");
		ActorPath = TEXT("");
		CaptureActorPath = TEXT("");
		AssetName = TEXT("");
		AssetInfo = TEXT("");
		RenderSize = FVector2D();
		ContainerIndex = 0;
		MaterialSlotArr.Empty();
		changeParamMaterialDataArar.Empty();
		CooperateMPC.Empty();
	}
};

USTRUCT(BlueprintType)
struct FCastingMachineOutputJsonDataArr
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TArray<FCastingMachineOutputJsonData> OutputJsonDataArr;

	FCastingMachineOutputJsonDataArr()
	{
		OutputJsonDataArr.Empty();
	}

};

USTRUCT(BlueprintType)
struct FCastingMachineAssetDescriptionJsonData
{
	GENERATED_BODY()

public:

	UPROPERTY()
	FString SkeletonPath = TEXT("");

	UPROPERTY()
	FString AssetInfo = TEXT("");

	UPROPERTY()
	FString EengineVersion = TEXT("");

	UPROPERTY()
	TArray<FCastingMachineOutputSlotData> MaterialSlotArr;

	UPROPERTY()
	TArray<FCastingMachineOutputChangeParamMaterialDataArray> changeParamMaterialDataArar;

	FCastingMachineAssetDescriptionJsonData()
	{
		SkeletonPath = TEXT("");
		AssetInfo = TEXT("");
		EengineVersion = TEXT("");
		MaterialSlotArr.Empty();
		changeParamMaterialDataArar.Empty();
	}
};

