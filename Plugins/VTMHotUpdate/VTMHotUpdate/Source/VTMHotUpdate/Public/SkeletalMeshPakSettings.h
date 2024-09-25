// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
// engine header
#include "PakSettings.h"
#include "SkeletalMeshPakSettings.generated.h"

/** Singleton wrapper to allow for using the setting structure in SSettingsView */
USTRUCT(BlueprintType)
struct VTMHOTUPDATE_API FSkeletalMeshPakSettings : public FPakSettings
{
	GENERATED_USTRUCT_BODY()
public:

	FSkeletalMeshPakSettings();

	FORCEINLINE static FSkeletalMeshPakSettings* Get()
	{
		static FSkeletalMeshPakSettings StaticIns;

		return &StaticIns;
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Diff Config", meta = (DisplayName = "差异化配置"))
	FSkeletalMeshAssestDiff DiffConfig;
};