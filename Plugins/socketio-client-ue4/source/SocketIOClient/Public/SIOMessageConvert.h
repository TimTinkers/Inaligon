// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "sio_client.h"
#include "SIOMessageConvert.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SocketIOLog, Log, All);

/**
 * 
 */
UCLASS()
class SOCKETIOCLIENT_API USIOMessageConvert : public UObject
{
	GENERATED_BODY()
public:

	//To from:

	//sio::message <-> FJsonValue
	static TSharedPtr<FJsonValue> ToJsonValue(const sio::message::ptr& Message);
	static sio::message::ptr ToSIOMessage(const TSharedPtr<FJsonValue>& JsonValue);

	//std::string <-> FString
	static std::string StdString(FString UEString);
	static FString FStringFromStd(std::string StdString);
}; 
