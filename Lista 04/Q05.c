/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int soma = 0;
    int numero = 0;
    int contador = 0;

    while (contador < 50) // Enquanto o contador for menor que 50
    {
        soma += numero; // Adiciona o número atual à soma
        numero += 2; // Pega o próximo número par
        contador++; // Incrementa o contador
    }

    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}
