#pragma once

#include "CoreMinimal.h"
#include "VTMHotupdateDefine.generated.h"


DECLARE_DYNAMIC_DELEGATE_OneParam(FSpawnModActorDelegate, AActor*, _modActor);
DECLARE_DYNAMIC_DELEGATE_OneParam(FLoadModResourceDelegate, UObject*, _modResource);

UENUM (BlueprintType)
enum EModRequestType
{
	RequestActor,
	RequestResource,
	RequestLevel,
	JustDownload
};

USTRUCT(BlueprintType)
struct FLodModsStruct
{
	GENERATED_BODY()

public:

	//Mods文件存放路径.
	UPROPERTY(EditAnywhere)
	FString						ModsPath;

	//最大同时下载Mod数量.
	UPROPERTY(EditAnywhere)
	int32 						MaxDownloadingModNum;

	//视野锥体范围.
	UPROPERTY(EditAnywhere)
	float 						ConeRange;

	//停留时间阈值.
	UPROPERTY(EditAnywhere)
	float 						StayTime;

	//最大pak文件大小.
	UPROPERTY(EditAnywhere)
	float 						MaxPakSize;

	//最大展示时间.
	UPROPERTY(EditAnywhere)
	float 						DisplayTime;

	//最远展示距离.
	UPROPERTY(EditAnywhere)
	float 						MaxDistance;

public:

	FLodModsStruct()
	{
		ModsPath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Mods"));
		MaxDownloadingModNum = 5;
		ConeRange = 100.0f;
		StayTime = 5.0f;
		MaxPakSize = 1024.0f * 1024.0f;
		DisplayTime = 10.0f;
		MaxDistance = 1000.0f;
	}
};

/// <summary>
/// mod下载的信息
/// </summary>
USTRUCT(BlueprintType)
struct FModDownloadData
{
	GENERATED_BODY()
	 
public:
	/// <summary>
	/// 下载地址 需要传入
	/// </summary>
	UPROPERTY(BlueprintReadWrite)
	FString DownloadURL = TEXT("");
	
	/// <summary>
	/// ModID 默认为下载地址,如果传入则使用传入的
	/// </summary>
	UPROPERTY(BlueprintReadWrite)
	FString ModId = TEXT("");

	/// <summary>
	/// 存放路径 内部拼接 不需要传入时设置
	/// </summary>
	UPROPERTY()
	FString SaveFileName = TEXT("");

	/// <summary>
	/// 请求下载的实例 需要传入
	/// </summary>
	UPROPERTY(BlueprintReadWrite)
	UObject* Instigator = nullptr;

	FModDownloadData()
	{
		DownloadURL = TEXT("");
		ModId = TEXT("");
		SaveFileName = TEXT("");
		Instigator = nullptr;
	}

	FModDownloadData(const FString& _downloadUrl, const FString& _modId)
	{
		DownloadURL = _downloadUrl;
		ModId = GetModId();
		SaveFileName = TEXT("");
		Instigator = nullptr;
	}

	const FString& GetModId() const
	{
		return ModId.Equals(TEXT("")) ? DownloadURL : ModId;
	}
};

/// <summary>
/// mod资源依赖关系
/// </summary>
USTRUCT(BlueprintType)
struct FModDependenciesObjData
{
	GENERATED_BODY()

	//名称
	UPROPERTY(BlueprintReadOnly)
	FString Name = TEXT("");

	//相对路径
	UPROPERTY(BlueprintReadOnly)
	FString RelativePath = TEXT("");

	//资产类型
	UPROPERTY(BlueprintReadOnly)
	FString AssetType = TEXT("");
};

/// <summary>
/// mod资源的信息
/// </summary>
USTRUCT(BlueprintType)
struct FModObjData
{
	GENERATED_BODY()

	//对应资产ID
	UPROPERTY(BlueprintReadOnly)
	FString ModObjId = TEXT("");

	//资源名称
	UPROPERTY(BlueprintReadOnly)
	FString Name = TEXT("");

