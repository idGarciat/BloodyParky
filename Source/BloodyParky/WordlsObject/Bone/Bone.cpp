// Fill out your copyright notice in the Description page of Project Settings.


#include "Bone.h"

// Sets default values
ABone::ABone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> staticMesh(TEXT("SkeletalMesh'/Game/development/WorldsObject/Bone/vertebraAnimada.vertebraAnimada'"));

	Mesh = staticMesh.Object;
	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BonetMesh"));
	RootComponent = MeshComponent;

	MeshComponent->SetSkeletalMesh(Mesh);
	MeshComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
	MeshComponent->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
	//MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	MeshComponent->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void ABone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABone::AttachItem(AActor* Player)
{
	USkeletalMeshComponent* SkeletalMeshComp = Player->FindComponentByClass<USkeletalMeshComponent>();
	if (SkeletalMeshComp && SkeletalMeshComp->DoesSocketExist(FName("hand_r_Socket")))
	{
		this->AttachToComponent(SkeletalMeshComp, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_r_Socket"));
		this->MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Attached the flashlight to hand_r_Socket"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("hand_r_socket not found or skeletal mesh missing"));
	}
}

void ABone::ExecuteAction(AActor* Player)
{
	//execute the animation using the Player reference
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Doing the damage with the bone"));
}

