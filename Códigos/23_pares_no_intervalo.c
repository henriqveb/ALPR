#include <stdio.h>
#include <locale.h>

//23. Criar um algoritmo que leia os limites inferior e superior de um intervalo e imprima todos os números pares no intervalo aberto e seu somatório. Suponha que os dados digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o segundo.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int inf, sup, soma = 0;

    printf("Este algoritmo recebe dois números inteiros e imprime todos os números pares entre eles, além de seu somatório.\n\n");

    printf("Digite o limite inferior do intervalo:\n");
    scanf("%d", &inf);
    printf("Digite o limite superior do intervalo:\n");
    scanf("%d", &sup);

    while (sup <= inf) {
        printf("O limite superior deve ser maior que o inferior. Digite o limite superior novamente:\n");
        scanf("%d", &sup);
    }

    printf("\nOs números pares entre %d e %d são:\n", inf, sup);
    for (int i = inf + 1; i < sup; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\n\nO somatório dos números pares entre %d e %d é %d.", inf, sup, soma);
    printf("\n\nPressione ENTER para sair.");
    
    getchar();
    return 0;
}