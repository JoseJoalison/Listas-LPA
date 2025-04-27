/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    int contador = 0;
    int numero = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    printf("Os %d primeiros numeros naturais impares sao:\n", N);

    while (contador < N) // Enquanto o contador for menor que N
    {
        printf("%d\n", numero);
        numero += 2;
        contador++;  // Conta quantos ímpares já foram impressos
    }

    system("pause");

    return 0;
}