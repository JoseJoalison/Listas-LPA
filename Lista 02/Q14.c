/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use a
tabela ASCII para isso*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraMaiuscula;
    char letraMinuscula;

    printf("Digite uma letra maiuscula: "); // Solicita uma letra maiúscula ao usuário
    scanf(" %c", &letraMaiuscula);

        letraMinuscula = letraMaiuscula + ('a' - 'A');
        printf("A letra minúscula correspondente e: %c\n", letraMinuscula); // Exibe a letra minúscula correspondente

    return 0;
}