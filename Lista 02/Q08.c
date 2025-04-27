/*eia um valor que represente uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo
F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C = 22.0;
    const float F = C * (9.0 / 5.0) + 32.0; // Fórmula de conversão de Celsius para Fahrenheit

    printf("Temperatura em Celsius: %.2f\n", C); // Exibe a temperatura em Celsius
    printf("Temperatura em Fahrenheit: %.2f\n", F); // Exibe a temperatura em Fahrenheit

    return 0;
}