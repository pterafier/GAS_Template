// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/JamPlayerCharacter.h"
#include "Interfaces/InteractInterface.h"
#include "Camera/CameraComponent.h"
#include "Player/JamPlayerController.h"
#include "Player/JamPlayerState.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AttributesComponent.h"
#include "GameFramework/SpringArmComponent.h"

AJamPlayerCharacter::AJamPlayerCharacter()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(GetMesh());

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	InteractDistance = 250.f;
}

void AJamPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Run the interact trace every frame. This will tell actors to run their look at functions if they implement the Interact interface.
	InteractTrace();
}

void AJamPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<AJamPlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	PlayerStateRef = Cast<AJamPlayerState>(UGameplayStatics::GetPlayerState(this, 0));

	if (PlayerStateRef)
	{
		PlayerAttributes = PlayerStateRef->GetAttributes();
	}
	
	OnTakeAnyDamage.AddDynamic(this, &AJamPlayerCharacter::TakeDamage);
}

void AJamPlayerCharacter::InteractTrace()
{
	// To do the line trace, we're gonna have to setup some local variables to keep things clean.
	// These are the vectors that will inform the line trace
	FVector CameraLocation = Camera->GetComponentLocation();
	FVector CameraForwardVector = Camera->GetForwardVector();
	FVector TraceEnd = ((CameraForwardVector * InteractDistance) + CameraLocation);

	// These variables give the line trace a place to store hit information
	FHitResult HitResult;
	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	// Do the actual line trace and store the hit result in bHit
	bool bHit = GetWorld()->LineTraceSingleByChannel(
		HitResult,			// Out hit result
		CameraLocation,		// Start location
		TraceEnd,			// End location
		ECC_Visibility,		// Collision channel
		CollisionParams		// Collision Parameters
	);

	// If the line trace hit something:
	if (bHit && HitResult.IsValidBlockingHit() && HitResult.GetActor())
	{
		// Get the actor we hit
		AActor* HitActor = HitResult.GetActor();

		if (HitActor != LookAtActor)
		{
			// Check if that actor implements the Interact interface, and if it does, call its LookAt function.
			if (HitActor->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
			{
				LookAtActor = HitActor;
				IInteractInterface::Execute_LookAt(HitActor);
			}
			else
			{
				LookAtActor = nullptr;
			}
		}
	}
	else
	{
		LookAtActor = nullptr;
	}
}

void AJamPlayerCharacter::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (DamagedActor != this) return;

	PlayerAttributes->RemoveHealth(Damage);
	OnDamageReceived(Damage); // call blueprint implementable event

	if (PlayerAttributes->Health <= 0)
	{
		Die();
	}
}

FPlayerSave AJamPlayerCharacter::GetCharacterSaveData()
{
	FPlayerSave PlayerData;
	PlayerData.Transform = GetActorTransform();
	PlayerData.ControlRotation = GetControlRotation();
	PlayerData.Health = PlayerAttributes->GetCurrentHealth();
	PlayerData.Mana = PlayerAttributes->GetCurrentMana();

	return PlayerData;
}

void AJamPlayerCharacter::SetPlayerStateFromSaveData(const FPlayerSave& PlayerSaveData)
{
	if (PlayerSaveData.Transform.GetLocation() == FVector::ZeroVector) return;

	SetActorTransform(PlayerSaveData.Transform);
	PlayerController->SetControlRotation(PlayerSaveData.ControlRotation);
	PlayerAttributes->Health = PlayerSaveData.Health;
	PlayerAttributes->Mana = PlayerSaveData.Mana;
	PlayerAttributes->Stamina = PlayerSaveData.Stamina;

	OnPlayerDataLoaded(); // Call the blueprint implementable event
}

void AJamPlayerCharacter::Die()
{
	OnDeath(); // call blueprint implementable event
}
