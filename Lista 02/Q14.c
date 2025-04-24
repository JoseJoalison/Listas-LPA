#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraMaiuscula;
    char letraMinuscula;

    printf("Digite uma letra maiúscula: "); // Solicita uma letra maiúscula ao usuário
    scanf(" %c", &letraMaiuscula);

    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z') { // Verifica se a letra é maiúscula
        letraMinuscula = letraMaiuscula + ('a' - 'A');
        printf("A letra minúscula correspondente é: %c\n", letraMinuscula); // Exibe a letra minúscula correspondente
    } else { // Caso contrário
        printf("A entrada não é uma letra maiúscula válida.\n"); // Exibe mensagem de erro
    }

    system("pause");

    return 0;
}