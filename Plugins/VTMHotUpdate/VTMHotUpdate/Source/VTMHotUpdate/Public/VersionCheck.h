//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Subsystems/GameInstanceSubsystem.h"
//#include "VTMHotupdateDefine.h"
//#include "Http.h"
//
//#include "VersionCheck.generated.h"
///*
// * 
// */
//
//UCLASS(config = Game, defaultconfig, meta = (DisplayName = "VersionSetting"))
//class VTMHOTUPDATE_API UVersionSetting :public UDeveloperSettings
//{
//	GENERATED_UCLASS_BODY()
//public:
//	UPROPERTY(config, EditAnywhere, Category = "Config | VersionSetting")
//	bool						ShouldCheckVerison; //是否检查版本.
//
//	UPROPERTY(config, EditAnywhere, Category = "Config | VersionSetting")
//	FString						GetVersionHttpUrl; //版本文件的下载地址.
//
//	UPROPERTY(config, EditAnywhere, Category = "Config | VersionSetting")
//	FString						VersionId; //版本号.
//
//	UPROPERTY(config, EditAnywhere, Category = "Config | VersionSetting")
//	int32						MaxRetryCount;//最大重试请求版本次数.
//};
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDownLoadProgressForUI, ETaskState , DownloadState,const FString&, DestPathOrMsg, float, Progress);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHotUpdateStateChange, EHotUpdateState, HotUpdateState);
//
//UCLASS()
//class VTMHOTUPDATE_API UVersionCheck : public UGameInstanceSubsystem 
//{
//	GENERATED_BODY()
//
//public:
//	UVersionCheck();
//	~UVersionCheck();
//
//	// 是否允许被创建
//	virtual bool ShouldCreateSubsystem(UObject* Outer) const override { return true; }
//
//	// Begin USubsystem
//	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
//	virtual void Deinitialize() override;
//
//	/// <summary>
//	/// 请求最新版本号
//	/// </summary>
//	UFUNCTION(BlueprintCallable)
//	void RequestVersion();
//
//	/// <summary>
//	/// 请求版本号回调
//	/// </summary>
//	/// <param name="HttpRequest"></param>
//	/// <param name="HttpResponse"></param>
//	/// <param name="bSucceeded"></param>
//	void ResponseVersion(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);
//
//	/// <summary>
//	/// 请求版本文件
//	/// </summary>
//	/// <param name="_url"></param>
//	/// <param name="_versionName"></param>
//	void RequestVersionJsonFile(const FString& _url, const FString _versionName);
//
//
//	/// <summary>
//	/// 请求下载文件
//	/// </summary>
//	/// <param name="_downloadsMap"></param>
//	UFUNCTION(BlueprintCallable)
//	void RequestDownloadFiles(const TMap<FString, FString> _downloadsMap);
//
//	/// <summary>
//	/// 对比md5 生成下载列表
//	/// </summary>
//	/// <param name="_versionFilePath"> 新version文件 </param>
//	/// <param name="_oldVersionFilePath"> 旧version文件 </param>
//	/// <param name="_isOnlyPaks"> 是否只检查pak文件 </param>
//	/// <returns></returns>
//	UFUNCTION(BlueprintCallable)
//	TMap<FString, FString> CheckFileMd5(const FString& _versionFilePath, const FString& _oldVersionFilePath, const bool _isOnlyPaks = true);
//
//	/// <summary>
//	/// 下载进度
//	/// 暂时弃用 调用的Runtimefiledownloader 
//	/// </summary>
//	/// <param name="BytesReceived"></param>
//	/// <param name="ContentLength"></param>
//	/// <param name="ProgressRatio"></param>
//	UFUNCTION()
//	void OnDownloadPorgress(int64 BytesReceived, int64 ContentLength, float ProgressRatio);
//
//	/// <summary>
//	/// 下载完成
//	/// </summary>
//	/// <param name="DestPathOrMsg"></param>
//	/// <param name="Progress"></param>
//	UFUNCTION(BlueprintNativeEvent)
//	void OnHttpDownloadSuccess(const FString& DestPathOrMsg, float Progress);
//
//	/// <summary>
//	/// 等待
//	/// </summary>
//	/// <param name="DestPathOrMsg"></param>
//	/// <param name="Progress"></param>
//	UFUNCTION(BlueprintNativeEvent)
//	void OnHttpDownloadWait(const FString& DestPathOrMsg, float Progress);
//
//	/// <summary>
//	/// 失败
//	/// </summary>
//	/// <param name="DestPathOrMsg"></param>
//	/// <param name="Progress"></param>
//	UFUNCTION(BlueprintNativeEvent)
//	void OnHttpDownloadFail(const FString& DestPathOrMsg, float Progress);
//
//	/// <summary>
//	/// 进度
//	/// </summary>
//	/// <param name="DestPathOrMsg"></param>
//	/// <param name="Progress"></param>
//	UFUNCTION(BlueprintNativeEvent)
//	void OnHttpDownloadProgress(const FString& DestPathOrMsg, float Progress);
//
//	/// <summary>
//	/// 取消
//	/// </summary>
//	/// <param name="DestPathOrMsg"></param>
//	/// <param name="Progress"></param>
//	UFUNCTION(BlueprintNativeEvent)
//	void OnHttpDownloadCancel(const FString& DestPathOrMsg, float Progress);
//
//	/// <summary>
//	/// 挂载Pak
//	/// </summary>
//	/// <param name="_pakFilePath">pak文件路径</param>
//	/// <param name="_bUsenewMountPoint">是否使用新的挂载点</param>
//	/// <param name="_mountPoint">新挂载点</param>
//	/// <returns></returns>
//	bool MountPakFiles(const FString& _pakFilePath, const bool& _bUsenewMountPoint = false, const FString& _mountPoint = TEXT(""));
//
//	void SaveVerionConfig();
//public:
//	int32 NeedDownloadCount = 0;
//
//	TArray<FString> NeedMountPaks;
//
//	UPROPERTY(BlueprintReadOnly)
//	FString DownloadingVersionId;
//
//	UPROPERTY(BlueprintReadOnly)
//	FString CurrentVersionId;
//
//	FString VersionRequestUrl;
//
//	UPROPERTY(BlueprintReadOnly)
//	bool   bShouldCheckVerison;
//
//	int32 MaxRetryCount;
//
//	UPROPERTY(BlueprintAssignable)
//	FDownLoadProgressForUI DownLoadProgressForUIDelegate;
//
//
//	UPROPERTY(BlueprintAssignable)
//	FHotUpdateStateChange HotUpdateStateChangeDelegated;
//
//	FTimerHandle RequestVersionRetryTimerHandle;
//};
