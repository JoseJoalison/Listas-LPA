#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1); // Lê o primeiro número inteiro

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2); // Lê o segundo número inteiro

    printf("\nNúmeros na ordem inversa de leitura:\n"); // Lê os números na ordem inversa
    printf("%d\n", num2);
    printf("%d\n", num1);

    system("pause");

    return 0;
}