// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AttributeBaseClass.h"
#include "Engine/DataAsset.h"
#include "DataAssetContainer.generated.h"

/**
 * 
 */
UCLASS()
class ATTRIBUTEBASE_API UDataAssetContainer : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
    UAttributeBaseClass* AttributeBaseClass;
};
