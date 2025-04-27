/*Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida,
calcule e mostre o número formado pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, centenas, dezenas, unidades, numero_invertido;

    printf("Digite um numero inteiro positivo de tres digitos: "); // Solicita um número inteiro positivo de três dígitos
    scanf("%d", &numero);
    
        centenas = numero / 100; // Calcula a centena
        dezenas = (numero % 100) / 10; // Calcula a dezena
        unidades = numero % 10; // Calcula a unidade
        numero_invertido = (unidades * 100) + (dezenas * 10) + centenas; // Inverte o número

    printf("Numero invertido = %d\n", numero_invertido); // Exibe o número invertido

    return 0;
}