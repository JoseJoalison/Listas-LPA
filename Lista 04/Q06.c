#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;

    printf("Contagem regressiva:\n");

    for (i = 10; i >= 0; i--) // Loop de 10 até 0
    {
        printf("%d\n", i);
    }

    printf("FIM!\n");

    system("pause");

    return 0;
}

