/*Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vlr1, vlr2, vlr3, vlr4;

    printf("Digite o 1* valor: ");
    scanf("%f", &vlr1);

    printf("Digite o 2* valor: ");
    scanf("%f", &vlr2);

    printf("Digite o 3* valor: ");
    scanf("%f", &vlr3);

    printf("Digite o 4* valor: ");
    scanf("%f", &vlr4);

    printf("Numero 1: %.2f\n", vlr1); // Exibe o primeiro número
    printf("Numero 2: %.2f\n", vlr2); // Exibe o segundo número
    printf("Numero 3: %.2f\n", vlr3); // Exibe o terceiro número
    printf("Numero 4: %.2f\n", vlr4); // Exibe o quarto número

    printf("Media dos numeros: %.2f\n", (vlr1 + vlr2 + vlr3 + vlr4) / 4); // Exibe a média aritmética simples dos números

    return 0;
}