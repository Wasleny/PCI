#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, z;

    printf("Informe os números: ");
    scanf("%d%d%d", &x, &y, &z);

    if (x + y > z)
    {
        printf("A soma é maior");
    }
    else if (x + y < z)
    {
        printf("A soma é menor");
    }
    else
    {
        printf("A soma é igual");
    }

    return 0;
}
