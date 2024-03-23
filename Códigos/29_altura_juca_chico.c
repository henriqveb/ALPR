#include <stdio.h>
#include <locale.h>

// 29. Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano. Construir um algoritmo que calcule iterativamente e imprima quantos anos serão necessários para que Juca seja maior que Chico.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float altura_chico = 1.50, altura_juca = 1.10;
    int anos = 0;

    printf("Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por ano. Este algoritmo calcula e imprime quantos anos serão necessários para que Juca seja maior que Chico.\n\n");

    while (altura_juca <= altura_chico) {
        altura_chico += 0.02;
        altura_juca += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para que Juca seja maior que Chico.", anos);
    printf("\n\nPressione ENTER para sair.");

    getchar();    
    return 0;
}