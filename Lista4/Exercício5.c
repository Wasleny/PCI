// Exercício 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, somaImpares, somaPares;
    somaImpares = somaPares = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            somaPares += num;
        } else {
            somaImpares += num;
        }
    }

    printf("Soma pares: %d \nSoma ímpares: %d", somaPares, somaImpares);

    return 0;
}
