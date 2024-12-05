#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "JsonPawn.generated.h"

USTRUCT()
struct FUserInfo
{
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
	FString name;
    UPROPERTY(VisibleAnywhere)
	int32 age;
    UPROPERTY(VisibleAnywhere)
	float height;
    UPROPERTY(VisibleAnywhere)
	float weight;
    UPROPERTY(VisibleAnywhere)
	bool gender; // true : 여성, false : 남성
    UPROPERTY(VisibleAnywhere)
	TArray<FString> favoriteFood;
};

USTRUCT()
struct FUserInfoArray
{
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FUserInfo> data;
};

UCLASS()
class JSONSTUDY_API AJsonPawn : public APawn
{
	GENERATED_BODY()

public:
	AJsonPawn();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void DataToJsonExample(); // 데이터를 Json으로 바꾸는 예제

    UFUNCTION(BlueprintCallable)
    void JsonToDataExample();

    UPROPERTY(VisibleAnywhere)
    FUserInfo userInfo;

    UPROPERTY(VisibleAnywhere)
    FUserInfo userInfo2;
};
