#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;

    printf("Informe os números: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Maior número %d", num1);
    }
    else if (num2 > num1)
    {
        printf("Maior número: %d", num2);
    }
    else
    {
        printf("São iguais");
    }

    return 0;
}
