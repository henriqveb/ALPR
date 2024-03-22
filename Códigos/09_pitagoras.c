#include <stdio.h>
#include <locale.h>
#include <math.h>

//9. Receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float cateto1, cateto2, hipotenusa;

    printf("Este algoritmo recebe os valores dos catetos de um triângulo retângulo e calcula a hipotenusa.\n\n");

    printf("Digite o valor do primeiro cateto:\n");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto:\n");
    scanf("%f", &cateto2);
    

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    printf("\nA hipotenusa do triângulo retângulo é %.2f.", hipotenusa);
    return 0;
}