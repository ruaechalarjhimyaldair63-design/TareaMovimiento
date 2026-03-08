#include "NaveDona.h"

// Constructor: Se ejecuta al iniciar el juego o generar el objeto
ANaveDona::ANaveDona()
{
    // Permitir que el objeto se actualice en cada frame
    PrimaryActorTick.bCanEverTick = true;

    // 1. CREACIÓN DEL OBJETO (Instanciación)
    // Creamos el componente visual para que la dona exista físicamente
    MallaDona = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CuerpoDona"));
    RootComponent = MallaDona;

    // 2. DEFINICIÓN DE ATRIBUTOS (POO)
    // Aquí es donde le damos el tamaño desde el código como dijeron tus compañeros
    EscalaPersonalizada = FVector(2.5f, 2.5f, 2.5f);
    VelocidadGiro = 60.0f;

    // Aplicamos el tamaño (escala) al objeto
    SetActorScale3D(EscalaPersonalizada);
}

// Se llama cuando el juego comienza
void ANaveDona::BeginPlay()
{
    Super::BeginPlay();
}

void ANaveDona::movimiento_vertical()

{
    if (vuela_arriba) {
        FVector ubicacionActual = GetActorLocation();
        FVector ubicacionNueva = ubicacionActual;
        ubicacionNueva.Z = ubicacionNueva.Z + paso;
        SetActorLocation(ubicacionNueva);
        contador++;
        if (contador > limite_superior) {
            vuela_arriba = false;
        }
    } else {
        FVector ubicacionActual = GetActorLocation();
        FVector ubicacionNueva = ubicacionActual;
        ubicacionNueva.Z = ubicacionNueva.Z - paso;
        SetActorLocation(ubicacionNueva);
        contador--;
        if (contador < limite_inferior) {
            vuela_arriba = true;
            cambiarMovimiento = false;
        }
    }
}
void ANaveDona::movimiento3()
{
}
void ANaveDona::movimientoEspecial()

{
    if (vuela_arriba) {
        FVector ubicacionActual = GetActorLocation();
        FVector ubicacionNueva = ubicacionActual;
        ubicacionNueva.Z = ubicacionNueva.Z + paso;
        ubicacionNueva.Y = ubicacionNueva.Y + ubicacionNueva.Z *0.1;
        SetActorLocation(ubicacionNueva);
        contador++;
        if (contador > limite_superior) {
            vuela_arriba = false;
        }
    }
    else {
        FVector ubicacionActual = GetActorLocation();
        FVector ubicacionNueva = ubicacionActual;
        ubicacionNueva.Z = ubicacionNueva.Z - paso;
        ubicacionNueva.Y = ubicacionNueva.Y - ubicacionNueva.Z * 0.1;
        SetActorLocation(ubicacionNueva);
        contador--;
        if (contador < limite_inferior) {
            vuela_arriba = true;
            cambiarMovimiento = true;
            
        }
    }
}

// Se llama en cada fotograma (Lógica del juego)
void ANaveDona::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // 3. LÓGICA DE MOVIMIENTO
    // Hacemos que la dona gire sobre su propio eje (Y) constantemente
    if (MallaDona)
    {
        AddActorLocalRotation(FRotator(0.0f, VelocidadGiro * DeltaTime, 0.0f));
    }

    if (cambiarMovimiento)
    {
        movimiento_vertical();
    }else {
        movimientoEspecial();
    }
} 