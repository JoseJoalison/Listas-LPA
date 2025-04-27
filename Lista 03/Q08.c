/*Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) // Categoria Infantil A
    {
        printf("Você vai nadar na categoria: Infantil A\n");
    }

    else if (idade >= 8 && idade <= 10) // Categoria Infantil B
    {
        printf("Voce vai nadar na categoria: Infantil B\n");
    }

    else if (idade >= 11 && idade <= 13) // Categoria Juvenil A
    {
        printf("Voce vai nadar na categoria: Juvenil A\n");
    }

    else if (idade >= 14 && idade <= 17) // Categoria Juvenil B
    {
        printf("Voce vai nadar na categoria: Juvenil B\n");
    }

    else if (idade >= 18) // Sênior
    {
        printf("Voce vai nadar na categoria: Senior\n");
    }

    else // Caso contrário
    {
        printf("Idade invalida para participar.\n");
    }

    return 0;
}