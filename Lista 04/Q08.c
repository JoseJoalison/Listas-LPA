/*Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor, i, soma = 0;
    float media;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Numero %d: ", i);
        scanf("%d", &valor);
        soma += valor; // Adiciona o valor digitado à soma total
    }

    media = soma / 10.0; // Cálculo da média 

    printf("A media dos 10 numeros digitados e: %.2f\n", media);

    return 0;
}
