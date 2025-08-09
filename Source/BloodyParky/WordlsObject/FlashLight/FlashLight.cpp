// Fill out your copyright notice in the Description page of Project Settings.


#include "FlashLight.h"

// Sets default values
AFlashLight::AFlashLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> staticMesh(TEXT("StaticMesh'/Game/development/WorldsObject/FlashLight/Flash_Boddy.Flash_Boddy'"));

	Mesh = staticMesh.Object;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlashLightMesh"));
	RootComponent = MeshComponent;

	LightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
	LightComponent->SetupAttachment(RootComponent);

	MeshComponent->SetStaticMesh(Mesh);
	MeshComponent->SetWorldRotation(FRotator(0.0f, -180.0f, 0.0f));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MeshComponent->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
}

// Called when the game starts or when spawned
void AFlashLight::BeginPlay()
{
	Super::BeginPlay();
	FVector LigthSocketLocation = MeshComponent->GetSocketLocation("Light_Socket");
	FRotator LigthSocketRotation = MeshComponent->GetSocketRotation("Light_Socket");
	LightComponent->SetRelativeLocationAndRotation(LigthSocketLocation, LigthSocketRotation);

	TurnOnAndOffLight();
}

// Called every frame
void AFlashLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AFlashLight::AttachFlashLight(AActor* Player)
{
	USkeletalMeshComponent* SkeletalMeshComp = Player->FindComponentByClass<USkeletalMeshComponent>();
	if (SkeletalMeshComp && SkeletalMeshComp->DoesSocketExist(FName("hand_r_Socket")))
	{
		this->AttachToComponent(SkeletalMeshComp, FAttachmentTransformRules::SnapToTargetIncludingScale, FName("hand_r_Socket"));
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, TEXT("Attached the flashlight to hand_r_Socket"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("hand_r_socket not found or skeletal mesh missing"));
	}
}

void AFlashLight::TurnOnAndOffLight()
{
	if (LightComponent)
	{
		if (!isLightOn)
		{
			LightComponent->SetVisibility(true);
			LightComponent->SetIntensity(5000.0f);
			isLightOn = true;
			return;
		}
		LightComponent->SetVisibility(false);
		isLightOn = false;
	}
}


