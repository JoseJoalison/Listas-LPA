/*Faça um programa que leia um valor inteiro e positivo N, calcule o mostre o
valor E, conforme a fórmula a seguir: (1/1!)+(1/2!)+(1/3!)+(1/4!)...*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Função para calcular o fatorial de um número

int fatorial(n) {
    int i, fat = 1;
    for ( i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int valor, i;
    double E = 0.0;
    
    printf("Digite o valor: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i++) {
        E += 1.0 / fatorial(i);
    }

    printf("O valor de E eh: %.6lf\n", E);

    return 0;
}
