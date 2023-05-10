#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;

    printf("Informe os números: ");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2)
    {
        printf("Não é divisível");
    }
    else
    {
        printf("É divisível");
    }

    return 0;
}
