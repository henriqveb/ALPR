#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

//2. Desenvolver um algoritmo para obter atribuir um valor randômico a uma variável inteira...utiliza-se a função randômica da ferramenta de pseudocódigo (randI( limite) no Visualg | u.sorteia(valor_inicial, valor_final) no WebStudio).

int aleatorio(int min, int max) {
    return min + (rand() % (max - min));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int minimo, maximo, numero;
    printf("\nEste algoritmo gera um número aleatório entre os valores mínimo (inclusive) e máximo (inclusive) que são recebidos.\n\n");

    printf("Digite o limite mínimo do intervalo de geração:\n");
    scanf("%d", &minimo);

    printf("Digite o limite máximo do intervalo de geração:\n");
    scanf("%d", &maximo);

    while(maximo <= minimo){
        printf("O limite máximo do intervalo deve ser maior que o limite mínimo. Tente novamente:\n");
        scanf("%d", &maximo);
    }

    numero = aleatorio(minimo, maximo);

    printf("O número aleatório gerado foi: %d", numero);
    getch();
    return 0;
}
