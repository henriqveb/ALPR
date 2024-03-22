#include <stdio.h>
#include <conio.h>
#include <locale.h>

//5. Desenvolver um algoritmo para converter uma temperatura dada em Celsius para Farenheit e Kelvin.

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // Para uso de caracteres específicos da Língua Portuguesa no terminal
    float c, f, k;

    printf("Este algoritmo converte uma temperatura dada em Celsius (°C) para Farenheit (°F) e Kelvin (K).\n\n");

    printf("Digite a temperatura (em Celsius):\n");
    scanf("%f", &c);

    //Em caso de o valor digitado ser menor que -273,15 °C (zero absoluto, é o limite inferior de temperatura na natureza), o algoritmo pedirá para digitá-lo novamente.
    while(c < -273.15){
        printf("Temperatura inválida (menor que -273,15), digite novamente:");
        scanf("%f", &c);
    };

    f = c * 1.8 + 32;
    k = c + 273.15;

    printf("%.1f °C equivalem a %.1f °F e a %.1f K.", c, f, k);
    getch();
    return 0;
}