#include <stdio.h>
#include <conio.h>
#include <locale.h>

//3. Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a fórmula PRESTACAO <- VALOR +VALOR * (TAXA/100)*TEMPO_MES.

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float prestacao, taxa, valor;
    int tempo_mes;

    printf("Este algoritmo efetua o cálculo e apresenta o valor de uma prestação de um bem em atraso.\n\n");
    printf("Digite o valor inicial da prestação:\n");
    scanf("%f", &valor);
    printf("Digite a taxa (em %%):\n");
    scanf("%f", &taxa);
    printf("Digite o tempo (em meses):\n");
    scanf("%d", &tempo_mes);

    prestacao = valor + valor * (taxa/100)*tempo_mes;

    printf("O valor atual da prestação é de R$ %.2f", prestacao);
    getch();
    return 0;
}