#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainUI.generated.h"

UCLASS()
class JSONSTUDY_API UMainUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UPROPERTY(meta=(BindWidget))
    class UCanvasPanel* mainCanvas;

    UPROPERTY(meta=(BindWidget))
    class UScrollBox* imageList;

    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<class UDownloadImageUI> downloadImageUIFactory;

    void AddDownloadImage(FString url);
};
