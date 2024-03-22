#include <stdio.h>
#include <locale.h>

//4. Elaborar um algoritmo que apresente o valor da conversão em dólar (U$) de um valor lido em real (R$). O algoritmo deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário.

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float valor_real, cotacao_dolar, valor_dolar;

    printf("Este algoritmo apresenta o valor da conversão em dólar (U$) de um valor lido em real (R$).\n\n");
    printf("Digite o valor em Reais (R$):\n");
    scanf("%f", &valor_real);
    printf("Digite a cotação atual do Dólar:\n");
    scanf("%f", &cotacao_dolar);

    valor_dolar = valor_real/cotacao_dolar;

    printf("\nO valor R$ %.2f em Dólares é U$ %.2f", valor_real, valor_dolar);
    return 0;
}