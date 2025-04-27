// Faça um programa que leia um valor do tipo double e depois o imprima na forma de
//notação científica.

#include <stdio.h>
#include <stdlib.h>

int main(){

    double x;
    
    printf("Digite um valor: ");
    scanf("%lf", &x);

    printf("O valor e: %E", x);

    return 0;
}