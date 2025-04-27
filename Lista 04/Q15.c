/* Elabore um programa que faça a leitura de vários números inteiros até que se digite um
número negativo. O programa tem de retornar o maior e o menor número lido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int numero, maior, menor;

    printf("Digite um numero inteiro (numero negativo para encerrar): ");
    scanf("%d", &numero);

    if (numero < 0) // Verifica se o primeiro número é negativo
    {
        printf("Nenhum numero foi digitado.\n");
        return 0;  // Encerra o programa caso o primeiro número seja negativo
    }

    maior = menor = numero; // Inicializa o maior e o menor com o primeiro número

    while (numero >= 0) // Enquanto o número for não negativo
    {
        if (numero > maior) // Verifica se o número digitado é maior que o maior atual
            maior = numero;  // Atualiza o maior número

        if (numero < menor) // Verifica se o número digitado é menor que o menor atual
            menor = numero;  // Atualiza o menor número

        printf("Digite um numero inteiro (numero negativo para encerrar): ");
        scanf("%d", &numero);
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}