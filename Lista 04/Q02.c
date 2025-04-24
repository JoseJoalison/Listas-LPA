#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num >= 0) // Verifica se o número é positivo
    {
        printf("Números de %d até 0:\n", num);
        
        for (int i = num; i >= 0; i--) // Loop do número digitado até 0
        {
            printf("%d\n", i);
        }
    }

    else // Caso contrário
    {
        printf("Por favor, digite um número inteiro positivo.\n");
    }

    system("pause");

    return 0;
}