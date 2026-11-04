#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OfficeFirstPersonPawn.generated.h"

class UCameraComponent;

UCLASS()
class VFX_API AOfficeFirstPersonPawn : public ACharacter
{
	GENERATED_BODY()

public:
	AOfficeFirstPersonPawn();
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UCameraComponent> FirstPersonCamera;
};
