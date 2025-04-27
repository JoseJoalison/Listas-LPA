/*Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor
lido.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, maior, menor, i;

    printf("Digite o 1* numero: ");
    scanf("%d", &numero);
    maior = menor = numero; // Primeiro número define o inicial

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d* numero: ", i);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}
