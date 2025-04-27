/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida,
imprima o valor correspondente em dólares*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cotacao, dolar, real;

    printf("Digite o valor em reais: ");
    scanf("%f", &real);
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

   dolar = real / cotacao; // Calcula o valor em dolar

    printf("Cotacao do dolar: %.2f\n", cotacao); // Exibe a cotação do dólar
    printf("Valor em dolar: %.2f\n", dolar); // Exibe o valor em dólares
    printf("Valor em reais: %.2f\n", real); // Exibe o valor em reais

    return 0;
}