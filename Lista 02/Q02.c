#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i = 10.5;
    const int quinta_parte = 5;
    
    printf("Quinta parte de %.2f:\n%.2f\n", i, i / quinta_parte); // Exibe a quinta parte do número real

    system("pause");

    return 0;
}