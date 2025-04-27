/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um
concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio = 780000.00;
    float primeiro = premio * 0.46; // 46% do prêmio
    float segundo = premio * 0.32; // 32% do prêmio
    float terceiro = premio * 0.22; // Restante do prêmio

    printf("Valor do prêmio: R$ %.2f\n", premio); // Exibe o valor total do prêmio
    printf("Valor recebido pelo primeiro ganhador: R$ %.2f\n", primeiro); // Exibe o valor recebido pelo primeiro ganhador
    printf("Valor recebido pelo segundo ganhador: R$ %.2f\n", segundo); // Exibe o valor recebido pelo segundo ganhador
    printf("Valor recebido pelo terceiro ganhador: R$ %.2f\n", terceiro); // Exibe o valor recebido pelo terceiro ganhador

    return 0;
}