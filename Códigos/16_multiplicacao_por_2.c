#include <stdio.h>
#include <conio.h>
#include <locale.h>

//16. Ler um número inteiro qualquer e multiplicá-lo por dois. Apresentar o resultado da multiplicação somente se o resultado for maior que 30 e menor que 100.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int num1, resultado;

    printf("Este algoritmo recebe um número e retorna o dobro dele se for maior que 30 e menor que 100.\n\n");

    printf("Digite um número:\n");
    scanf("%d", &num1);

    resultado = num1 * 2;

    if (resultado > 30 && resultado < 100) {
        printf("\nO dobro do número digitado é %d.", resultado);
    } else {
        printf("\nO dobro do número digitado não está entre 30 e 100.");
    }

    getch();
    return 0;
}