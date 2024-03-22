#include <stdio.h>
#include <conio.h>
#include <locale.h>

//18. Fazer a leitura de quatro valores numéricos inteiros representados pelas variáveis A, B, C e D. Apresentar apenas os valores que sejam divisíveis por 2 e 3.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int a, b, c, d;

    printf("Este algoritmo recebe quatro números e retorna apenas os divisíveis por 2 e 3.\n\n");

    printf("Digite o primeiro número:\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("Digite o terceiro número:\n");
    scanf("%d", &c);
    printf("Digite o quarto número:\n");
    scanf("%d", &d);

    if (a % 2 == 0 && a % 3 == 0) {
        printf("\n%d é divisível por 2 e 3.", a);
    }
    if (b % 2 == 0 && b % 3 == 0) {
        printf("\n%d é divisível por 2 e 3.", b);
    }
    if (c % 2 == 0 && c % 3 == 0) {
        printf("\n%d é divisível por 2 e 3.", c);
    }
    if (d % 2 == 0 && d % 3 == 0) {
        printf("\n%d é divisível por 2 e 3.", d);
    }

    getch();
    return 0;
}