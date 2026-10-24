
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numeroSecreto;
    int intento;
    int intentos = 0;

    srand((unsigned int)time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("=================================\n");
    printf("     JUEGO: ADIVINA EL NUMERO\n");
    printf("=================================\n");
    printf("Adivina un numero entre 1 y 100.\n");

    do {
        printf("\nIngresa tu numero: ");

        if (scanf("%d", &intento) != 1) {
            printf("Entrada invalida. Debes ingresar un numero.\n");
            return 1;
        }

        intentos++;

        if (intento < 1 || intento > 100) {
            printf("El numero debe estar entre 1 y 100.\n");
        } else if (intento < numeroSecreto) {
            printf("El numero secreto es MAYOR.\n");
        } else if (intento > numeroSecreto) {
            printf("El numero secreto es MENOR.\n");
        } else {
            printf("\n¡FELICIDADES! Adivinaste el numero.\n");
            printf("Numero secreto: %d\n", numeroSecreto);
            printf("Intentos realizados: %d\n", intentos);
        }

    } while (intento != numeroSecreto);

    return 0;
}