// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/SphereComponent.h"
#include "Blueprint/UserWidget.h"
#include "../Item/IItem.h"
#include "FlashLight.generated.h"

UCLASS()
class BLOODYPARKY_API AFlashLight : public AActor, public IIItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlashLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool isLightOn = false;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(Category = Mesh, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComponent;

	class UStaticMesh* Mesh;

	UPROPERTY(Category = Mesh, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* LightComponent;

	virtual void AttachItem(AActor* Player) override;
	virtual void ExecuteAction(AActor* Player) override;
};
