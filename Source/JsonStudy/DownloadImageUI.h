// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DownloadImageUI.generated.h"

/**
 * 
 */
UCLASS()
class JSONSTUDY_API UDownloadImageUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UPROPERTY(meta=(BindWidget))
    class UImage* downloadImage;

    void SetUrl(FString url); // 다운로드 초기 세팅

    UFUNCTION()
    void OnDownloadComplete(class UTexture2DDynamic* Texture);
};
