// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once
// engine header
#include "PakSettings.h"
#include "StaticMeshPakSettings.generated.h"

/** Singleton wrapper to allow for using the setting structure in SSettingsView */
USTRUCT(BlueprintType)
struct VTMHOTUPDATE_API FStaticMeshPakSettings : public FPakSettings
{
	GENERATED_USTRUCT_BODY()
public:

	FStaticMeshPakSettings();

	FORCEINLINE static FStaticMeshPakSettings* Get()
	{
		static FStaticMeshPakSettings StaticIns;

		return &StaticIns;
	}

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Diff Config", meta = (DisplayName = "差异化配置"))
	FStaticMeshAssestDiff DiffConfig;
};