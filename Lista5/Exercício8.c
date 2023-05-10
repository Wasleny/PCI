// Exercício 8

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, continuar = 1, aux, auxA, auxB;

    while (continuar)
    {
        printf("Informe dois valores: ");
        scanf("%d%d", &a, &b);

        if (a != 0 && b != 0)
        {
            if (a < b)
            {
                aux = a;
                a = b;
                b = aux;
            }

            auxA = a;
            auxB = b;
            do
            {
                aux = auxA % auxB;

                if (aux == 0)
                {
                    printf("MDC entre %d e %d é %d\n", a, b, auxB);
                }
                else
                {
                    auxA = auxB;
                    auxB = aux;
                }
            } while (aux != 0);
        }
        else
        {
            continuar = 0;
        }
    }

    return 0;
}
