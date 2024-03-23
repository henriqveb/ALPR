#include <stdio.h>
#include <locale.h>

// 28. Criar um algoritmo que leia idade e sexo (0-masculino, 1-feminino) de várias pessoas.  Calcule e imprima a idade média, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo masculino. O algoritmo termina quando se digita um número negativo para a idade.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int idade, sexo, qtd_feminino_30_45 = 0, qtd_masculino = 0, soma_idades = 0, qtd_pessoas = 0;
    float media_idades;

    printf("Este algoritmo lê idade e sexo (0-masculino, 1-feminino) de várias pessoas. Calcula e imprime a idade média, o total de pessoas do sexo feminino com idade entre 30-45 inclusive e o número total de pessoas do sexo masculino. O algoritmo termina quando se digita um número negativo para a idade.\n\n");
    
    do {
        printf("Digite a idade da pessoa (ou um número negativo para encerrar):\n");
        scanf("%d", &idade);

        if (idade >= 0) {
            printf("Digite o sexo da pessoa (0 - Masculino, 1 - Feminino):\n");
            scanf("%d", &sexo);

            while (sexo != 0 && sexo != 1) {
                printf("Opção inválida. Digite o sexo da pessoa (0 - Masculino, 1 - Feminino):\n");
                scanf("%d", &sexo);
            }

            soma_idades += idade;
            qtd_pessoas++;

            if (sexo == 1 && idade >= 30 && idade <= 45) {
                qtd_feminino_30_45++;
            } else if (sexo == 0) {
                qtd_masculino++;
            }
        }
    } while (idade >= 0);

    media_idades = soma_idades / qtd_pessoas;

    printf("Idade média das pessoas: %.1f\n", media_idades);
    printf("Total de pessoas do sexo feminino com idade entre 30-45 inclusive: %d\n", qtd_feminino_30_45);
    printf("Número total de pessoas do sexo masculino: %d\n", qtd_masculino);
    
    printf("\n\nPressione ENTER para sair.");

    getchar();    
    return 0;
}