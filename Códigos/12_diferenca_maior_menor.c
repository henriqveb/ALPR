#include <stdio.h>
#include <locale.h>

//12. Efetuar a leitura de dois valores numéricos inteiros representados pelas variáveis A e B e apresentar o resultado da diferença do maior valor pelo menor valor.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int num1, num2, diferenca;

    printf("Este algoritmo recebe dois números e retorna a diferença entre o maior e o menor.\n\n");

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    if (num1 > num2) {
        diferenca = num1 - num2;
    } else {
        diferenca = num2 - num1;
    }

    printf("\nA diferença entre o maior e o menor número é %d.", diferenca);
    return 0;
}