/**Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
calculadas como
em que ∆ = b 2 – 4 * a * c e ax 2 + bx + c = 0 representa uma equação do segundo grau.
A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não
é equação de segundo grau”. Do contrário, imprima:
• Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
• Se ∆ > 0, existem duas raízes reais. Imprima as raízes. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, delta, r1, r2;

    printf("Digite os coeficientes da equacao do segundo grau (a, b e c):\n");
    
    printf("a: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);

    if (a == 0) // Verifica se a é zero
    {
        printf("Nao e equacao de segundo grau.\n");
    }

    else // Se a não for zero, calcula o delta
    {
        delta = b * b - 4 * a * c; // Cálculo do delta

        if (delta < 0) // Verifica se delta é negativo
        {
            printf("Nao existe raiz real (delta < 0).\n");
        }
        else if (delta == 0) // Verifica se delta é zero
        {
            r1 = -b / (2 * a); // Cálculo da raiz única
            printf("Raiz unica: x = %.2f\n", r1);
        }
        else // Se delta for positivo, calcula as duas raízes reais
        {
            r1 = (-b + sqrt(delta)) / (2 * a); // Cálculo da primeira raiz
            r2 = (-b - sqrt(delta)) / (2 * a); // Cálculo da segunda raiz
            printf("Duas raizes reais:\n");
            
            printf("x1 = %.2f\n", r1);
            printf("x2 = %.2f\n", r2);
        }
    }

    return 0;
}
