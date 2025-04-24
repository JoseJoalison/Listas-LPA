#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número inteiro: "); // Solicita o primeiro número inteiro
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: "); // Solicita o segundo número inteiro
    scanf("%d", &num2);

    printf("Resultado do OU exclusivo (XOR) (%d ^ %d): %d\n", num1, num2, num1 ^ num2); // Exibe o resultado do OU exclusivo
    printf("Resultado do OU bit a bit (%d | %d): %d\n", num1, num2, num1 | num2); // Exibe o resultado do OU bit a bit
    printf("Resultado do E bit a bit (%d & %d): %d\n", num1, num2, num1 & num2); // Exibe o resultado do E bit a bit

    system("pause");

    return 0;
}