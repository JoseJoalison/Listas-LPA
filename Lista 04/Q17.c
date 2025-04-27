/*Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
linhas do chamado triângulo de Floyd*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i, j;
    int numero = 1; // O primeiro número a ser impresso

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &num);

    if (num <= 0) // Verifica se o número é positivo
    {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= num; i++) // Para cada linha
    {
        for (j = 1; j <= i; j++) // Para cada número na linha
        {
            printf("%d ", numero);
            numero++; // Incrementa o número
        }
        printf("\n"); // Pula para a próxima linha
    }

    return 0;
}