// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UECode_PZ_01GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UECODE_PZ_01_API AUECode_PZ_01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;
	
};
