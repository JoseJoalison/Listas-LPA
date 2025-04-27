/*Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O
volume de um cilindro circular é calculado por meio da seguinte fórmula:
em que π = 3.141592*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592; // Define o valor de pi
    float R = 2.0; 
    float h;

    printf("Digite altura do cilindro: ");
    scanf("%f", &h);

    float V = pi * pow(R, 2) * h; // Calcula o volume do cilindro usando a fórmula V = pi * r² * altura

    printf("Raio do cilindro: %.2f\n", R); // Exibe o raio do cilindro
    printf("Altura do cilindro: %.2f\n", h); // Exibe a altura do cilindro
    printf("Volume do cilindro: %.2f\n", V); // Exibe o volume do cilindro

    return 0;
}