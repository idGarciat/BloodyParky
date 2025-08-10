// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Item/IItem.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/AudioComponent.h"
#include "Engine/EngineTypes.h"
#include "Door.generated.h"

UCLASS()
class BLOODYPARKY_API ADoor : public AActor, public IIItem
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = Mesh, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* MeshComponent;

	class UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class USoundBase* SoundCue;

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	class UAudioComponent* AudioComponent;

	virtual void AttachItem(AActor* Player) override;
	virtual void ExecuteAction(AActor* Player) override;

private:
	void ChangeLevel();
};
