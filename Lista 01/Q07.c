//Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.

#include <stdio.h>
#include <stdlib.h>

int main(){

    char x;
    
    printf("Digite um valor: ");
    scanf("%c", &x);

    printf("O valor e: %d", x);

    return 0;
}