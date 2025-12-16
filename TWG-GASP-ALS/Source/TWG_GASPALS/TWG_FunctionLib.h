// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TWG_FunctionLib.generated.h"

/**
 * 
 */
UCLASS()
class TWG_GASPALS_API UTWG_FunctionLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Object Name"), Category = "TWG")
	static void SetObjectName(AActor* target, FString nom);
};
