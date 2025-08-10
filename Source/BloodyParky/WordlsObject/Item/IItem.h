// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IItem.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIItem : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BLOODYPARKY_API IIItem
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void AttachItem(AActor* Player) = 0;
	virtual void ExecuteAction(AActor* Player) = 0;
};
