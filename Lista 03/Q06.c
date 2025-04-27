/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int genero; 
    float ideal;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Escolha seu sexo:\n1 - Masculino\n2 - Feminino\n");
    scanf("%d", &genero);

    if (genero == 1) // Gênero masculino
    {
        ideal = (72.7 * altura) - 58; // Fórmula do peso ideal masculino
        printf("Peso ideal como homem: %.2f kg\n", ideal);
    }

    else if (genero == 2) // Gênero feminino
    {
        ideal = (62.1 * altura) - 44.7; // Fórmula do peso ideal feminino
        printf("Peso ideal como mulher: %.2f kg\n", ideal);
    }

    else // Caso contrário
    {
        printf("Opcao de genero invalida.\n");
    }

    return 0;
}