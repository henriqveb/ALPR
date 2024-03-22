#include <stdio.h>
#include <conio.h>
#include <locale.h>

//19. Leia uma nota numérica (número real) codificada entre 0  e 10. Em seguida converta essa nota para a correspondente em conceito, segundo dados abaixo.
//A = acima ou igual a 9.0
//B = inferior a 9.0 e superior ou igual a 7.0
//C = inferior a 7.0 e superior ou igual a 5.0
//D = inferior a 5.0 e superior ou igual a 2.5
//E = inferior a 2.5

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float nota;

    printf("Este algoritmo recebe uma nota e retorna o conceito correspondente.\n\n");

    printf("Digite a nota (de 0 a 10):\n");
    scanf("%f", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota inválida. Digite novamente: ");
        scanf("%f", &nota);
    }

    if (nota >= 9.0) {
        printf("\nA");
    } else if (nota >= 7.0) {
        printf("\nB");
    } else if (nota >= 5.0) {
        printf("\nC");
    } else if (nota >= 2.5) {
        printf("\nD");
    } else {
        printf("\nE");
    }

    getch();
    return 0;
}