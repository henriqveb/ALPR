#include <stdio.h>
#include <conio.h> // para a função getch()
#include <ctype.h> // para a função toupper()

int main() {
    char c, maiusculo, letra;
    int ascii;

    printf("Digite um caractere:\n");
    c = getch(); // não é necessário pressionar Enter, não exibe o caractere digitado. Não faz parte da biblioteca padrão C, funciona apenas no Windows.
    ascii = c; // converte o caractere para seu valor ASCII
    letra = ascii; // converte o valor ASCII para o caractere correspondente

    printf("O caractere digitado foi: %c\n", c);
    maiusculo = toupper(c); // converte o caractere para maiúsculo, se for uma letra maiúscula, retorna o mesmo caractere. Se não for uma letra, retorna o mesmo caractere.
    printf("O caractere em MAIÚSCULO é: %c\n", maiusculo);
    printf("O valor ASCII do caractere digitado é: %d\n", ascii);
    printf("O caractere correspondente ao valor ASCII %d é: %c\n", ascii, letra);
    return 0;
}