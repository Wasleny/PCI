// Exercício 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, z, aux;

    printf("Informe um número para a: ");
    scanf("%d", &a);

    do
    {
        printf("Informe um número para b: ");
        scanf("%d", &b);
    } while (b <= a);

    do
    {
        printf("Informe um número para z: ");
        scanf("%d", &z);
    } while (z < b || z > b * 2);

    while (a <= b)
    {
        aux = a;
        while (aux <= b)
        {
            if (aux + a == z)
            {
                printf("Os numeros: %d e %d somados dão %d\n", a, aux, z);
            }
            aux++;
        }
        a++;
    }

    return 0;
}
