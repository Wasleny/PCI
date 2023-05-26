#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int v[10], i, flag = 1;
    float media = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nInforme um valor: ");
        scanf("%u", &v[i]);
        media += v[i];
    }

    media /= 10;

    for (i = 0; i < 10; i++)
    {
        if (media == v[i])
        {
            printf("\nValor: %d, Posição: %d", v[i], i);
            flag = 0;
        }
    }

    if (flag)
    {
        printf("\nNão existe valor que corresponda à média dos números.\n Média: %f", media);
    }

    return 0;
}