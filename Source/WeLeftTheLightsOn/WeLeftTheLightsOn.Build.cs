// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WeLeftTheLightsOn : ModuleRules
{
	public WeLeftTheLightsOn(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
            "GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
            "GameplayDebugger"
        });

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"WeLeftTheLightsOn",
			"WeLeftTheLightsOn/Variant_Horror",
			"WeLeftTheLightsOn/Variant_Horror/UI",
			"WeLeftTheLightsOn/Variant_Shooter",
			"WeLeftTheLightsOn/Variant_Shooter/AI",
			"WeLeftTheLightsOn/Variant_Shooter/UI",
			"WeLeftTheLightsOn/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
