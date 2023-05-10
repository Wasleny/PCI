// Questão 1
// Desenvolver um programa em C que preencha duas matrizes M e N,
// ambas de 8x8 com valores inteiros aleatórios entre 1 e 50.
// Exibir as duas matrizes geradas. Posteriormente este programa
// irá realizar a soma das duas matrizes e armazenar
// o resultado em uma matriz S. Exiba esta matriz S.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[8][8], n[8][8], i, j;
    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            m[i][j] = 1 + rand() % 50;
            n[i][j] = 1 + rand() % 50;
        }
    }

    printf("Matriz M:\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz N:\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", n[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz S:\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", m[i][j] + n[i][j]);
        }
        printf("\n");
    }

    return 0;
}
