// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Shooter_OW_StyleEditorTarget : TargetRules
{
	public Shooter_OW_StyleEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Shooter_OW_Style" } );
	}
}
