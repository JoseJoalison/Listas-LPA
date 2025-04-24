#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;

    num = 9.5;
    
    printf("Valor lido: %d\n", num); // Erro de tipo: %d para float (fica em 0)

    system("pause");

    return 0; 
}