#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>

int main()
{
    printf("Contagem regressiva:\n");

    for (int i = 10; i >= 0; i--) // Loop de 10 até 0
    {
        printf("%d\n", i);
        Sleep(500); // Pausa de 500 milissegundos (meio segundo) entre os números
    }

    printf("FIM!\n");

    system("pause");

    return 0;
}

