/*Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int Aatual;

    printf("Digite sua idade: "); // Solicita a idade do usuário
    scanf("%d", &idade);
    
    printf("Digite o ano atual: "); // Solicita o ano atual
    scanf("%d", &Aatual);

    int nascimento = Aatual - idade; // Calcula o ano de nascimento

    printf("Você nasceu em %d\n", nascimento); // Exibe o ano de nascimento

    return 0;
}