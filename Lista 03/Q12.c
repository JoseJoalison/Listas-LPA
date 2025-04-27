/*Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    // Verifica e imprime o dia da semana correspondente
    switch (dia)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terca-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Dia inexistente! Digite um valor entre 1 e 7.\n");
    }

    return 0;
}