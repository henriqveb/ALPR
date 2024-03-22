#include <stdio.h>
#include <conio.h>
#include <locale.h>

//17. Fazer a leitura de um valor numérico inteiro qualquer e apresentá-lo  caso não seja maior que 3. Dica: para a solução deste problema utilize apenas o operador lógico de negação.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int num1;

    printf("Este algoritmo recebe um número e retorna ele se não for maior que 3.\n\n");

    printf("Digite um número:\n");
    scanf("%d", &num1);

    if (!(num1 > 3)) {
        printf("\nO número digitado é %d.", num1);
    }

    getch();
    return 0;
}