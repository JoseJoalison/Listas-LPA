#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cotacao = 5.84; 
    float valor_dolar = 100; 
    float valor_real = valor_dolar * cotacao; // Calcula o valor em reais

    printf("Cotação do dólar: %.2f\n", cotacao); // Exibe a cotação do dólar
    printf("Valor em dólar: %.2f\n", valor_dolar); // Exibe o valor em dólares
    printf("Valor em reais: %.2f\n", valor_real); // Exibe o valor em reais
        
    system("pause");

    return 0;
}