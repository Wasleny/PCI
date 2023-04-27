// Exercício 7

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[30], qtdePares = 0, qtdeImpares = 0, i, par, impar;
    srand(time(NULL));

    for (i = 0; i < 30; i++)
    {
        vetor[i] = rand() % (100 - 1 + 1) + 1;
    }

    for (i = 0; i < 30; i++)
    {
        vetor[i] % 2 == 0 ? qtdePares++ : qtdeImpares++;
    }

    int vetorPares[qtdePares], vetorImpares[qtdeImpares];
    par = impar = 0;

    for (i = 0; i < 30; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetorPares[par] = vetor[i];
            par++;
        }
        else
        {
            vetorImpares[impar] = vetor[i];
            impar++;
        }
    }

    for (i = 0; i < qtdePares; i++)
    {
        printf("%d ", vetorPares[i]);
    }
    printf("\nQtde de números pares: %d\n\n", qtdePares);

    for (i = 0; i < qtdeImpares; i++)
    {
        printf("%d ", vetorImpares[i]);
    }
    printf("\nQtde de números impares: %d\n", qtdeImpares);

    return 0;
}
