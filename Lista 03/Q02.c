#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: \n");
    scanf("%d", &num2);

    if (num1 > num2) // Condicional que verifica se o primeiro número é maior
    {
        printf("O primeiro número é o maior\n");
    }

    else if (num1 == num2) // Condicional que verifica se os números são iguais
    {
        printf("Os números são iguais\n");
    }

    else // Caso contrário
    {
        printf("O segundo número é o maior\n");
    }

    system("pause");

    return 0;
}