// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VTMHotupdateDefine.h"
#include "ModReplicateManager.generated.h"
/**
 * 接口类 提供一个服务器接收mod下载完成信息的接口
 */

UINTERFACE(MinimalAPI, Blueprintable)
class UModReplicateManager : public UInterface
{
	GENERATED_BODY()
};


class VTMHOTUPDATE_API IModReplicateManager 
{
	GENERATED_BODY()

public:

	/// <summary>
	/// 服务器接收mod下载完成信息的接口 蓝图可重写
	/// </summary>
	/// <param name="_modData">mod数据</param>
	/// <param name="_isSuccess">是否成功</param>
	UFUNCTION(BlueprintNativeEvent)
	void ServerDownloadModSuccessCallback(const FModData& _modData,const bool _isSuccess);

	/// <summary>
	/// 客户端接收mod下载完成信息的接口 蓝图可重写
	/// </summary>
	/// <param name="_modData">mod数据</param>
	/// <param name="_isSuccess">是否成功</param>
	UFUNCTION(BlueprintNativeEvent)
	void ClientDownloadModSuccessCallback(const FModData& _modData, const bool _isSuccess);

	/// <summary>
/// 客户端接收mod下载进度的接口 蓝图可重写
/// </summary>
	UFUNCTION(BlueprintNativeEvent)
	void ClientDownloaProgressCallback(const FModDownloadData& _modData, const   TEnumAsByte<EHotUpdateState>& _state, const float& _progress);

	/// <summary>
	///服务器接收mod下载进度的接口 蓝图可重写
	/// </summary>
	UFUNCTION(BlueprintNativeEvent)
	void ServerDownloaProgressCallback(const FModDownloadData& _modData, const   TEnumAsByte<EHotUpdateState>& _state, const float& _progress);

	UFUNCTION(BlueprintNativeEvent)
	void RequestSpawnModActor(const FModDownloadData& _modData, const FTransform& _transform ,const FSpawnModActorDelegate& _spawnModActorDelegate);

	UFUNCTION(BlueprintNativeEvent)
	void RequestLoadModResource(const FModDownloadData& _modData, const FLoadModResourceDelegate& _loadModResourceDelegate);
};
