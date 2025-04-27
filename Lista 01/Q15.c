//Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprima-as
//de três maneiras diferentes: separadas por espaços, por uma tabulação horizontal e uma
//em cada linha. Use um único comando printf() para cada operação de escrita das três
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    char x;
    int y;
    float z;

    printf("Digite os caracteres: ");
    scanf("%c %d %f", &x, &y, &z);

    printf("Caracteres por espaco:%c %d %f\n", x, y, z);
    printf("Caracteres por tabulacao:%c\t%d\t%f\t\n", x, y, z);
    printf("Caracteres por linha:\n%c\n%d\n%f\n", x, y, z);

    return 0;
}