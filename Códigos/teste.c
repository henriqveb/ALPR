#include <stdio.h>
#include <locale.h>

// 42. Elaborar um algoritmo que leia 2 vetores A e B com 12 elementos reais cada. Construir um vetor C de mesmo tipo que seja formado pelo produto de cada elemento correspondente aos vetores A e B. Montar o trecho de pesquisa SEQUENCIAL para pesquisar os elementos existentes no vetor C.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float A[12], B[12], C[12];

    printf("Este algoritmo lê dois vetores A e B com 12 elementos reais cada e constrói um vetor C com o produto de cada elemento correspondente aos vetores A e B.\n\n");

    for (int i = 0; i < 12; i++) {
        printf("Informe o %dº elemento do vetor A: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < 12; i++) {
        printf("Informe o %dº elemento do vetor B: ", i + 1);
        scanf("%f", &B[i]);
    }

    for (int i = 0; i < 12; i++) {
        C[i] = A[i] * B[i];
    }

    printf("\nVetor C:\n");
    for (int i = 0; i < 12; i++) {
        printf("%.2f\n", C[i]);
    }

    float elemento;
    int encontrado = 0;

    printf("\nInforme o elemento a ser pesquisado no vetor C: ");
    scanf("%f", &elemento);

    for (int i = 0; i < 12; i++) {
        if (C[i] == elemento) {
            printf("Elemento encontrado na posição %d.\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Elemento não encontrado.\n");
    }

    return 0;
}