	//资源相对路径
	UPROPERTY(BlueprintReadOnly)
	FString RelativePath = TEXT("");

	//资源类型
	UPROPERTY(BlueprintReadOnly)
	FString AssetType = TEXT("");

	//依赖的资源
	UPROPERTY(BlueprintReadOnly)
	TArray<FModDependenciesObjData> Dependencies;
};

/// <summary>
/// mod文件中的信息
/// </summary>
USTRUCT(BlueprintType)
struct FModData
{
	GENERATED_BODY()

	/// <summary>
	/// ModID 当前版本和下载地址一致 后期可能会有变化
	/// </summary>
	UPROPERTY(BlueprintReadOnly)
	FString ModId = TEXT("");

	/// <summary>
	/// Mod名称 从pak包中的json文件读取 
	/// </summary>
	UPROPERTY(BlueprintReadOnly)
	FString ModName = TEXT("");

	/// <summary>
	/// 挂在路径
	/// </summary>
	UPROPERTY(BlueprintReadOnly)
	FString MountPoint = TEXT("");

	/// <summary>
	/// mod中的资源信息
	/// </summary>
	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FModObjData> ModObjectMap;

	UPROPERTY(BlueprintReadOnly)
	FString Md5 = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	FString Hash256 = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	FString Hash = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	TArray<FString> PrimaryAssetsId ;

	FModData()
	{
		ModId = TEXT("");
		ModName = TEXT("");
		MountPoint = TEXT("");
		ModObjectMap.Empty();
		Md5 = TEXT("");
		Hash256 = TEXT("");
		Hash = TEXT("");
		PrimaryAssetsId.Empty();
	};
};

/// <summary>
/// GUID缓存数据类型
/// </summary>
UENUM(BlueprintType)
enum EGuidCacheType
{
	//实例Actor.
	EGuidCacheType_Object = 0,
	//CDO.
	EGuidCacheType_CDO = 1,
	//class类.
	EGuidCacheType_Class = 2,
};

USTRUCT(BlueprintType)
struct FReconnectStruct
{
	GENERATED_BODY()

public:

	FReconnectStruct()
	{
		ObjectId = 0L;
		PathName = NAME_None;
		OuterObjectId = 0L;
	}

	UPROPERTY(BlueprintReadOnly)
	int64 ObjectId = 0L;

	UPROPERTY(BlueprintReadOnly)
	FName PathName = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	int64 OuterObjectId = 0L;

	UPROPERTY(BlueprintReadOnly)
	TArray<int64> ObjectIdMap;

	UPROPERTY(BlueprintReadOnly)
	TArray<FName> PathNameMap;

	UPROPERTY(BlueprintReadOnly)
	TArray< int64> OuterObjectIdMap;
};

USTRUCT(BlueprintType)
struct FSpawnModActorStruct
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadOnly)
	FString ModId = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	FTransform Transform;

	UPROPERTY(BlueprintReadOnly)
	FSpawnModActorDelegate SpawnModActorDelgate;
};

USTRUCT(BlueprintType)
struct FLoadModResourceStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FString ModId = TEXT("");

	UPROPERTY(BlueprintReadOnly)
	FLoadModResourceDelegate LoadModResourceDelegate;
};

/// <summary>
/// 下载状态
/// </summary>
UENUM(BlueprintType)
enum EHotUpdateState
{
	//请求版本.
	EHotUpdateState_ReqVersion,
	//请求版本失败.
	EHotUpdateState_ReqVersionFailed,
	//下载中.
	EHotUpdateState_Downloading,
	//下载失败.
	EHotUpdateState_DownloadFailed,
	//网络错误.
	EHotUpdateState_NetErr,
	//挂载中.
	EHotUpdateState_MountingPak,
	//挂载失败.
	EHotUpdateState_MountPakFailed,
	//更新完成.
	EHotUpdateState_Success
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModLoadResultDelegate, const FModData&, _modData, const bool, _isSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FModDownloadProgresstDelegate, const FModDownloadData&, _modDownloadData, const EHotUpdateState&, _state, const float&, _progress);