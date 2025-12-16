// Fill out your copyright notice in the Description page of Project Settings.


#include "TWG_FunctionLib.h"

void UTWG_FunctionLib::SetObjectName(AActor* target, FString nom)
{
#if UE_EDITOR
	target->SetActorLabel(nom);
#endif
}