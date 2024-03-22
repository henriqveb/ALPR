#include <stdio.h>
#include <conio.h>
#include <locale.h>

//15. Solicite o ano de casamento, o ano atual e escreva as seguintes mensagens, para os seguintes casos: 25 anos - "Bodas de Prata"; 50 anos - "Bodas de Ouro" e 75 anos - "Bodas de Diamante". Nos casos restantes escrever apenas o número de anos de casados.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int ano_casamento, ano_atual, anos_casamento;

    printf("Este algoritmo recebe o ano de casamento e o ano atual e retorna quantos anos de casamento (bodas) o casal está comemorando.\n\n");

    printf("Digite o ano de casamento:\n");
    scanf("%d", &ano_casamento);

    while (ano_casamento < 0) {
        printf("Ano inválido. Digite novamente: ");
        scanf("%d", &ano_casamento);
    }

    printf("Digite o ano atual:\n");
    scanf("%d", &ano_atual);

    while (ano_atual < 0) {
        printf("Ano inválido. Digite novamente: ");
        scanf("%d", &ano_atual);
    }

    anos_casamento = ano_atual - ano_casamento;

    if (anos_casamento == 25) {
        printf("\nBodas de Prata.");
    } else if (anos_casamento == 50) {
        printf("\nBodas de Ouro.");
    } else if (anos_casamento == 75) {
        printf("\nBodas de Diamante.");
    } else {
        printf("\nO casal está comemorando %d anos de casamento.", anos_casamento);
    }

    getch();
    return 0;
}