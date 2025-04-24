#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA = 10.0; // cateto a 
    float valorB = 12.0; // cateto b
    float hipotenusa = sqrt(pow(valorA, 2) + pow(valorB, 2)); // Calcula a hipotenusa usando o Teorema de Pitágoras

    printf("Valor do cateto a: %.2f\n", valorA); // Exibe o valor do cateto a
    printf("Valor do cateto b: %.2f\n", valorB); // Exibe o valor do cateto b
    printf("Valor da hipotenusa: %.2f\n", hipotenusa); // Exibe o valor da hipotenusa

    system("pause");

    return 0;
}