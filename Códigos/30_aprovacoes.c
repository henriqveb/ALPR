#include <stdio.h>
#include <locale.h>

// 30. Os alunos de informática tiveram cinco provas (uma de cada matéria/disciplina): 1, 2, 3, 4 e 5. Considere aprovado o aluno com nota igual ou superior a 7.0. Criar um algoritmo que leia o Nome dos alunos e as suas respectivas cinco notas. Inicialmente o algoritmo deve perguntar quantos alunos existem na turma e deve também imprimir:
// - Nome dos que foram aprovados em todas as matérias;
// - Nome dos alunos aprovados nas matérias 1 e 4;
// - A porcentagem dos aprovados na matéria 3.
// Utilize vetores para armazenar os nomes dos alunos.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int aluno;

    printf("Este algoritmo irá calcular a quantidade de alunos aprovados em cada matéria.\n\n");

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &aluno);
    char nome[aluno][100];
    float notas[aluno][5];
    float nota;
    int qtdMatApv[aluno];
    int aprovados_3 = 0;
    int aprovados_1_4 = 0;

    for (int i = 0; i < aluno; i++) {
        
        qtdMatApv[i] = 0;

        printf("\nInforme o nome do aluno %d: ", i + 1);
        scanf("%s", nome[i]);

        for (int j = 0; j < 5; j++) {
            printf("Informe a nota da prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);


            while (notas[i][j] < 0 || notas[i][j] > 10) {
                printf("Nota inválida. Informe a nota da prova %d: ", j + 1);
                scanf("%f", &notas[i][j]);
            }

            if (notas[i][j] >= 7) {
                qtdMatApv[i]++;
            }
        }

        

        if (notas[2] >= 7) {
            aprovados_3++;
        }
    }
    
    int j = 0;
    for (int i = 0; i < aluno; i++) {
        if (qtdMatApv[i] == 5) {
            printf("\nO aluno %s foi aprovado em todas as matérias.", nome[i]);
        }

        if (notas[i][0] >= 7 && notas[i][3] >= 7) {
            printf("\nO aluno %s foi aprovado nas matérias 1 e 4.", nome[i]);
            j++;
        }
    }

    printf("\n%d alunos foram aprovado nas matérias 1 e 4.", j);
    printf ("\nA porcentagem dos aprovados na matéria 3 é de %.1f%%.", (aprovados_3 * 100.0) / aluno);

    printf("\n\nPressione ENTER para sair.");

    getchar();    
    return 0;
}