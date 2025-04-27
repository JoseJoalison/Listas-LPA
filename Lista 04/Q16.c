#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i;
    double Hn = 0.0;

    printf("Digite um numero inteiro n (n >= 1): ");
    scanf("%d", &n);

    if (n >= 1) // Verifica se n é maior ou igual a 1
    {
        for (i = 1; i <= n; i++) // Loop de 1 até n
        {
            Hn += 1.0 / i;  // Soma os inversos dos números de 1 até n
        }

        printf("O valor de H%d (numero harmonico) e: %.6f\n", n, Hn);
    }

    else
    {
        printf("Por favor, digite um numero maior ou igual a 1.\n");
    }
   
    return 0;
}