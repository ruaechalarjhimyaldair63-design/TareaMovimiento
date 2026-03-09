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
	void Movimiento3();
	void Movimiento4();
	void Movimiento5();
	void Movimiento6();
	void Movimiento7();
	void Movimiento8();
	void Movimiento9();
	void Movimiento10();
	void Movimiento11();
	void Movimiento12();
	void Movimiento13();
	void Movimiento14();
	void Movimiento15();
	void Movimiento16();
	void Movimiento17();
	void Movimiento18();
	void Movimiento19();
	void Movimiento20();
	

	UPROPERTY(EditAnywhere, Category = "Atributos")
	float VelocidadGiro;
	int limite_superior = 100;
	int limite_inferior = 0;
	int paso = 10; 
	int contador = 0;
	bool vuela_arriba = true;
	bool cambiarMovimiento = true;


};
