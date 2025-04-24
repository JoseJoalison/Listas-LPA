#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    int contador = 0;
    int numero = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &N);

    printf("Os %d primeiros números naturais ímpares são:\n", N);

    while (contador < N) // Enquanto o contador for menor que N
    {
        printf("%d\n", numero);
        numero += 2; // Pula para o próximo número ímpar
        contador++;  // Conta quantos ímpares já foram impressos
    }

    system("pause");

    return 0;
}