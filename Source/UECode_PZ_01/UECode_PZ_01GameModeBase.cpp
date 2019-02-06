// Fill out your copyright notice in the Description page of Project Settings.

#include "UECode_PZ_01GameModeBase.h"
#include  <OutputDeviceNull.h>
#include  <UnrealType.h>


void  AUECode_PZ_01GameModeBase::BeginPlay()
{
	Super::BeginPlay();


	UFloatProperty* FloatProp = FindField<UFloatProperty>(this->GetClass(), TEXT("BpFloat"));
	if (FloatProp != nullptr)
	{
		float FloatValue = FloatProp->GetPropertyValue_InContainer(this);
		UE_LOG(LogTemp, Warning, TEXT("Float equals - %f"), FloatValue);

		FloatProp->SetPropertyValue_InContainer(this, 48.0f);

		FloatValue = FloatProp->GetPropertyValue_InContainer(this);
		UE_LOG(LogTemp, Warning, TEXT("Float equals - %f"), FloatValue);
	}
}

