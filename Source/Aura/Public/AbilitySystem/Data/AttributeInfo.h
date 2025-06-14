// Toolmanproductions

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "AttributeInfo.generated.h"

USTRUCT(BlueprintType)
struct FAuraAttributeInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag AttributeTag = FGameplayTag();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText AttributeName = FText();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText AttributeDescription = FText();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float AttributeValue = 0.f;
	
};
/**
 * 
 */
UCLASS()
class AURA_API UAttributeInfo : public UDataAsset
{
	GENERATED_BODY()
	public:

	FAuraAttributeInfo FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool blogNotFound = false)const;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FAuraAttributeInfo> AttributeInformation;
	
};
