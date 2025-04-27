/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
conversão é R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592; // Define o valor de pi
    float G, R;

    printf("Digite o angulo em graus: ");
    scanf("%f", &G);

    R = G * pi / 180.0; // Converte graus para radianos

    printf("Angulo qualquer em graus: %.2f\n", G); // Exibe o ângulo em graus
    printf("Angulo qualquer em radianos: %.6f\n", R); // Exibe o ângulo em radianos

    return 0;
}