/*Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num, i;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido. Digite um numero positivo.\n");
        return 0;
    }

    printf("Os divisores de %d sao: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
