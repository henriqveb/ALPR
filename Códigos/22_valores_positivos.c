#include <stdio.h>
#include <locale.h>

//22. Ler valores positivos inteiros até que um valor negativo seja informado. Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int num = 0, maior = 0, menor;

    printf("Este algoritmo recebe números positivos até que um número negativo seja recebido, então retorna o maior e o menor deles.\n\n");

    printf("Digite um número:\n");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while (num >= 0) {
        scanf("%d", &num);
        if (num >= 0) {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("\nO maior número digitado foi %d e o menor foi %d.", maior, menor);
    printf("\nO número negativo foi %d.", num);
    printf("\n\nPressione ENTER para sair.");

    getchar();
    return 0;
}