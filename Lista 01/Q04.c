#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    num = 20;
    
    printf("Valor lido: %f\n", num); // Erro de tipo: %f para inteiro (fica em 0.000000)

    system("pause");

    return 0; 
}