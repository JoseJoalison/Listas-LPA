#include <stdio.h>
#include <stdlib.h>

int main()
{
    float premio = 780000.00;
    float primeiro_ganhador = premio * 0.46; // 46% do prêmio
    float segundo_ganhador = premio * 0.32; // 32% do prêmio
    float terceiro_ganhador = premio * 0.22; // Restante do prêmio

    printf("Valor do prêmio: R$ %.2f\n", premio); // Exibe o valor total do prêmio
    printf("Valor recebido pelo primeiro ganhador: R$ %.2f\n", primeiro_ganhador); // Exibe o valor recebido pelo primeiro ganhador
    printf("Valor recebido pelo segundo ganhador: R$ %.2f\n", segundo_ganhador); // Exibe o valor recebido pelo segundo ganhador
    printf("Valor recebido pelo terceiro ganhador: R$ %.2f\n", terceiro_ganhador); // Exibe o valor recebido pelo terceiro ganhador

    system("pause");

    return 0;
}