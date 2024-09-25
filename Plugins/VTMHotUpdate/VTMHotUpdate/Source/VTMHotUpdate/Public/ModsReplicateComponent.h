// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VTMHotupdateDefine.h"
#include "ModsManager.h"

#include "ModsReplicateComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VTMHOTUPDATE_API UModsReplicateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UModsReplicateComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:

	UFUNCTION(NetMulticast, Unreliable)
	void MulticastClientsDownloadMod(const FModDownloadData& _downloadData);

	UFUNCTION(Server, Unreliable)
	void TellServerClientDownloadModFinished(const FModDownloadData& _downloadData);

	UFUNCTION(Client, Unreliable)
	virtual void ClientsRegistModObjGuidCache(const FReconnectStruct& _reconnectData);

	/// <summary>
	/// 需要用到mod中资源的模块，调用这个函数，传递mod下载所需的数据
	/// </summary>
	/// <param name="_downloadData"></param>
	UFUNCTION(Server, Unreliable)
	void RequestLoadResouceFormMod(const FModDownloadData& _downloadData);

	UFUNCTION()
	void RequestLoadResouceFormModLocal(const FModDownloadData& _downloadData, FDownloadModResultDelegate _callBackFuc);

	UFUNCTION()
	void OnClientDownloadFinish(const FModData& _modData, const bool result);


};
