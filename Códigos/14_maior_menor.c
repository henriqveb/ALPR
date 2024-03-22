#include <stdio.h>
#include <locale.h>

//14. Colocar em MAIOR o maior de A, B e C e em MENOR o menor deles, sendo que A, B e C devem ser lidos. Imprimir os valores lidos e os determinados.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int a, b, c, maior, menor;

    printf("Este algoritmo recebe três números e retorna os valores lidos e o maior e o menor deles.\n\n");

    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("Digite o terceiro número:\n");
    scanf("%d", &c);

    if (a >= b) {
        if (a >= c) {
            maior = a;
        } else {
            maior = c;
        }
    } else {
        if (b >= c) {
            maior = b;
        } else {
            maior = c;
        }
    }

    if (a <= b) {
        if (a <= c) {
            menor = a;
        } else {
            menor = c;
        }
    } else {
        if (b <= c) {
            menor = b;
        } else {
            menor = c;
        }
    }

    printf("\nOs números digitados foram %d, %d e %d.\n", a, b, c);
    printf("O maior número é %d e o menor número é %d.", maior, menor);

    return 0;
}