#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número inteiro: "); // Solicita o primeiro número inteiro
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro (deslocamento): "); // Solicita o segundo número inteiro
    scanf("%d", &num2);

    printf("Deslocamento a esquerda (%d << %d): %d\n", num1, num2, num1 << num2); // Exibe o deslocamento a esquerda
    printf("Deslocamento a direita (%d >> %d): %d\n", num1, num2, num1 >> num2); // Exibe o deslocamento a direita

    system("pause");

    return 0;
}