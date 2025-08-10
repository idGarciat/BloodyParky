// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "WordlsObject/FlashLight/FlashLight.h"
#include "Components/SphereComponent.h"
#include "WordlsObject/Item/IItem.h"
#include "BloodyParkyCharacter.generated.h"

UCLASS(config=Game)
class ABloodyParkyCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface
	virtual void BeginPlay() override;

public:
	ABloodyParkyCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;
	float BaseTurnRate;

	bool bCanTakeItem = false;

	UPROPERTY(EditDefaultsOnly, Category="UI")
	TSubclassOf<class UUserWidget> PickUpWidgetClass;
	UUserWidget* PickUpWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class USphereComponent* InteractionSphere;

	UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                        const FHitResult& SweepResult);

    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                      UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:

	IIItem* Item;
	bool bPlayerInRange = false;
	void LookUpAtRate(float Eate);
	void TurnRate(float Rate);
	void PickUpItem();

	//Actions of items
	void TurnOnAndOffLight();
	void AtackBone();

	void ShowPickUp(bool bShow);
};
