#include <stdio.h>
#include <locale.h>

//13. Efetuar a leitura de 3 valores inteiros desconhecidos representados pelas variáveis A, B e C. Somar os valores fornecidos e apresentar o resultado somente se for maior ou igual a 100.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int num1, num2, num3, soma;

    printf("Este algoritmo recebe três números e retorna a soma deles, caso a soma seja maior ou igual a 100.\n\n");

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);
    printf("Digite o terceiro número:\n");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    if (soma >= 100) {
        printf("\nA soma dos números é %d.", soma);
    } else {
        printf("\nA soma dos números é menor que 100.");
    }

    return 0;
}