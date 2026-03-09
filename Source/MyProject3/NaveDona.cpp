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

// Movimiento 3 – Sube y baja vertical + deriva Y solo al subir

void ANaveDona::Movimiento3()
{
    FVector pos = GetActorLocation();
    if (vuela_arriba) {
        pos.Z += paso;
        pos.Y += 8.0f;
    }
    else {
        pos.Z -= paso;
    }
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 60) vuela_arriba = false;
    if (contador < 0)  vuela_arriba = true;
}


// Movimiento 4 – Sube y baja + deriva Y solo al bajar

void ANaveDona::Movimiento4()
{
    FVector pos = GetActorLocation();
    if (vuela_arriba) {
        pos.Z += paso;
    }
    else {
        pos.Z -= paso;
        pos.Y += 10.0f;
    }
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 50) vuela_arriba = false;
    if (contador < 0)  vuela_arriba = true;
}


// Movimiento 5 – Zigzag simple en Y (izq-der-izq)

void ANaveDona::Movimiento5()
{
    FVector pos = GetActorLocation();
    pos.Z += paso;
    pos.Y += (contador % 40 < 20) ? 12.0f : -12.0f;
    SetActorLocation(pos);

    contador++;
    if (contador > 120) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 6 – Solo deriva en X cada vez que baja

void ANaveDona::Movimiento6()
{
    FVector pos = GetActorLocation();
    if (vuela_arriba) {
        pos.Z += paso;
    }
    else {
        pos.Z -= paso;
        pos.X += 15.0f;
    }
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 45) vuela_arriba = false;
    if (contador < 0)  vuela_arriba = true;
}


// Movimiento 7 – Sube rápido, baja lento

void ANaveDona::Movimiento7()
{
    FVector pos = GetActorLocation();
    if (vuela_arriba) {
        pos.Z += paso * 1.6f;
    }
    else {
        pos.Z -= paso * 0.7f;
    }
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 35) vuela_arriba = false;
    if (contador < 0)  vuela_arriba = true;
}


// Movimiento 8 – Deriva X e Y al mismo tiempo (diagonal)

void ANaveDona::Movimiento8()
{
    FVector pos = GetActorLocation();
    pos.Z += vuela_arriba ? paso : -paso;
    pos.X += 6.0f;
    pos.Y += 9.0f;
    SetActorLocation(pos);

    contador++;
    if (contador > 80) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 9 – Pausas cortas cada cierto tiempo

void ANaveDona::Movimiento9()
{
    FVector pos = GetActorLocation();
    if (contador % 30 < 25) {   // se mueve 25 ticks, pausa 5
        pos.Z += vuela_arriba ? paso : -paso;
    }
    SetActorLocation(pos);

    contador++;
    if (contador > 100) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 10 – Solo se mueve en X y Z (plano diagonal)

void ANaveDona::Movimiento10()
{
    FVector pos = GetActorLocation();
    pos.Z += vuela_arriba ? paso : -paso;
    pos.X += 11.0f;
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 55) vuela_arriba = false;
    if (contador < -20) vuela_arriba = true;
}


// Movimiento 11 – Deriva Y positiva + X negativa

void ANaveDona::Movimiento11()
{
    FVector pos = GetActorLocation();
    pos.Z += paso * 0.8f;
    pos.Y += 7.0f;
    pos.X -= 5.0f;
    SetActorLocation(pos);

    contador++;
    if (contador > 90) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 12 – Sube-baja + deriva Y cada 2 frames

void ANaveDona::Movimiento12()
{
    FVector pos = GetActorLocation();
    pos.Z += vuela_arriba ? paso : -paso;
    if (contador % 2 == 0) {
        pos.Y += 14.0f;
    }
    SetActorLocation(pos);

    contador++;
    if (contador > 70) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 13 – Solo deriva en X (horizontal puro)

void ANaveDona::Movimiento13()
{
    FVector pos = GetActorLocation();
    pos.X += vuela_arriba ? 18.0f : -18.0f;
    SetActorLocation(pos);

    contador++;
    if (contador > 40) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}


// Movimiento 14 – Sube poco, baja mucho

void ANaveDona::Movimiento14()
{
    FVector pos = GetActorLocation();
    if (vuela_arriba) {
        pos.Z += paso * 0.5f;
    }
    else {
        pos.Z -= paso * 1.8f;
    }
    SetActorLocation(pos);

    contador += vuela_arriba ? 1 : -1;
    if (contador > 25) vuela_arriba = false;
    if (contador < -40) vuela_arriba = true;
}


// Movimiento 15 – Deriva Y y X alternados

void ANaveDona::Movimiento15()
{
    FVector pos = GetActorLocation();
    pos.Z += paso;
    if (contador % 40 < 20) {
        pos.Y += 10.0f;
    }
    else {
        pos.X += 10.0f;
    }
    SetActorLocation(pos);

    contador++;
    if (contador > 160) contador = 0;
}


// Movimiento 16 – Movimiento en escalera (sube ? derecha ? baja ? izquierda)

void ANaveDona::Movimiento16()
{
    FVector pos = GetActorLocation();
    int fase = (contador / 30) % 4;
    if (fase == 0) pos.Z += 12;
    else if (fase == 1) pos.X += 15;
    else if (fase == 2) pos.Z -= 12;
    else                pos.X -= 15;
    SetActorLocation(pos);
    contador++;
}


// Movimiento 17 – Solo sube y resetea posición

void ANaveDona::Movimiento17()
{
    FVector pos = GetActorLocation();
    pos.Z += paso * 1.3f;
    SetActorLocation(pos);

    contador++;
    if (contador > 50) {
        SetActorLocation(FVector(0, 0, 100)); // ? vuelve al inicio
        contador = 0;
    }
}


// Movimiento 18 – Deriva en Y muy fuerte + bajada lenta

void ANaveDona::Movimiento18()
{
    FVector pos = GetActorLocation();
    pos.Z -= paso * 0.4f;
    pos.Y += 22.0f;
    SetActorLocation(pos);

    contador++;
    if (contador > 120) {
        vuela_arriba = !vuela_arriba;
        contador = 0;
    }
}

// Movimiento 19 – Sube y baja + X cada vez que cambia dirección

void ANaveDona::Movimiento19()
{
    FVector pos = GetActorLocation();
    pos.Z += vuela_arriba ? paso : -paso;

    if (contador == 0 || contador == 50) {
        pos.X += vuela_arriba ? 30.0f : -30.0f;
    }

    SetActorLocation(pos);

    contador++;
    if (contador > 100) {
        contador = 0;
        vuela_arriba = !vuela_arriba;
    }
}


// Movimiento 20 – Movimiento en cruz (Z ? X ? -Z ? -X)
void ANaveDona::Movimiento20()
{
    FVector pos = GetActorLocation();
    int fase = (contador / 25) % 4;
    if (fase == 0) pos.Z += 10;
    else if (fase == 1) pos.X += 14;
    else if (fase == 2) pos.Z -= 10;
    else                pos.X -= 14;
    SetActorLocation(pos);
    contador++;
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
    //Movimiento3();
    //Movimiento4();
     //Movimiento5();
     //Movimiento6();
     //Movimiento7();
     //Movimiento8();
     //Movimiento9();
     //Movimiento10();
     //Movimiento11();
     //Movimiento12();
     //Movimiento13();
     //Movimiento14();
     //Movimiento15();
     //Movimiento16();
     //Movimiento17();
     //Movimiento18();
     //Movimiento19();
     //Movimiento20();


} 