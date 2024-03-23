#include <stdio.h>
#include <locale.h>

// 26. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int numero, qtd_par = 0, qtd_impar = 0, soma_par = 0, soma_total = 0;
    float media_par, media_total;

    printf("Este algoritmo lê uma quantidade não determinada de números positivos. Calcula a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a leitura será zero.\n\n");

    while (numero != 0) {
        printf("Digite um número inteiro positivo (ou zero para encerrar):\n");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            qtd_par++;
            soma_par += numero;
        } else {
            qtd_impar++;
        }

        soma_total += numero;
    }

    media_par = soma_par / qtd_par;
    media_total = soma_total / (qtd_par + qtd_impar);

    printf("Quantidade de números pares: %d\n", qtd_par);
    printf("Quantidade de números ímpares: %d\n", qtd_impar);
    printf("Média dos valores pares: %.1f\n", media_par);
    printf("Média geral dos números lidos: %.1f\n", media_total);
    
    printf("\n\nPressione ENTER para sair.");

    getchar();    
    return 0;
}