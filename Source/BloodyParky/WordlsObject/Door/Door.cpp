// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/EngineTypes.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> staticMesh(TEXT("StaticMesh'/Game/development/WorldsObject/Door/Trampilla_trapdoor_door_low.Trampilla_trapdoor_door_low'"));
	static ConstructorHelpers::FObjectFinder<USoundBase> SoundAsset(TEXT("SoundWave'/Game/development/Sounds/Door/closing_door.closing_door'"));

	Mesh = staticMesh.Object;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	RootComponent = MeshComponent;

	MeshComponent->SetStaticMesh(Mesh);
	MeshComponent->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
	//MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	MeshComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
	MeshComponent->SetGenerateOverlapEvents(true);
	MeshComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));

	SoundCue = SoundAsset.Object;
	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->SetupAttachment(RootComponent);
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetSound(SoundCue);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoor::AttachItem(AActor* Player)
{
	//Make the teleport to next level
	AudioComponent->Play();
	
	FTimerHandle TimerHandle;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ADoor::ChangeLevel, 5.0f, false);
}

void ADoor::ExecuteAction(AActor* Player)
{
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Nothing to do"));
}

void ADoor::ChangeLevel()
{
	UGameplayStatics::OpenLevel(this, FName("TestLevel"));
}

