// Faça um programa que leia um valor do tipo float e depois o imprima usando o operador
//“%d”. Veja o que aconteceu.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float x;
    
    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("O valor e: %d", x);

    return 0;
}