// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BloodyParky : ModuleRules
{
	public BloodyParky(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" , "UMG"});
	}
}
