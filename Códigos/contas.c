#include <stdio.h>
#include <locale.h>

// Desafio - OBI 2023 - Fase 1 - Nível 2
// Contas a Pagar

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    int V, A, F, P, i = 0;

    printf("Digite o valor que Vô João tem disponível para pagar as contas: ");
    scanf("%d", &V);
    while (V < 0 || V > 2000) {
        printf("Valor inválido. Digite o valor que Vô João tem disponível para pagar as contas: ");
        scanf("%d", &V);
    }
    
    printf("Digite o valor da conta do Açougue: ");
    scanf("%d", &A);
    while (A < 1 || A > 1000) {
        printf("Valor inválido. Digite o valor da conta do Açougue: ");
        scanf("%d", &A);
    }
    
    printf("Digite o valor da conta da Farmácia: ");
    scanf("%d", &F);
    while (F < 1 || F > 1000) {
        printf("Valor inválido. Digite o valor da conta da Farmácia: ");
        scanf("%d", &F);
    }

    printf("Digite o valor da conta da Padaria: ");
    scanf("%d", &P);
    while (P < 1 || P > 1000) {
        printf("Valor inválido. Digite o valor da conta da Padaria: ");
        scanf("%d", &P);
    }

    if (A <= F && A <= P && A <= V) {
        V -= A;
        i++;
        if (F <= P && F <= V) {
            V -= F;
            i++;
            if (V >= P) {
                V -= P;
                i++;
            }
        } else if (P <= V){
            V -= P;
            i++;
            if (V >= F) {
                V -= F;
                i++;
            }
        }
    } else if (F <= A && F <= P && F <= V) {
        V -= F;
        i++;
        if (A <= P && A <= V) {
            V -= A;
            i++;
            if (V >= P) {
                V -= P;
                i++;
            }
        } else if (P <= V){
            V -= P;
            i++;
            if (V >= A) {
                V -= A;
                i++;
            }
        }
    } else if (P <= A && P <= F && P <= V) {
        V -= P;
        i++;
        if (A <= F && A <= V) {
            V -= A;
            i++;
            if (V >= F) {
                V -= F;
                i++;
            }
        } else if (F <= V){
            V -= F;
            i++;
            if (V >= A) {
                V -= A;
                i++;
            }
        }
    }

    printf("Vô João conseguiu pagar %d contas.\n", i);
}