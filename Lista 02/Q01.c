/*Faça um programa que leia um número inteiro e retorne seu antecessor e seu
sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Digite um valor: ");
    scanf("%d", &i);

    printf("Numero: %d\n", i); // Exibe o número
    printf("Numero antecessor: %d\n", i - 1); // Exibe o número antecessor
    printf("Numero sucessor: %d\n", i + 1); // Exibe o número sucessor

    return 0;
}