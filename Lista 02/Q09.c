#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi = 3.141592; // Define o valor de pi
    float G = 45.0;
    float R = G * pi / 180.0; // Converte graus para radianos

    printf("Ângulo qualquer em graus: %.2f\n", G); // Exibe o ângulo em graus
    printf("Ângulo qualquer em radianos: %.6f\n", R); // Exibe o ângulo em radianos

    system("pause");

    return 0;
}