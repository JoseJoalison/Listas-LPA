//Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
//(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x,y,z;
    
    printf("Digite a data: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("A data e: %d \\ %d \\ %d", x, y, z);

    return 0;
}