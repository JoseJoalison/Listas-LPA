#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char1, char2, char3;

    printf("Digite três caracteres: \n");
    scanf("%c %c %c", &char1, &char2, &char3); // Lê três caracteres do usuário

    printf("Os caracteres são: \n%c\n%c\n%c\n", char1, char2, char3); // Exibe os caracteres lidos cada um em uma linha

    system("pause");

    return 0;
}