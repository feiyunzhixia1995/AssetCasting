// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.Collections.Generic;
using System.IO;

public class VTMHotUpdateEditor : ModuleRules
{
	public VTMHotUpdateEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        bUsePrecompiled = true;

		bLegacyPublicIncludePaths = false;
		OptimizeCode = CodeOptimization.InShippingBuildsOnly;

		PublicIncludePaths.AddRange(new string[] { });
		PrivateIncludePaths.AddRange(new string[] {});
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "UnrealEd",
                "Projects",
                "DesktopPlatform",
                "InputCore",
                "LevelEditor",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "RenderCore",
                "PythonScriptPlugin",
                "VTMHotUpdate",
                "RenderCore",
                "ImageWriteQueue",
                "Json",
                "JsonUtilities"
                // ... add other public dependencies that you statically link with here ...
			}
			);
		
	
	}
}
