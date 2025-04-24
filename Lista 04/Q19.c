#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double s = 0.0;

    for (int i = 1; i <= 55; i++)
    {
        double numerador = 2.0 * i - 1.0;
        double denominador = (double) i;
        s += numerador / denominador;
    }

    printf("O valor de S é: %lf\n", s);

    system("pause");

    return 0;
}