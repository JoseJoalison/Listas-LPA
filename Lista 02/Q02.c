/*Faça um programa que leia um número real e imprima a quinta parte desse número.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i;

    printf("Digite um valor: ");
    scanf("%d", &i);
    
    printf("Quinta parte de %.2f:\n%.2f\n", i, i / 5); // Exibe a quinta parte do número real

    return 0;
}