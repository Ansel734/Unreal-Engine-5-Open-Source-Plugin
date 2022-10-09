// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSIONS_API UMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// Allows for removal and toggle of the menu widget
	UFUNCTION(BlueprintCallable)
	void MenuSetup(int32 NumberOfPublicConnctions = 4, FString TypeOfMatch = FString(TEXT("FreeForAll")));

protected:

	virtual bool Initialize() override;
	virtual void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld) override;

	// Callback Functions for the multiplayer sessions class using Custom Delegates
	// Must be a UFUNCTION to allow dynamic callbacks
	//Session Creation - 1
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);
	//Find Session - 2
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
	// JoinSession - 3
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
	// Destroy Current Session - 4
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);
	// Start a Session after creation - 5 
	UFUNCTION()
	void OnStartSession(bool bWasSuccessful);

private:

	UPROPERTY(meta = (BindWidget))
	class UButton* HostGameButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinGameButton;

	UFUNCTION()
	void JoinButtonClicked();

	UFUNCTION()
	void HostButtonClicked();

	void MenuTearDown();

	// subsystem designed to handle online sessions
	class UMultiplayerSessionsSubsystem* MultiplayerSessionsSubsystem;

	// Params for the public connections
	int32 NumPublicConnections{ 4 };
	FString MatchType{ TEXT("FreeForAll") };
};
