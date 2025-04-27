/*Faça um programa que leia um número inteiro e verifique se esse número é par ou
ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) // Verifica se o número é par
    {
        printf("O numero e par\n");
    }

    else // Caso contrário
    {
        printf("O numero e impar\n");
    }

    return 0;
}