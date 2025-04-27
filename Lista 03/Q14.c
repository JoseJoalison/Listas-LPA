/* Faça um programa para verificar se determinado número inteiro lido é divisível por
3 ou 5, mas não simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0) && (numero % 5 == 0)) // Verifica se o número é divisível por 3 e 5
    {
        printf("O numero e divisivel por 3 e por 5.\n");
    }
    
    else if ((numero % 3 == 0) || (numero % 5 == 0)) // Verifica se o número é divisível por 3 ou 5, mas não por ambos
    { 
        printf("O numero érdivisivel por 3 ou por 5, mas nao por ambos.\n");
    }
    
    else // Caso contrário
    { 
        printf("O numero nao e divisivel nem por 3 nem por 5.\n");
    }

    return 0;
}
