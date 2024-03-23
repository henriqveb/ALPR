#include <stdio.h>
#include <locale.h>

// 27. Fazer um algoritmo para ler uma quantidade N de alunos. Ler a nota de cada um dos N alunos e calcular a média aritmética das notas. Contar quantos alunos estão com a nota acima de 5.0. Obs.: Se nenhum aluno tirou nota acima de 5.0, imprimir mensagem: “Não há nenhum aluno com nota acima de 5.”

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int qtd_alunos, qtd_acima_5 = 0;
    float nota, soma_notas = 0, media;

    printf("Este algoritmo lê a quantidade de alunos e as notas de cada um, calculando a média aritmética das notas e contando quantos alunos estão com a nota acima de 5.0.\n\n");

    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &qtd_alunos);

    for (int i = 0; i < qtd_alunos; i++) {
        printf("Digite a nota do aluno %d:\n", i+1);
        scanf("%f", &nota);

        soma_notas += nota;

        if (nota > 5.0) {
            qtd_acima_5++;
        }
    }

    media = soma_notas / qtd_alunos;

    printf("A média aritmética das notas é: %.1f\n", media);
    
    if (qtd_acima_5 == 0) {
        printf("Não há nenhum aluno com nota acima de 5.");
    } else {
        printf("%d alunos estão com a nota acima de 5.0.", qtd_acima_5);
    }

    printf("\n\nPressione ENTER para sair.");

    getchar();    
    return 0;
}