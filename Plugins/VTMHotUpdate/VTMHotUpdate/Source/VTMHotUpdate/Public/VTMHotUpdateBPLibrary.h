// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "PakSettings.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VTMCreateModDefine.h"
#include "VTMHotUpdateBPLibrary.generated.h"

class ASkeletalMeshActor;

UCLASS()
class VTMHOTUPDATE_API UVTMHotUpdateBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "VTMHotUpdate")
	static FString GetCurrnetVersion();
	
	UFUNCTION(BlueprintCallable, Category = "VTMPakTool")
	static void MakePakFile(const TArray<FString>& _pakDirectorys,const TArray<FString>& _pakFiles, const TArray<FString>& _primaryAssets,const TArray<FString>& _excludeFilter,const FString& _pakName, const FString& _downloadUrl = TEXT("Default"), const FString& _outputPath = TEXT("Default"), const FString& _platform = TEXT("Win64"));

	UFUNCTION(BlueprintCallable, Category = "VTMPakTool")
	static void RuntimeMakePakFile(const FRuntimePakSettings& _runimtPakSettings);

	UFUNCTION(BlueprintCallable)
	static void ExecuteCMD(const FString& _cmd)
	{
#if PLATFORM_WINDOWS
		system(TCHAR_TO_ANSI(*_cmd));
#endif
	}

	UFUNCTION(BlueprintCallable)
	static void MakeCMJsonFromContainerData(TArray<FString> _allcombinStr, const FString& _outJsonPath,const FString& _jsonName);

	UFUNCTION(BlueprintCallable)
	static void ChangeTargetCombin(const FString& _combinStr , const FString _jsonPath);

	UFUNCTION(BlueprintCallable, Category = "获取透明度图像")
	static void GetAllAlphaImage();

	UFUNCTION(BlueprintCallable, Category ="是要需要改变MPC")
	static bool IsEnableMPC(FCooperateMPCChangeData _mpcCooperate, FCastingMachineOutputJsonData _desData);

	UFUNCTION(BlueprintCallable, Category = "根据Json数据 复原骨骼材质")
	static bool RecoverySkeletonMeshCompFromPath(USkeletalMeshComponent* _skeletalMeshComp, const FString& _combinJsonPath, UObject* _Instigate);

	UFUNCTION(BlueprintCallable, Category = "根据Json数据 复原骨骼材质")
	static bool RecoverySkeletonMeshCompFromJson(USkeletalMeshComponent* _skeletalMeshComp, const FString& _combinJsonStr, UObject* _Instigate);


	UFUNCTION(BlueprintCallable, Category = "根据Json数据 读取骨骼路径")
	static FString ReadSkeletonStringCompFromJsonPath( const FString& _combinJsonPath, UObject* _Instigate);

	UFUNCTION(BlueprintCallable, Category = "根据Json数据 读取骨骼路径")
	static FString ReadSkeletonStringCompFromJsonString( const FString& _combinJson, UObject* _Instigate);

	UFUNCTION(BlueprintCallable, Category = "读取png图片为texture2d")
	static UTexture2D* LoadTextureFromFile(const FString& ImagePath);
};


