// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VTMHotupdateDefine.h"
#include "ModsDownloader.generated.h"

/**
 * Mod下载类 用于下载单一pak文件.
 */

UCLASS()
class VTMHOTUPDATE_API UModsDownloader :public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UModsDownloader();
	~UModsDownloader();

	
protected:

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Tick(float DeltaTime) override;

	virtual bool IsTickable() const override;
	
	virtual TStatId GetStatId() const override;

private :

	//UPROPERTY()
	//class UAsyncDownloadFile* DonwloadFileAsync = nullptr;
public:

	UPROPERTY()
	FModDownloadData ModDownloadData;

	/// <summary>
	/// 开始下载mod
	/// </summary>
	/// <param name="_modName"></param>
	/// <param name="_fileName"></param>
	UFUNCTION()
	void DownloadMod(const FModDownloadData& _modDownloadData);
	
	UFUNCTION()
	void CancelDownloadMod();

	UFUNCTION()
	void RetryDownloadMod();
	/// <summary>
	/// 下载成功
	/// </summary>
	/// <param name="DestPathOrMsg"></param>
	/// <param name="Progress"></param>
	UFUNCTION(BlueprintNativeEvent)
	void OnHttpDownloadSuccess(const FString& DestPathOrMsg, float Progress);

	/// <summary>
	/// 等待
	/// </summary>
	/// <param name="DestPathOrMsg"></param>
	/// <param name="Progress"></param>
	UFUNCTION(BlueprintNativeEvent)
	void OnHttpDownloadWait(const FString& DestPathOrMsg, float Progress);

	/// <summary>
	/// 失败
	/// </summary>
	/// <param name="DestPathOrMsg"></param>
	/// <param name="Progress"></param>
	UFUNCTION(BlueprintNativeEvent)
	void OnHttpDownloadFail(const FString& DestPathOrMsg, float Progress);

	/// <summary>
	/// 更新进度
	/// </summary>
	/// <param name="DestPathOrMsg"></param>
	/// <param name="Progress"></param>
	UFUNCTION(BlueprintNativeEvent)
	void OnHttpDownloadProgress(const FString& DestPathOrMsg, float Progress);

	/// <summary>
	/// 取消
	/// </summary>
	/// <param name="DestPathOrMsg"></param>
	/// <param name="Progress"></param>
	UFUNCTION(BlueprintNativeEvent)
	void OnHttpDownloadCancel(const FString& DestPathOrMsg, float Progress);
};
