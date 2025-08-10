// Copyright Epic Games, Inc. All Rights Reserved.

#include "BloodyParkyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <Kismet/GameplayStatics.h>

ABloodyParkyCharacter::ABloodyParkyCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
	InteractionSphere->SetupAttachment(RootComponent);
	InteractionSphere->InitSphereRadius(5.0f); // Rango de detección
	InteractionSphere->SetCollisionProfileName("Trigger");
	InteractionSphere->SetGenerateOverlapEvents(true);
	InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(false); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));
	CameraBoom->bUsePawnControlRotation = true;

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
	BaseLookUpRate = 2.0f;
	BaseTurnRate = 2.0f;
}

void ABloodyParkyCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABloodyParkyCharacter::TurnRate(float Rate)
{
	//GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, "Funcionando movimiento camara");

	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABloodyParkyCharacter::ToogleLightSwitch()
{
	if (FlashLightItem != nullptr && bPlayerInRange)
	{
		//AFlashLight* FlashLight = GetWorld()->SpawnActor<AFlashLight>(AFlashLight::StaticClass());
		FlashLightItem->AttachFlashLight(this);
	}
}

void ABloodyParkyCharacter::TurnOnAndOffLight()
{
	if (FlashLightItem)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, TEXT("Turning light"));
		FlashLightItem->TurnOnAndOffLight();
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABloodyParkyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABloodyParkyCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABloodyParkyCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABloodyParkyCharacter::TouchStopped);
	PlayerInputComponent->BindAction("ToogleFlashLight", IE_Pressed, this, &ABloodyParkyCharacter::ToogleLightSwitch);
	PlayerInputComponent->BindAction("TurnOnAndOffLight",IE_Pressed, this, &ABloodyParkyCharacter::TurnOnAndOffLight);
}

void ABloodyParkyCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Limit the camera
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController)
	{
		//Limit the camera look up and down
		PlayerController->PlayerCameraManager->ViewPitchMin = -15.0f;
		PlayerController->PlayerCameraManager->ViewPitchMax = 15.0f; 

		//Limit the camera right and left
		PlayerController->PlayerCameraManager->ViewYawMin = 160.0f;
		PlayerController->PlayerCameraManager->ViewYawMax = -160.0f;
	}

	InteractionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABloodyParkyCharacter::OnOverlapBegin);
	InteractionSphere->OnComponentEndOverlap.AddDynamic(this, &ABloodyParkyCharacter::OnOverlapEnd);

	if (PickUpWidgetClass)
	{
		PickUpWidget = CreateWidget<UUserWidget>(GetWorld(), PickUpWidgetClass);
	}
}

void ABloodyParkyCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		if (AFlashLight* FlashLight = Cast<AFlashLight>(OtherActor))
		{
			FlashLightItem = FlashLight;
			bPlayerInRange = true;
			ShowPickUp(true);
		}
	}
}

void ABloodyParkyCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor != this)
	{
		if (AFlashLight* FlashLight = Cast<AFlashLight>(OtherActor))
		{
			//FlashLightItem = nullptr;
			bPlayerInRange = false;
			ShowPickUp(false);
		}
	}
}


void ABloodyParkyCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
	if (Value < 0.0f)
	{
		TurnRate(-10);
	}
	if(Value > 0.0f) {
		TurnRate(10);
	}
}

void ABloodyParkyCharacter::ShowPickUp(bool bShow)
{
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (bShow)
	{
		if (PickUpWidget && !PickUpWidget->IsInViewport())
		{
			PickUpWidget->AddToViewport();
		}
		PC->SetInputMode(FInputModeGameOnly());
	}
	else
	{
		if (PickUpWidget && PickUpWidget->IsInViewport())
		{
			PickUpWidget->RemoveFromParent();
		}
	}

}

void ABloodyParkyCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	Jump();
}

void ABloodyParkyCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

