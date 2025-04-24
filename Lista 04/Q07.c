#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor, soma = 0;

    printf("Digite 10 valores inteiros:\n");

    for (int i = 1; i <= 10; i++) // Loop de 1 a 10
    {
        printf("Valor %d: ", i);
        scanf("%d", &valor);
        soma += valor; // Adiciona o valor digitado à soma total
    }

    printf("A soma dos 10 valores digitados é: %d\n", soma);

    system("pause");

    return 0;
}
