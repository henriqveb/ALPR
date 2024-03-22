#include <stdio.h>
#include <locale.h>

//20. Permitir ao usuário escolher entre a conversão de medida de centímetros em polegadas, de polegadas em centímetros, de quilômetros em milhas e de milhas em quilômetros. As fórmulas para conversão são as seguintes:
//a) Centímetros/polegadas: valor em centímetros x 0.3937
//b) Polegadas/centímetros: valor em polegadas x 2.54
//c) Quilômetros/milhas: valor em quilômetros x 0.6214
//d) Milhas/quilômetros: valor em milhas x 1.6093

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int opcao;
    float valor, resultado;

    printf("Este algoritmo recebe um valor e uma opção de conversão e retorna o valor convertido.\n\n");

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &valor);

    printf("Escolha a opção de conversão:\n");
    printf("1 - Centímetros para polegadas\n");
    printf("2 - Polegadas para centímetros\n");
    printf("3 - Quilômetros para milhas\n");
    printf("4 - Milhas para quilômetros\n");
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 4) {
        printf("Opção inválida. Digite novamente: ");
        scanf("%d", &opcao);
    }

    switch (opcao) {
        case 1:
            resultado = valor * 0.3937;
            printf("\n%.2f centímetros equivalem a %.2f polegadas.", valor, resultado);
            break;
        case 2:
            resultado = valor * 2.54;
            printf("\n%.2f polegadas equivalem a %.2f centímetros.", valor, resultado);
            break;
        case 3:
            resultado = valor * 0.6214;
            printf("\n%.2f quilômetros equivalem a %.2f milhas.", valor, resultado);
            break;
        case 4:
            resultado = valor * 1.6093;
            printf("\n%.2f milhas equivalem a %.2f quilômetros.", valor, resultado);
            break;
    }
    
    return 0;
}