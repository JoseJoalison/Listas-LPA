#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char1;

    printf("Digite um caractere: ");
    scanf("%c", &char1); // Lê um caractere do usuário

    printf("Caractere lido entre aspas duplas: \"%c\" \n", char1); // Exibe o caractere lido entre aspas duplas
  
    system("pause");

    return 0;
}