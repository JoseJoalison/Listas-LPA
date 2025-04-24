#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, centenas, dezenas, unidades, numero_invertido;

    printf("Digite um número inteiro positivo de três digitos: "); // Solicita um número inteiro positivo de três dígitos
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 999) { // Verifica se o número está entre 100 e 999
        centenas = numero / 100; // Calcula a centena
        dezenas = (numero % 100) / 10; // Calcula a dezena
        unidades = numero % 10; // Calcula a unidade
        numero_invertido = (unidades * 100) + (dezenas * 10) + centenas; // Inverte o número

    printf("Número invertido = %d\n", numero_invertido); // Exibe o número invertido
    } else { // Caso contrário

    printf("Número inválido. Por favor, digite um numero de três digitos.\n"); // Exibe mensagem de erro
    }

    system("pause");

    return 0;
}