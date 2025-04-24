#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1 = 7.5;
    float v2 = 8.5;
    float v3 = 9.0;
    float v4 = 9.6;

    printf("Número 1: %.2f\n", v1); // Exibe o primeiro número
    printf("Número 2: %.2f\n", v2); // Exibe o segundo número
    printf("Número 3: %.2f\n", v3); // Exibe o terceiro número
    printf("Número 4: %.2f\n", v4); // Exibe o quarto número

    printf("Média dos números: %.2f\n", (v1 + v2 + v3 + v4) / 4); // Exibe a média aritmética simples dos números

    system("pause");

    return 0;
}