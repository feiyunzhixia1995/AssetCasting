// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModReplicateManager.h"
#include "VTMHotupdateDefine.h"
#include "ModControlActor.generated.h"

class UModsReplicateComponent;
/// <summary>
/// 用于管理mod资产下载过程中的状态显示, 以及资产的显示管理
/// </summary>

UCLASS()
class VTMHOTUPDATE_API AModControlActor : public AActor, public IModReplicateManager
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModControlActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	static TArray<AModControlActor*> ModActorArr;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnReq_ModDownloadDataChange)
	FModDownloadData ModDownloadData;

	UPROPERTY(BlueprintReadOnly, EditAnywhere,Replicated)
	UModsReplicateComponent* ModsReplicateComponent = nullptr;

	UPROPERTY(BlueprintAssignable)
	FModLoadResultDelegate ServerModLoadResultDelegate;

	UPROPERTY(BlueprintAssignable)
	FModLoadResultDelegate ClientModLoadResultDelegate;

	UPROPERTY(BlueprintAssignable)
	FModDownloadProgresstDelegate ClientModDownloadProgresstDelegate;

	UPROPERTY(BlueprintAssignable)
	FModDownloadProgresstDelegate ServerModDownloadProgresstDelegate;

	UPROPERTY(BlueprintReadOnly)
	FSpawnModActorStruct SpawnModActorData;

	UPROPERTY(BlueprintReadOnly)
	FLoadModResourceStruct LoadModResourceData;

	UPROPERTY(BlueprintReadOnly,Replicated)
	TEnumAsByte<EModRequestType> ModRequestType;

	UPROPERTY(BlueprintReadOnly)
	bool IsNeedReplicateMod = false;

public:
	
	UFUNCTION(BlueprintCallable)
	static AModControlActor* RequestModActor(const FModDownloadData& _modDownloadData, const FTransform& _transform, const FSpawnModActorDelegate& _spawnModActorDelegate);

	UFUNCTION(BlueprintCallable)
	static AModControlActor* RequestModResource(const FModDownloadData& _modDownloadData, const FLoadModResourceDelegate& _loadModResourceDelegate);
	
	UFUNCTION(BlueprintCallable)
	static AModControlActor* RequestMod(const FModDownloadData& _modDownloadData);

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

	virtual void ClientDownloaProgressCallback_Implementation(const FModDownloadData& _modData, const   TEnumAsByte<EHotUpdateState>& _state, const float& _progress);

	virtual void ServerDownloaProgressCallback_Implementation(const FModDownloadData& _modData, const   TEnumAsByte<EHotUpdateState>& _state, const float& _progress);

	UFUNCTION(BlueprintAuthorityOnly)
	void RegistModActorDestory(AActor* _modActor);

	UFUNCTION()
	void OnModActorDestory(AActor* _modActor);

	UFUNCTION()
	void OnReq_ModDownloadDataChange();

	UFUNCTION()
	void SetIsNeedReplicateMod(bool _isNeedReplicateMod);
};
