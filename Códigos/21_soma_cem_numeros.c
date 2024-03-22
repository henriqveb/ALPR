#include <stdio.h>
#include <conio.h>
#include <locale.h>

//21. Faça um algoritmo, para apresentar o total da soma obtida dos cem primeiros números inteiros positivos.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int soma = 0;

    printf("Este algoritmo retorna a soma dos cem primeiros números inteiros positivos.\n\n");

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos cem primeiros números inteiros positivos é %d.", soma);

    getch();
    return 0;
}