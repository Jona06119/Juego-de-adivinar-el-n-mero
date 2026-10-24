# Juego de Adivinar el Número en C

## Descripción

Este proyecto consiste en un juego interactivo desarrollado en lenguaje C en el que el usuario debe adivinar un número secreto generado aleatoriamente por el programa.

El sistema genera un número entre 1 y 100 y proporciona pistas después de cada intento para ayudar al usuario a encontrar la respuesta correcta. Cuando el usuario adivina el número, el programa muestra un mensaje de felicitación y el total de intentos realizados.

## Características

* Generación aleatoria de números entre 1 y 100.
* Validación del rango de números permitidos.
* Indicaciones para saber si el número secreto es mayor o menor.
* Contador de intentos realizados.
* Interfaz interactiva mediante consola.
* Validación básica de entradas del usuario.

## Tecnologías utilizadas

* **Lenguaje:** C.
* **Bibliotecas:** `stdio.h`, `stdlib.h` y `time.h`.
* **Compilador:** GCC.
* **Entorno de desarrollo:** Visual Studio Code.

## Requisitos

Para ejecutar este proyecto necesitas:

* Un compilador de C, como GCC.
* Una terminal o consola.
* Un sistema operativo compatible con el compilador.

## Instalación y ejecución

### 1. Clonar el repositorio

```bash
git clone URL_DE_TU_REPOSITORIO
```

Reemplaza `URL_DE_TU_REPOSITORIO` por la dirección de tu repositorio de GitHub.

### 2. Entrar en la carpeta del proyecto

```bash
cd AdivinarNumero
```

### 3. Compilar el programa

```bash
gcc AdivinarNumero.c -o AdivinarNumero.exe
```

### 4. Ejecutar el programa

En Windows PowerShell:

```powershell
.\AdivinarNumero.exe
```

En Linux o macOS:

```bash
./AdivinarNumero
```

## Ejemplo de funcionamiento

```text
=================================
     JUEGO: ADIVINA EL NUMERO
=================================
Adivina un numero entre 1 y 100.

Ingresa tu numero: 50
El numero secreto es MAYOR.

Ingresa tu numero: 75
El numero secreto es MENOR.

Ingresa tu numero: 63
¡FELICIDADES! Adivinaste el numero.
Numero secreto: 63
Intentos realizados: 3
```

*Nota: El resultado mostrado es un ejemplo. El número secreto se genera aleatoriamente en cada ejecución.*

## Objetivos de aprendizaje

* Comprender las estructuras condicionales `if`, `else if` y `else`.
* Utilizar ciclos `do-while`.
* Generar números aleatorios con `rand()` y `srand()`.
* Trabajar con variables y operadores.
* Implementar validaciones básicas de entrada.
* Practicar la lógica de programación.

## Licencia

Este proyecto puede distribuirse bajo la licencia MIT si se incluye el archivo de licencia correspondiente.
