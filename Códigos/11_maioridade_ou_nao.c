#include <stdio.h>
#include <conio.h>
#include <locale.h>

//11. Receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int idade;
    
    printf("Este algoritmo recebe a idade de uma pessoa e retorna se ela é maior ou menor de idade.\n\n");

    printf("Digite a idade: ");
    scanf("%d", &idade);

    while (idade < 0) {
        printf("Idade inválida. Digite novamente: ");
        scanf("%d", &idade);
    }

    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    getch();
    return 0;
}