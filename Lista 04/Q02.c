/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0) // Verifica se o número é positivo
    {
        printf("Numeros de %d ate 0:\n", num);
        
        for (i = num; i >= 0; i--) // Loop do número digitado até 0
        {
            printf("%d\n", i);
        }
    }

    else // Caso contrário
    {
        printf("Por favor, digite um numero inteiro positivo.\n");
    }

    return 0;
}