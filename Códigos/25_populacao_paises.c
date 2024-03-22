#include <stdio.h>
#include <conio.h>
#include <locale.h>

// 25. Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2% ao ano, escrever um algoritmo que seja capaz de calcular e iterativamente e no fim imprimir o tempo necessário para que a população do país A ultrapasse a população do país B.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int populacao_A = 5000000, populacao_B = 7000000, anos = 0;
    float taxa_natalidade_A = 0.03, taxa_natalidade_B = 0.02;

    printf("Dado um país A, com 5000000 de habitantes e uma taxa de natalidade de 3%% ao ano, e um país B com 7000000 de habitantes e uma taxa de natalidade de 2%% ao ano, este algoritmo calcula e imprime o tempo necessário para que a população do país A ultrapasse a população do país B.\n\n");

    while (populacao_A <= populacao_B) {
        populacao_A += populacao_A * taxa_natalidade_A;
        populacao_B += populacao_B * taxa_natalidade_B;
        anos++;
    }

    printf("A população do país A ultrapassará a população do país B em %d anos.", anos);
    printf("\n\nPressione qualquer tecla para sair.");
    
    getch();
    return 0;
}