// Created by bst on 2024/5/20.

#pragma once

#include "CoreMinimal.h"
#include  "Subsystems/EngineSubsystem.h"
#include "VTMHotupdateDefine.h"
#include "Kismet/GameplayStatics.h"
#include "HAL/PlatformFileManager.h"
#include "IPlatformFilePak.h"
#include "GameFramework/Actor.h"
#include "ModsManager.generated.h"

/*
 * mod的管理类,提供mod下载和挂载的功能接口。
 * 提供actor重连的功能接口(解决多端mod下载顺序不通所导致的actor不同步)
 * 1.客户端通知服务器下载mod
 * 2.服务器广播所有符合条件的客户端下载mod
 * 3.服务器下载mod完成后,创建需要同步的actor
 * 4.客户端下载完成后,从服务器获取actor的GUID缓存数据并注册,完成后通知服务器
 * 5.服务器收到通知后,关闭对应actor的actorchannel,对该客户端的指定actor进行重连
 *
 */


class UModsDownloader;
class AModAssestActor;
class UModReplicateManager;
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "ModsSetting"))
class VTMHOTUPDATE_API UModsSetting :public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(config, EditAnywhere, Category = "Config | ModsSetting")
	FLodModsStruct LoadModSetting;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownloadModProgressDelegate, const FModDownloadData&, _modDownloadData, const EHotUpdateState&, _state, const float&, _progress);

DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDownloadModProgressSingleDelegate, const FModDownloadData&, _modDownloadData, const EHotUpdateState&, _state, const float&, _progress);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FDownloadModResultDelegate, const FModData&, _modData, const bool, result);

/// <summary>
/// 管理Mods的下载和加载
/// </summary>
UCLASS()
class VTMHOTUPDATE_API UModsManager : public UEngineSubsystem
{
	GENERATED_BODY()

public:
	UModsManager();
	~UModsManager();

	// 是否允许被创建
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override { return true; }

	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	/// <summary>
	/// 获取modsManager实例
	/// </summary>
	/// <returns></returns>
	UFUNCTION(BlueprintCallable, DisplayName = "GetModsManagerInstance")
	static UModsManager* GetInstance();

private:

	void InstallMods();

	static UModsManager* ModsInstance;

	bool bIsPIEStandalong = false;
public:

	UFUNCTION(BlueprintCallable)
	void CreateDownloader(const FModDownloadData& _modsDownloadData);

	/// <summary>
	/// 记录开始下载的Mod
	/// </summary>
	/// <param name="_modDownloader"></param>
	UFUNCTION()
	bool BegingDownloadMod(UModsDownloader* _modDownloader);

	/// <summary>
	/// 更新Mod下载进度
	/// </summary>
	/// <param name="_modFileName"></param>
	/// <param name="_progress"></param>
	UFUNCTION()
	void UpdateDownloadingMods(const FModDownloadData& _modDownloadData, const float& _progress);

	/// <summary>
	/// Mod下载成功
	/// </summary>
	/// <param name="_modName"></param>
	/// <param name="_modFileName"></param>
	UFUNCTION()
	void DownloadModSuccess(const FModDownloadData& _modDownloadData);

	/// <summary>
	/// Mod下载失败
	/// </summary>
	/// <param name="_modFileName"></param>
	UFUNCTION()
	void DownloadModFailed(const FModDownloadData& _modDownloadData);

	/// <summary>
	/// 挂载Mod
	/// </summary>
	/// <param name="_modName"></param>
	/// <param name="_modFileName"></param>
	bool LoadMod(const FModDownloadData& _modDownloadData, FModData& _outModData);
	bool LoadMod(const FString& _saveName, FModData& _outModData,const FString& _modId = TEXT(""));

	/// <summary>
	/// 获取ModSetting
	/// </summary>
	/// <returns></returns>
	UFUNCTION()
	const FLodModsStruct GetLoadModsSetting() { return LoadModSetting; }

	/// <summary>
	/// 需要用到mod中资源的模块，调用这个函数，传递mod下载所需的数据，同时注册一个mod下载完成的回调函数
	/// </summary>
	/// <param name="_downloadData"></param>
	/// <param name="_callBackFuc"></param>
	UFUNCTION()
	void RequestLoadResouceFormMod(const FModDownloadData& _downloadData, FDownloadModResultDelegate _callBackFuc);

	UFUNCTION()
	void RegistModDownloadCallBack(const FString& _modId, FDownloadModResultDelegate _callBackFuc);

