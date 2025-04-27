/*Faça um programa que receba um número inteiro maior do que 1 e verifique se
o número fornecido é primo ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, i;
    int primo = 1;  // Suponha que o número é primo

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) // Verifica se o número é menor ou igual a 1
    {
        printf("Por favor, digite um numero maior que 1.\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; i++) // Verifica até a metade do número
    {
        if (numero % i == 0)
        {
            primo = 0;  // Não é primo
            break; // Sai do loop se encontrar um divisor
        }
    }

    if (primo == 1) // Se primo for 1, o número é primo
    {
        printf("O numero %d e primo.\n", numero);
    }

    else // Caso contrário
    {
        printf("O numero %d nao e primo.\n", numero);
    }
    
    return 0;
}