#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);

    if (num % 2 == 0) // Verifica se o número é par
    {
        printf("O número é par\n");
    }

    else // Caso contrário
    {
        printf("O número é ímpar\n");
    }

    system("pause");

    return 0;
}