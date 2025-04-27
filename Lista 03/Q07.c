/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que
o usuário entre com o valor e o estado de destino do produto e o programa retorne
o preço final do produto acrescido do imposto do estado em que ele será vendido.
Se o estado digitado não for válido, mostrará uma mensagem de erro*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    int estado; 
    float taxa;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Escolha o Estado para envio:\n1 - MG\n2 - MS\n3 - RJ\n4 - SP\n");
    scanf("%d", &estado);
    

    if (estado == 1) // MG
    {
        taxa = valor * 0.07; // Valor + taxa de 7%
        printf("Valor da taxacao para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 2) // MS
    {
        taxa = valor * 0.08; // Valor + taxa de 8%
        printf("Valor da taxacao para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 3) // RJ
    {
        taxa = valor * 0.15; // Valor + taxa de 15%
        printf("Valor da taxacao para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else if (estado == 4) // SP
    {
        taxa = valor * 0.12; // Valor + taxa de 12%
        printf("Valor da taxacao para o produto: %.2f\n", taxa);
        printf("Produto com a taxa: %.2f\n", valor+taxa);
    }

    else // Caso contrário
    {
        printf("Erro! Opcao de Estado invalida.\n");
    }

    return 0;
}