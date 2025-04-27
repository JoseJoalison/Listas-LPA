/*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Exemplo: A soma dos divisores do número 66 é
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, numero;
    int soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) // Verifica se o número é positivo
    {
        for (i = 1; i < numero; i++) // Loop de 1 até o número digitado (excluindo ele mesmo)
        {
            if (numero % i == 0) // Se i for divisor de numero
            {
                soma += i; // Soma o divisor
            }
        }

        printf("A soma dos divisores de %d (excluindo ele proprio) e: %d\n", numero, soma);
    }

    else // Caso contrário
    {
        printf("Por favor, digite um numero positivo.\n");
    }

    return 0;
}