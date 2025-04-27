/*Faça um programa que leia três valores inteiros e mostre sua soma*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vlr1, vlr2, vlr3; 

    printf("Digite o 1* valor: ");
    scanf("%d", &vlr1);

    printf("Digite o 2* valor: ");
    scanf("%d", &vlr2);

    printf("Digite o 3* valor: ");
    scanf("%d", &vlr3);

    printf("Numero 1: %d\n", vlr1); // Exibe o primeiro número
    printf("Numero 2: %d\n", vlr2); // Exibe o segundo número
    printf("Numero 3: %d\n", vlr3); // Exibe o terceiro número

    printf("Soma dos numeros: %d\n", vlr1 + vlr2 + vlr3); // Exibe a soma dos números

    return 0;
}