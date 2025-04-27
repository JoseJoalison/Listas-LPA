/*Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor, soma = 0, contador = 0; // Inicializa soma e contador
    float media;

    printf("Digite 10 números inteiros positivos:\n");

    for (int i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Número %d: ", i);
        scanf("%d", &valor);

        if (valor > 0) // Ignora números não positivos
        {
            soma += valor;
            contador++; // Conta quantos números positivos foram inseridos
        }
    }

    if (contador > 0) // Verifica se algum número positivo foi digitado
    {
        media = soma / (float)contador; // Calcula a média
        printf("A média dos números positivos digitados é: %.2f\n", media);
    }

    else // Caso contrário
    {
        printf("Nenhum número positivo foi digitado.\n");
    }
    
    return 0;
}