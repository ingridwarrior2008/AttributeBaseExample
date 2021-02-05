// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeBaseClass.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew, abstract)
class ATTRIBUTEBASE_API UAttributeBaseClass : public UObject
{
	GENERATED_BODY()

public:
    template<typename T>
    T* GetProperty() const
    {
        UProperty* Property = GetClass()->FindPropertyByName("Value");
        return Cast<T>(Property);
    }


    UFUNCTION(BlueprintCallable)
    UProperty *GetValue() const
    {
        return GetClass()->FindPropertyByName("Value");
    }
};
