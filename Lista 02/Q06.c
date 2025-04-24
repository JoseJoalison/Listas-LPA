#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K = 856.40;
    const int C = 36;
    float M = K / C; 

    printf("Velocidade de cruzeiro de um avião: %.2f km/h\n", K); // Exibe a velocidade de cruzeiro do avião em Km/h

    printf("Velocidade de cruzeiro de um avião em M/s: %.2f m/s\n", M); // Exibe a velocidade de cruzeiro do avião em M/s

    system("pause");

    return 0;
}