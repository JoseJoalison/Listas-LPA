#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Digite dois valores reais:\n");
    scanf("%f %f", &num1, &num2); // Lê os números reais com um único comando de leitura
    
    printf("\nValores lidos na ordem inversa:\n%.2f\n%.2f\n", num2, num1); // Lê os números na ordem inversa
    
    system("pause");

    return 0;
}