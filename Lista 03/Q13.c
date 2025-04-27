/*Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe
uma das opções, e o seu programa pede dois valores numéricos e realiza a
operação, mostrando o resultado*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    printf("Escolha uma operação:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4)
    {
        printf("Opção invalida!\n");
        return 0;
    }

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Realiza a operação escolhida
    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("Resultado da adicao: %.2f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtracao: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplicacao: %.2f\n", resultado);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Erro: divisao por zero nao e permitida.\n");
        }
        else
        {
            resultado = num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
        }
        break;
    }

    return 0;
}
