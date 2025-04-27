/*Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que
são múltiplos de 3 ou 5*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, soma = 0;

    for ( i = 1; i < 1000; i++) // Loop de 1 a 999
    {
        if (i % 3 == 0 || i % 5 == 0) // Verifica se o número é múltiplo de 3 ou 5
        {
            soma += i;  // Soma o número
        }
    }

    printf("A soma dos numeros abaixo de 1000 que sao multiplos de 3 ou 5 e: %d\n", soma);
      
    return 0;
}