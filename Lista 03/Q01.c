/*Faça um programa que leia dois números e mostre qual deles é o maior.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2;

    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &num2);

    if (num1 > num2) // Condicional que verifica se o primeiro número é maior 
    {
        printf("O primeiro numero e o maior\n");
    }
    
    else // Caso contrário
    {
        printf("O segundo numero e o maior\n");
    }

    return 0;
}