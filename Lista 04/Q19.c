/*Faça um programa que calcule e escreva o valor de S: (1/2)+(3/2)+(5/3)+(7/4)... (99/55)*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double S = 0.0;
    int i;

    for (i = 1; i <= 55; i++)
    {
        
        double numerador = 2.0 * i - 1.0;
        double denominador = (double) i;
        S += numerador / denominador;
    }

    printf("O valor de S e: %lf\n", S);

    return 0;
}