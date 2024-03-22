#include <stdio.h>
#include <locale.h>
#include <ctype.h>

//24. Calcular a área total em metros de uma residência com os cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que podem ser fornecidos. O algoritmo deve solicitar a entrada do nome, da largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar calculando novos cômodos. Caso o usuário responda “NÃO”, o programa deve apresentar o valor total acumulado da área residencial.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    char nome[20];
    float largura, comprimento, area, area_total = 0;
    char continuar = 'S';

    printf("Este algoritmo calcula a área total de uma residência com os cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros que podem ser fornecidos.\n\n");

    while (continuar == 'S') {
        printf("Digite o nome do cômodo:\n");
        scanf("%s", nome);
        printf("Digite a largura do cômodo em metros:\n");
        scanf("%f", &largura);
        printf("Digite o comprimento do cômodo em metros:\n");
        scanf("%f", &comprimento);
        area = largura * comprimento;
        area_total += area;
        printf("\nA área do cômodo %s é %.2f metros quadrados.", nome, area);
        printf("\nDeseja continuar calculando novos cômodos? (S/N)\n");
        continuar = getch();

        while (continuar != 'S' && continuar != 'N') {
            printf("Digite S para continuar ou N para sair:\n");
            continuar = getch();
            continuar = toupper(continuar);
        }

        
    }

    printf("\n\nA área total da residência é %.2f metros quadrados.", area_total);
    printf("\n\nPressione qualquer tecla para sair.");
    
    return 0;
}