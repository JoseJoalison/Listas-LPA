#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, opcao;
    double resultado;

    printf("Digite tres numeros inteiros positivos:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Verificação de positividade
    if (num1 <= 0 || num2 <= 0 || num3 <= 0)
    {
        printf("Todos os numeros devem ser positivos.\n");
        return 1;
    }

    printf("Escolha o tipo de media:\n");
    printf("1: Geometrica\n");
    printf("2: Ponderada (pesos: 1, 2 e 3)\n");
    printf("3: Harmonica\n");
    printf("4: Aritmetica\n");
    scanf("%d", &opcao);

    // Cálculo da média conforme a opção
    switch (opcao)
    {
    case 1: // Geométrica
        resultado = cbrt(num1 * num2 * num3);
        break;
    case 2: // Ponderada
        resultado = (num1 * 1 + num2 * 2 + num3 * 3) / 6.0;
        break;
    case 3: // Harmônica
        resultado = 3.0 / (1.0 / num1 + 1.0 / num2 + 1.0 / num3);
        break;
    case 4: // Aritmética
        resultado = (num1 + num2 + num3) / 3.0;
        break;
    default:
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Resultado da media: %.2f\n", resultado);

    return 0;
}