	UFUNCTION()
	void RegistModDownloadProgressCallBack(const FString& _modId, FDownloadModProgressSingleDelegate _callBackFuc);

	void UpdateSingleDownloadProgress(const FModDownloadData& _downloadData,const  EHotUpdateState& _state, const float& _progress);

	UFUNCTION()
	bool IsModsLoaded(const FString& _modName);

	UFUNCTION()
	const FModData& GetModData(const FString& _modId);

	/// <summary>
	/// 获取需要同步的object 此函数只应在服务器运行
	/// </summary>
	/// <param name="_objectid"></param>
	/// <returns></returns>
	UFUNCTION()
	UObject* GetReplicateObj(const FString& _objectid);

	/// <summary>
	///	服务器端运行
	/// 获取actor在服务器的GUID缓存数据 包括actor CDO和class 
	/// </summary>
	/// <param name="_actor"></param>
	/// <param name="_value"></param>
	UFUNCTION(BlueprintCallable)
	void GetObjectGuidCacheData(UObject* _actor, FReconnectStruct& _value);

	/// <summary>
	/// 服务器段运行
	/// 关闭对应的ActorChannel 使得actorchannel重新创建
	/// </summary>
	/// <param name="_objectid"></param>
	UFUNCTION(BlueprintCallable)
	void CloseActorChannel(const int64& _objectid);

	/// <summary>
	/// 客户端运行
	/// 在客户端注册object的GUID缓存数据 包括object CDO和class ,这些数据用于重连时重新创建actor 以达到同步的目的
	/// </summary>
	/// <param name="_value"></param>
	UFUNCTION(BlueprintCallable)
	void RegistActorGuidCacheForClient(const FReconnectStruct& _value);

	UFUNCTION(BlueprintCallable)
	void ReadModFileJson(const FString& _modName, const FString& _modSavePath, FModData& _outModData, const FString& _modId = TEXT(""));

	UFUNCTION(BlueprintCallable)
	FModObjData GetModObjData(const FString& _modId, const FString& _modAssetId);

	UFUNCTION(BlueprintCallable)
	static  FString SplicingModActorPath(const FString& _mountPoint, const FString& _actorName, const FString& _relativePath)
	{
		FString modActorPath = FPaths::Combine(_mountPoint, _relativePath, FString::Printf(TEXT("%s.%s"), *_actorName, *_actorName));
		return modActorPath;
	}

	UFUNCTION(BlueprintCallable)
	static UClass* BpLoadModResouce(const FString& ModObjId, const FString& ModID, AActor* Instigator , UObject* Outer, const FString& Name, const FString& Filename = TEXT(""), int32 LoadFlags = 0, UPackageMap* Sandbox = nullptr)
	{
		return UModsManager::LoadModResouce<UObject>(ModObjId, ModID, Instigator, Outer, *Name, *Filename, LoadFlags, Sandbox);
	}

	UFUNCTION(BlueprintCallable)
	static AActor* BpSpawnModActor(const FString& ModActorId, const FString& ModId, AActor* Instigator, const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner)
	{
		return  UModsManager::SpawnModActor<AActor>(ModActorId, ModId, Instigator, WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner);
	}

	/// <summary>
	/// 封装了loadobject 和loadclass,检查mod是否加载
	/// <returns></returns>
	template<typename T>
	static UClass* LoadModResouce(const FString& ModObjId, const FString& ModID, AActor* Instigator, UObject* Outer, const TCHAR* Name, const TCHAR* Filename = nullptr, uint32 LoadFlags = LOAD_None, UPackageMap* Sandbox = nullptr)
	{
		UModsManager* modManager = UModsManager::GetInstance();
		if (!modManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("LoadModResouce:: modManager is nullptr"));
			return nullptr;
		}

		if (!modManager->IsModsLoaded(ModID))
		{
			return nullptr;
		}

		if (modManager->bIsPIEStandalong)
		{
			//编辑器Standlong
			FPlatformFileManager::Get().SetPlatformFile(*modManager->PakPlatformFile.Get());
		}

		if (Outer == nullptr)
		{
			Outer = GWorld;
		}

