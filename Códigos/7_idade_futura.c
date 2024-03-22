#include <stdio.h>
#include <locale.h>

//7. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre  a idade dessa pessoa e quantos anos ela será em 2050.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int nascimento, ano_atual, idade_atual, idade_futuro;

    printf("Este algoritmo calcula a idade que uma pessoa tem atualmente e terá em 2050, dado o ano de nascimento e o ano atual.\n\n");

    printf("Digite o ano de nascimento da pessoa:\n");
    scanf("%d", &nascimento);
    printf("Digite o ano atual:\n");
    scanf("%d", &ano_atual);

    idade_futuro = 2050 - nascimento;
    idade_atual = ano_atual - nascimento;

    printf("\nA pessoa tem %d anos atualmente e terá %d anos em 2050.", idade_atual, idade_futuro);
    return 0;
}