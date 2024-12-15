
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AdventurePlayerController.generated.h"

class UInputMappingContext;

UCLASS()
class FIRSTPERSONADVENTURE_API AAdventurePlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;
	virtual void BeginPlay() override;

};
