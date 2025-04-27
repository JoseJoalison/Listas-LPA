/*Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float prestacao;

    printf("Digite seu salario mensal: ");
    scanf("%f", &salario);

    printf("Digite a prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    if (prestacao >= (salario * 0.20)) // Verifica se a prestação do empréstimo é 20% maior que o salario
    {
        printf("Emprestimo nao concedido.\n");
    }

    else // Caso contrário
    {
        printf("Emprestimo concedido.\n");
    }

    return 0;
}