// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestMotionMatching : ModuleRules
{
	public TestMotionMatching(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
