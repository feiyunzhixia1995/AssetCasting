#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "Engine\DeveloperSettings.h"
#include "HttpMgrSubsystem.generated.h"


UCLASS(config = Game, defaultconfig, meta = (DisplayName = "HttpMgrSetting"))
class VTMHOTUPDATE_API UHttpManagerSetting :public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(config, EditAnywhere, Category = "Config | HttpManager")
	int32						MaxParallel;//最大的下载并行数
	UPROPERTY(config, EditAnywhere, Category = "Config | HttpManager")
	int32						MaxTryCount;//最大的重连次数
	UPROPERTY(config, EditAnywhere, Category = "Config | HttpManager")
	int32						RequestKBSize;//每个子任务的大小
	UPROPERTY(config, EditAnywhere, Category = "Config | HttpManager")
	float						ResponseTimeout;//请求超时的时间
	UPROPERTY(config, EditAnywhere, Category = "Config | HttpManager")
	FString						CurFilePath; //子文件的缓存位置
};

class UAsyncDownloadFile;
UCLASS()
class VTMHOTUPDATE_API UHttpMgrSubsystem :public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const { return true; }

	/** Implement this for initialization of instances of the system */
	virtual void Initialize(FSubsystemCollectionBase& Collection);

	/** Implement this for deinitialization of instances of the system */
	virtual void Deinitialize();

	virtual void Tick(float DeltaTime) override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const { return TStatId();/* RETURN_QUICK_DECLARE_CYCLE_STAT(UHttpDownloadSubsystem, STATGROUP_Tickables);*/ }
public:
	UAsyncDownloadFile* CreateDownTask(
		UObject *WorldContextObject, 
		const FString &Url, 
		const FString &FileName, 
		const FString &Directory,
		bool bClearCache);

	void ExecDownloadTasks();

	void NotifyFailed(UAsyncDownloadFile *HttpFile, bool bForceFailed);

	void NotifyFinised(UAsyncDownloadFile *HttpFile);
	void ClearMgr();
private:
	void Init();
public:

	int32						MaxParallel;
	int32						MaxTryCount;
	int32						RequestKBSize;
	float						ResponseTimeout;
	FString						CurFilePath;

	UPROPERTY()
	TArray<UAsyncDownloadFile *>	DownloadHttpFiles;
};