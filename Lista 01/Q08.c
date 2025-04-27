//Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa
//em que eles foram lidos.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y;
    
    printf("Digite dois valores: ");
    scanf("%d %d", &x, &y);

    printf("Os valores sao: %d %d", y, x);

    return 0;
}