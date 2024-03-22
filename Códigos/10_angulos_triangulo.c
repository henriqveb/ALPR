#include <stdio.h>
#include <conio.h>
#include <locale.h>

//10. Receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float angulo1, angulo2, angulo3;

    printf("Este algoritmo recebe os valores de dois ângulos e retorna o valor do terceiro ângulo.\n\n");

    printf("Digite o valor do primeiro ângulo:\n");
    scanf("%f", &angulo1);
    printf("Digite o valor do segundo ângulo:\n");
    scanf("%f", &angulo2);

    angulo3 = 180 - angulo1 - angulo2;

    while (angulo3 <= 0) {
        printf("\nOs valores inseridos não formam um triângulo. Insira outros valores:\n");
        printf("Digite o valor do primeiro ângulo:\n");
        scanf("%f", &angulo1);
        printf("Digite o valor do segundo ângulo:\n");
        scanf("%f", &angulo2);
        angulo3 = 180 - angulo1 - angulo2;
    }

    printf("\nO terceiro ângulo do triângulo é %.2f.", angulo3);
    getch();
    return 0;
}