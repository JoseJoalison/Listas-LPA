/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, i;
    int a = 0, b = 1, proximo;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &num);

    if (num < 0) // Verifica se o número é negativo
    {
        printf("Por favor, digite um numero maior ou igual a zero.\n");
        return 0;  // Encerra o programa se o número for negativo
    }

    if (num == 0) // Caso base da sequência de Fibonacci
    {
        printf("O %d* termo da sequencia de Fibonacci e: %d\n", num, a);
    }

    else if (num == 1) // Outro caso base
    {
        printf("O %d* termo da sequencia de Fibonacci e: %d\n", num, b);
    }

    else // Caso contrário
    {
        for ( i = 2; i <= num; i++) // Inicia o loop a partir do terceiro termo
        {
            proximo = a + b; // Calcula o próximo termo da sequência
            a = b; // Atualiza o valor de a para o termo anterior
            b = proximo; // Atualiza b para o novo termo
        }
        printf("O %d* termo da sequencia de Fibonacci e: %d\n", num, b);
    }
   
    return 0;
}