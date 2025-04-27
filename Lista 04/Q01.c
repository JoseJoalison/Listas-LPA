/*Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0) // Verifica se o número é positivo
    {
        printf("Numeros de 0 ate %d:\n", num);
        
        for (int i = 0; i <= num; i++) // Loop de 0 até o número digitado
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