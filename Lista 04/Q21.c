/*Escreva um programa que leia certa quantidade de números, imprima o maior
deles e quantas vezes o maior número foi lido. A quantidade de números a
serem lidos deve ser fornecida pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int quantidade, numero, i;
    int maior, contador = 0;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) // Verifica se a quantidade é maior que 0
    {
        printf("Por favor, digite uma quantidade valida (maior que 0).\n");
    }

    for ( i = 1; i <= quantidade; i++) // Loop de 1 até a quantidade digitada
    {
        printf("Digite o %d* numero: ", i);
        scanf("%d", &numero);

        if (i == 1) // Primeiro número lido
        {
            maior = numero;
            contador = 1;
        }

        else // Caso contrário
        {
            if (numero > maior) // Verifica se o número lido é maior que o maior atual
            {
                maior = numero;
                contador = 1; // Reinicia o contador para o novo maior
            }

            else if (numero == maior) // Verifica se o número lido é igual ao maior atual
            {
                contador++; // Incrementa o contador se for igual ao maior atual
            }
        }
    }

    printf("\nO maior numero lido foi: %d\n", maior);
    printf("O maior numero apareceu %d vez(es).\n", contador);

    return 0;
}