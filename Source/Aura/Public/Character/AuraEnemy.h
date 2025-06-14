// Toolmanproductions

#pragma once
#include "Interaction/EnemyInterface.h"
#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraEnemy.generated.h"


/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	//**Enenmy interface*/
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//**end Enenmy interface*/

	//**Combat interface*/
	virtual int32 GetPlayerLevel() override;
	//**end Combat interface*/

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Character Class Defaults");
	int32 Level = 1;

	

};