//Faça um programa que leia um caractere do tipo char e depois o imprima entre aspas
//duplas. Assim, se o caractere lido for a letra A, deverá ser impresso “A”.

#include <stdio.h>
#include <stdlib.h>

int main(){

    char x;

    printf("Digite o caractere: %c", x);
    scanf("%c", &x);

    printf("Cararctere com \": \"%c\"", x);

    return 0;
}