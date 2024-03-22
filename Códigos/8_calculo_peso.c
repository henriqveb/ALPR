#include <stdio.h>
#include <conio.h>
#include <locale.h>

//8. Receba o peso de uma pessoa, calcule e mostre dois novos pesos, se a pessoa engordar 15% e se emagrecer 20% sobre o peso digitado.

int main(void){
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float peso, peso_maior, peso_menor;

    printf("Este algoritmo recebe o peso de uma pessoa e calcula dois pesos, um se ela engordar 15%% e outro se ela emagrecer 20%% em relação ao peso inserido.\n\n");

    printf("Digite o peso da pessoa:\n");
    scanf("%f", &peso);

    peso_maior = peso + peso * 15 / 100;
    peso_menor = peso - peso * 20 / 100;

    printf("\nSe a pessoa engordar 15%%, ela terá %.2f kg. Se ela emagrecer 20%%, ela terá %.2f kg.", peso_maior, peso_menor);
    getch();
    return 0;
}