/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int contador = 0;
    int numero = 1;

    printf("Os cinco primeiros multiplos de 3 maiores que 0 sao:\n");

    while (contador < 5) // Enquanto o contador for menor que 5
    {
        if (numero % 3 == 0) // Verifica se o número é múltiplo de 3
        {
            printf("%d\n", numero);
            contador++; // Incrementa o contador se o número for múltiplo de 3
        }
        numero++; // Incrementa o número para verificar o próximo
    }

    return 0;
}
