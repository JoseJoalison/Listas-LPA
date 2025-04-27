/*Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
correspondente. A área do círculo é A = π* raio2, sendo π = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592; // Define o valor de pi
    float R;

    printf("Digite valor do raio: ");
    scanf("%f", &R);

    float A = pi * pow(R, 2); // Calcula a área do círculo usando a fórmula Área = pi * r²

    printf("Raio do circulo: %.2f\n", R); // Exibe o raio do círculo
    printf("Area do círculo: %.2f\n", A); // Exibe a área do círculo

    return 0;
}