		FString classFileName = Name;
		classFileName += "_C";
		UClass* classResouce = LoadClass<T>(Outer, *classFileName, Filename, LoadFlags, Sandbox);
		if (classResouce)
		{
			if (GWorld->GetNetMode() == NM_DedicatedServer)
			{
				if (classResouce->IsSupportedForNetworking())
				{
					modManager->ReplicateModObjectMap.Add(ModObjId, classResouce);

					TArray<FString>& ReplicateObjs = modManager->ReplicateModIdObjectMap.FindOrAdd(ModID);
					ReplicateObjs.AddUnique(ModObjId);
				}
			}
			if (modManager->bIsPIEStandalong)
			{
				//编辑器Standlong
				FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
			}
			return classResouce;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("LoadModResouce:: loadClass Failed name:%s"), Filename);
			UObject* objectResouce = LoadObject<T>(Outer, Name, Filename, LoadFlags, Sandbox);
			if (objectResouce)
			{
				if (GWorld->GetNetMode() == NM_DedicatedServer)
				{
					if (objectResouce->IsSupportedForNetworking())
					{
						modManager->ReplicateModObjectMap.Add(ModObjId, objectResouce);
						TArray<FString>& ReplicateObjs = modManager->ReplicateModIdObjectMap.FindOrAdd(ModID);
						ReplicateObjs.AddUnique(ModObjId);
					}
				}
				if (modManager->bIsPIEStandalong)
				{
					//编辑器Standlong
					FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
				}
				return objectResouce->GetClass();
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("LoadModResouce:: loadObject Failed name:%s"), Filename);
			}
		}

		if (modManager->bIsPIEStandalong)
		{
			//编辑器Standlong
			FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
		}

		return nullptr;
	}

	/// <summary>
	/// 封装了BeginDeferredActorSpawnFromClass 和FinishSpawningActor 判断要加载的资源是否支持网路同步 如果支持 则添加到ReplicateModActors,为后续actor重连做准备
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="WorldContextObject"></param>
	/// <param name="ActorClass"></param>
	/// <param name="SpawnTransform"></param>
	/// <param name="CollisionHandlingOverride"></param>
	/// <param name="Owner"></param>
	/// <param name="TransformScaleMethod"></param>
	/// <returns></returns>
	template<typename T>
	static T* SpawnModActor(const FString& ModActorId, const FString& ModId, AActor* Instigator, const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner)
	{
		UModsManager* modManager = UModsManager::GetInstance();
		if (!modManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnModActor:: modManager is nullptr"));
			return nullptr;
		}

		if (!ActorClass) return nullptr;

		check(ActorClass);

		if (WorldContextObject == nullptr)
		{
			WorldContextObject = GWorld;
		}

		if (modManager->bIsPIEStandalong)
		{
			//编辑器Standlong
			FPlatformFileManager::Get().SetPlatformFile(*modManager->PakPlatformFile.Get());
		}
		AActor* actor = UGameplayStatics::BeginDeferredActorSpawnFromClass(WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner);
		if (actor)
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnModActor:: BeginDeferredActorSpawnFromClass OK!! class:%s"), *ActorClass->GetName());

			UGameplayStatics::FinishSpawningActor(actor, SpawnTransform);

			if (GWorld->GetNetMode() == NM_DedicatedServer)
			{
				//如果是服务器生成的actor 记录下来.
				if (actor->IsSupportedForNetworking())
				{
					modManager->ReplicateModObjectMap.Add(ModActorId, actor);
					TArray<FString>& ReplicateObjs = modManager->ReplicateModIdObjectMap.FindOrAdd(ModId);
					ReplicateObjs.AddUnique(ModActorId);
				}
			}
			if (modManager->bIsPIEStandalong)
			{
				//编辑器Standlong
				FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
			}

			return Cast<T>(actor);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnModActor:: BeginDeferredActorSpawnFromClass Failed class:%s"), *ActorClass->GetName());
			if (modManager->bIsPIEStandalong)
			{
				//编辑器Standlong
				FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
			}

			return nullptr;
		}
	}

	/// <summary>
	/// 要切换mod中的关卡时调用
	/// </summary>
	/// <param name="_modId">mod下载地址</param>
	/// <param name="_levelName">关卡名</param>
	UFUNCTION(BlueprintCallable)
	static void OpenModLevel(const FString& _modId, const FString& _levelName, UObject* WorldContextObject)
	{
		UModsManager* modManager = UModsManager::GetInstance();
		if (!modManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("OpenModLevel:: modManager is nullptr"));
			return;
		}
		if (!modManager->InstalledModsMap.Contains(_modId)) return;

		TMap<FString, FModObjData> levelMap = *modManager->InstalledModLevelMap.Find(_modId);
		FModData modData = *modManager->InstalledModsMap.Find(_modId);

		if (levelMap.Contains(_levelName))
		{
			FModObjData objData = *levelMap.Find(_levelName);
			if (objData.Name.Equals(_levelName))
			{
				FString NewFileName = FPaths::Combine(modData.MountPoint, objData.RelativePath, objData.Name + "." + objData.Name);

				if (modManager->bIsPIEStandalong)
				{
					//编辑器Standlong
					FPlatformFileManager::Get().SetPlatformFile(*modManager->PakPlatformFile.Get());
				}

				if (WorldContextObject == nullptr)
				{
					WorldContextObject = GWorld;
				}

				UObject* LoadedObj = StaticLoadObject(UObject::StaticClass(), WorldContextObject, *NewFileName);
				if (!LoadedObj)
				{
					UE_LOG(LogTemp, Warning, TEXT(" loadMap failed %s "), *_levelName);
					return;
				}

				FString LeftS, RightS;
				LoadedObj->GetPathName().Split(TEXT("."), &LeftS, &RightS, ESearchCase::Type::IgnoreCase);
				UE_LOG(LogTemp, Warning, TEXT("loadMap OK name:"), *RightS);
				UGameplayStatics::OpenLevel(GWorld, FName(RightS));

				if (modManager->bIsPIEStandalong)
				{
					//编辑器Standlong
					FPlatformFileManager::Get().SetPlatformFile(*modManager->InnerPlatformFile);
				}

			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT(" err map request %s "), *_levelName);
		}
	}

	//按资产id查找资源的依赖关系
	UFUNCTION(BlueprintCallable)
	static TArray<FModDependenciesObjData> GetDependenciesAassetById(const FString& _modId, const FString& _assetId)
	{
		UModsManager* modManager = UModsManager::GetInstance();
		if (!modManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("GetDependenciesAassetById:: modManager is nullptr"));
			return TArray<FModDependenciesObjData>();
		}
		if (modManager->InstalledModsMap.Contains(_modId))
		{
			FModData modDarta = *modManager->InstalledModsMap.Find(_modId);
			if (modDarta.ModObjectMap.Contains(_assetId))
			{
				FModObjData modObjData = *modDarta.ModObjectMap.Find(_assetId);
				return modObjData.Dependencies;
			}
		}
		return TArray<FModDependenciesObjData>();
	}

	//按资产名查找资源的依赖关系
	UFUNCTION(BlueprintCallable)
	static TArray<FModDependenciesObjData> GetDependenciesAassetByName(const FString& _modId, const FString& _assetName)
	{
		UModsManager* modManager = UModsManager::GetInstance();
		if (!modManager)
		{
			UE_LOG(LogTemp, Warning, TEXT("GetDependenciesAassetByName:: modManager is nullptr"));
			return TArray<FModDependenciesObjData>();
		}
		if (modManager->InstalledModsMap.Contains(_modId))
		{
			FModData modDarta = *modManager->InstalledModsMap.Find(_modId);
			for (auto Iter = modDarta.ModObjectMap.CreateConstIterator(); Iter; ++Iter)
			{
				FModObjData objData = Iter->Value;
				if (objData.Name.Equals(_assetName))
				{
					return objData.Dependencies;
				}
			}
		}
		return TArray<FModDependenciesObjData>();
	}
private:

	FLodModsStruct LoadModSetting;

public:

	UPROPERTY()
	TMap<FString, UModsDownloader*> DownloadingMods;

	UPROPERTY()
	TArray<UModsDownloader*> WaitToDownloadMods;

	UPROPERTY(BlueprintAssignable)
	FDownloadModProgressDelegate DownloadModProgressDelegate;

	UPROPERTY(BlueprintReadOnly)
	TMap<FString, FModData> InstalledModsMap;

	TMap<FString, TMap<FString, FModObjData>> InstalledModLevelMap;

	TMap<FString, TArray<FDownloadModResultDelegate> > DownLoadResultDelegateMap;

	TMap<FString, TArray<FDownloadModProgressSingleDelegate>> DownLoadProgressDelegateMap;

	UPROPERTY(BlueprintReadOnly)
	TMap<FString, UObject*> ReplicateModObjectMap;

	TMap<FString, TArray<FString>> ReplicateModIdObjectMap;

	TSharedPtr<FPakPlatformFile> PakPlatformFile;
	IPlatformFile* InnerPlatformFile;

	UPROPERTY()
	FString CastingOutputPath = TEXT("C:/CastingOutPut/");
};
