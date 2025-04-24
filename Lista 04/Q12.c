#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero;
    int soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) // Verifica se o número é positivo
    {
        for (int i = 1; i < numero; i++) // Loop de 1 até o número digitado (excluindo ele mesmo)
        {
            if (numero % i == 0) // Se i for divisor de numero
            {
                soma += i; // Soma o divisor
            }
        }

        printf("A soma dos divisores de %d (excluindo ele próprio) é: %d\n", numero, soma);
    }

    else // Caso contrário
    {
        printf("Por favor, digite um número positivo.\n");
    }

    system("pause");

    return 0;
}