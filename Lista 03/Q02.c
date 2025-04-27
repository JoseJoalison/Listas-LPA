/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os
dois números forem iguais, imprima a mensagem “Números iguais*/

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

    else if (num1 == num2) // Condicional que verifica se os números são iguais
    {
        printf("Os nuros sao iguais\n");
    }

    else // Caso contrário
    {
        printf("O segundo numero e o maior\n");
    }

    return 0;
}