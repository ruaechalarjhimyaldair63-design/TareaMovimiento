// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveDona.generated.h"

UCLASS()
class MYPROJECT3_API ANaveDona : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveDona();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Componente visual
	UPROPERTY(VisibleAnywhere, Category = "Componentes")
	UStaticMeshComponent* MallaDona;

	// Atributos de POO (Tamaño y Giro)
	UPROPERTY(EditAnywhere, Category = "Atributos")
	FVector EscalaPersonalizada;

	void movimiento_vertical();

	void movimientoEspecial();
	void movimiento3();
	

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float VelocidadGiro;
	int limite_superior = 100;
	int limite_inferior = 0;
	int paso = 10; 
	int contador = 0;
	bool vuela_arriba = true;
	bool cambiarMovimiento = true;


};
