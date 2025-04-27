/*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em
km/h e M em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V, M;
    const int K = 36;

    printf("Digite o valor em reais: ");
    scanf("%f", &V);

    M = V / K;

    printf("Velocidade em km: %.2f km/h\n", V); // Exibe a velocidade de cruzeiro do avião em Km/h

    printf("Velocidade em M/s: %.2f m/s\n", M); // Exibe a velocidade de cruzeiro do avião em M/s

    return 0;
}