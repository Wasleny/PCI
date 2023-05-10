// Questão 5
// Desenvolver um programa em C para realizar a multiplicação de duas matrizes.
// Para ser possível multiplicar matrizes, é necessário que o número de colunas
// da primeira matriz seja igual ao número de linhas da segunda matriz. A matriz
// C, resultado da multiplicação A . B, terá como dimensões, o número de linhas
// da primeira matriz e o número de colunas da segunda. Crie uma matriz A6x8 e
// uma matriz B8x7. Preencha essas matrizes com números aleatórios entre 1 e 10.
// Exiba as duas matrizes geradas. Calcular a matriz C, que será o resultado da
// multiplicação de A por B. Exibir a matriz C.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[6][8], b[8][7], c[6][7], i, j, k, aux;

    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            a[i][j] = 1 + rand() % 10;
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            b[i][j] = 1 + rand() % 10;
        }
    }

    printf("MATRIZ A \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMATRIZ B \n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }

    for (k = 0; k < 7; k++)
    {
        for (i = 0; i < 6; i++)
        {
            aux = 0;
            for (j = 0; j < 8; j++)
            {
                aux += a[i][j] * b[j][k];
            }
            c[i][k] = aux;
        }
    }

    printf("\nMATRIZ C \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%2d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
