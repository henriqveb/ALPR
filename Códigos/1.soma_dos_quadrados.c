#include <stdio.h>
#include <conio.h>
#include <locale.h>

//1. Construir um algoritmo que leia três valores numéricos inteiros (representados pelas variáveis A, B e C) e apresente como resultado final o valor da soma dos quadrados dos três valores lidos.

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a, b, c, soma_quadrados;
    printf("\nEste algoritmo recebe três valores inteiros e retorna o quadrado da soma dos mesmos.\n\n");
    printf("Digite o primeiro valor:\n");
    scanf("%d", &a);
    printf("Digite o segundo valor:\n");
    scanf("%d", &b);
    printf("Digite o terceiro valor:\n");
    scanf("%d", &c);

    soma_quadrados = (a*a)+(b*b)+(c*c);

    printf("A soma dos quadrados de %d, %d e %d é: %d", a, b, c, soma_quadrados);
    getch();
    return 0;
}