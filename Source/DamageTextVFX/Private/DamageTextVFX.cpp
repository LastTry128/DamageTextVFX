// Copyright Epic Games, Inc. All Rights Reserved.

#include "DamageTextVFX.h"

#define LOCTEXT_NAMESPACE "FDamageTextVFXModule"

void FDamageTextVFXModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FDamageTextVFXModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDamageTextVFXModule, DamageTextVFX)