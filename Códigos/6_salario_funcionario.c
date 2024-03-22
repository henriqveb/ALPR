#include <stdio.h>
#include <locale.h>

//6. Receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float salario, percentual_aumento, novo_salario;

    printf("Este algoritmo calcula o novo salário de um funcionário, dado o salário atual e o percentual de aumento.\n\n");

    printf("Digite o salário atual do funcionário:\n");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento (em porcentagem):\n");
    scanf("%f", &percentual_aumento);

    novo_salario = salario + salario * percentual_aumento / 100;

    printf("\nO novo salário do funcionário é R$ %.2f.", novo_salario);
    return 0;
}