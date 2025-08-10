// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Item/IItem.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Bone.generated.h"

UCLASS()
class BLOODYPARKY_API ABone : public AActor, public IIItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AttachItem(AActor* Player) override;
	virtual void ExecuteAction(AActor* Player) override;

	UPROPERTY(Category = Mesh, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* MeshComponent;

	class USkeletalMesh* Mesh;

	UPROPERTY(Category = Mesh, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class USpotLightComponent* LightComponent;

};
