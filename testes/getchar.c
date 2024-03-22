#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere:\n");
    c = getchar(); // é necessário pressionar Enter, exibe o caractere digitado. Faz parte da biblioteca padrão C. Retorna um inteiro, que é o valor ASCII do caractere digitado.

    printf("O caractere digitado foi: %c\n", c);
    return 0;
}