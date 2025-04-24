#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int numero; // Número inteiro não negativo

    printf("Digite um número inteiro não negativo: "); // Solicita um número inteiro não negativo
    scanf("%u", &numero); 

    printf("Numero original (decimal): %u\n", numero); // Exibe o número original
    printf("Complemento bit a bit (decimal): %u\n", ~numero); // Exibe o complemento bit a bit do número

    system("pause");

    return 0;
}