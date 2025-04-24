#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592; // Define o valor de pi
    float R = 2.0; 
    float Alt = 5.0;
    float V = pi * pow(R, 2) * Alt; // Calcula o volume do cilindro usando a fórmula V = pi * r² * altura

    printf("Raio do cilindro: %.2f\n", R); // Exibe o raio do cilindro
    printf("Altura do cilindro: %.2f\n", Alt); // Exibe a altura do cilindro
    printf("Volume do cilindro: %.2f\n", V); // Exibe o volume do cilindro

    system("pause");

    return 0;
}