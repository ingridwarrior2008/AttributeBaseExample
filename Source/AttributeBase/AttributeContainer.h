// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "AttributeBaseClass.h"
#include "UObject/NoExportTypes.h"
#include "AttributeContainer.generated.h"

/**
 * 
 */
UCLASS()
class ATTRIBUTEBASE_API UAttributeContainer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	UAttributeBaseClass* AttributeBaseClass;
};
