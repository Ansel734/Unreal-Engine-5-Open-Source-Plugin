// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"
#include "Components/Button.h"
#include "MultiplayerSessionsSubsystem.h"
#include "OnlineSessionSettings.h"

void UMenu::MenuSetup(int32 NumberOfPublicConnctions, FString TypeOfMatch)
{
	NumPublicConnections = NumberOfPublicConnctions;
	MatchType = TypeOfMatch;
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	// allow for focus 
	bIsFocusable = true;
	// get 1st player controller - [host]
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeUIOnly InputDataMode;
			InputDataMode.SetWidgetToFocus(TakeWidget());
			InputDataMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);// Allows free movement of the mouse
			PlayerController->SetInputMode(InputDataMode);
			PlayerController->SetShowMouseCursor(true);// allow the mouse to be viisble in the viewport
		}
	}
	// Game instance for the current system
	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		MultiplayerSessionsSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionsSubsystem>();// MultplayerSessionsSubsystem.h added
	}

	// BInding the callback 
	if (MultiplayerSessionsSubsystem)
	{
		MultiplayerSessionsSubsystem->MultplyerOnCreateSessionComplete.AddDynamic(this, &ThisClass::OnCreateSession);
		MultiplayerSessionsSubsystem->MultiplayerOnFindSessionsComplete.AddUObject(this, &ThisClass::OnFindSessions);
		MultiplayerSessionsSubsystem->MultiplayerOnJoinSessionComplete.AddUObject(this, &ThisClass::OnJoinSession);
		MultiplayerSessionsSubsystem->MultiplayerOnDestroySessionComplete.AddDynamic(this, &ThisClass::OnDestroySession);
		MultiplayerSessionsSubsystem->MultiplayerOnStartSessionComplete.AddDynamic(this, &ThisClass::OnStartSession);
	}
}

bool UMenu::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	if (JoinGameButton)
	{
		JoinGameButton->OnClicked.AddDynamic(this, &UMenu::JoinButtonClicked);
	}

	if (HostGameButton)
	{
		HostGameButton->OnClicked.AddDynamic(this, &UMenu::HostButtonClicked);
	}
	// return true when override true
	return false;
}

void UMenu::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	MenuTearDown();// remove the menu after level - [Lobby left - Joined a game or disconnected]
	Super::OnLevelRemovedFromWorld(InLevel, InWorld);// Super call to parent function

}

void UMenu::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Cyan, FString(TEXT("Session Created Successfuly!")));
		}

		// Server Travel moved to the Create Session to allow server to be created
		UWorld* World = GetWorld();
		if (World)
		{
			World->ServerTravel("/Game/ThirdPerson/Maps/Lobby?listen");// Set the lobby to be a listen server type based on Subnet System
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15, FColor::White, FString(TEXT("Session Creation failed!")));// failed session creation
		}
	}
}

void UMenu::OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful)
{
}

void UMenu::OnJoinSession(EOnJoinSessionCompleteResult::Type Result)
{
}

void UMenu::OnDestroySession(bool bWasSuccessful)
{
}

void UMenu::OnStartSession(bool bWasSuccessful)
{
}

void UMenu::JoinButtonClicked()
{
	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, FString(TEXT("Join Button Clicked")));
	}*/
	// callbacks to the sessions class
	if (MultiplayerSessionsSubsystem)
	{
		//add here
	}
}

void UMenu::HostButtonClicked()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Yellow, FString(TEXT("Host Button Clicked")));
	}
	// callbacks to the sessions class
	if (MultiplayerSessionsSubsystem)
	{
		MultiplayerSessionsSubsystem->CreateSession(NumPublicConnections, MatchType);
	}
}

void UMenu::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();// used for accessing the subnet system based on presence
		if (PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);// pass the controls to gameonly session for player movement
			PlayerController->SetShowMouseCursor(false);// remove the cursor
		}
	}
}
