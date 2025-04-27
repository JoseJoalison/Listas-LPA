//Faça um programa que leia um número inteiro e depois o imprima usando o operador
//“%f”. Veja o que aconteceu

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x;
    
    printf("Digite um valor: ");
    scanf("%d", &x);

    printf("O valor e: %f", x);

    return 0;
}