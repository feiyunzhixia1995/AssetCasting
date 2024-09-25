// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameFramework/PlayerController.h"
#include "VTMHotupdateDefine.h"
#include "ModsManager.h"
#include "ModReplicateManager.h"

#include "ModsController.generated.h"

/**
 * ModObject基类 继承了ModAssestRegistInterface接口 用于注册Mod资产.
 */

class UModsCheckComponent;
class UModsReplicateComponent;
class AModControlActor;
UCLASS(BlueprintType, Blueprintable)
class VTMHOTUPDATE_API AModsController :public APlayerController , public IModReplicateManager
{
	GENERATED_UCLASS_BODY()

protected:

	virtual void BeginPlay() override;	

	virtual	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void Tick(float DeltaTime) override;

public:

	UPROPERTY(BlueprintReadOnly,EditAnywhere)
	UModsReplicateComponent* ModsReplicateComponent = nullptr;

	UPROPERTY(BlueprintAssignable)
	FModLoadResultDelegate ServerModLoadResultDelegate;

	UPROPERTY(BlueprintAssignable)
	FModLoadResultDelegate ClientModLoadResultDelegate;
	
	UPROPERTY(BlueprintReadOnly)
	TMap<AModControlActor* ,float> ModActorInViewFrustumStayTimeMap;
public:

	/// <summary>
	/// 请求mod入口 
	/// </summary>
	/// <param name="_downloadData">下载信息</param>
	UFUNCTION(BlueprintCallable)
	void BpRequestLoadResouceFormMod(const FModDownloadData& _downloadData);

	/// <summary>
	/// 纯本地请求mod入口 无需网络同步的资源
	/// </summary>
	/// <param name="_downloadData">下载信息</param>
	UFUNCTION(BlueprintCallable)
	void BpRequestLoadResouceFormModLocal(const FModDownloadData& _downloadData);

	/// <summary>
	/// 继承自IModReplicateManager 服务器接收mod下载完成信息的接口的c++实现
	/// </summary>
	/// <param name="_modData">mod数据</param>
	/// <param name="_isSuccess">是否成功</param>
	virtual void ServerDownloadModSuccessCallback_Implementation(const FModData& _modData, const bool _isSuccess);

	/// <summary>
	/// 继承自IModReplicateManager 客户端接收mod下载完成信息的接口的c++实现
	/// </summary>
	/// <param name="_modData">mod数据</param>
	/// <param name="_isSuccess">是否成功</param>
	virtual void ClientDownloadModSuccessCallback_Implementation(const FModData& _modData, const bool _isSuccess);


	void IsModActorInViewFrustum(const  FLodModsStruct& _loadModSetting,const float& _delTime);
};
