/*Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da
fórmula dada. Imprima o resultado*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A; // cateto a 
    float B; // cateto b
    float hipotenusa;
    printf("Digite cateto A: ");
    scanf("%f", &A);
    printf("Digite cateto B: ");
    scanf("%f", &B);

    hipotenusa = sqrt(pow(A, 2) + pow(B, 2)); // Calcula a hipotenusa usando o Teorema de Pitágoras

    printf("Valor do cateto a: %.2f\n", A); // Exibe o valor do cateto a
    printf("Valor do cateto b: %.2f\n", B); // Exibe o valor do cateto b
    printf("Valor da hipotenusa: %.2f\n", hipotenusa); // Exibe o valor da hipotenusa

    return 0;
}