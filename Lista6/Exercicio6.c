// Questão 6
// Desenvolver um programa em C que preencha uma matriz M[10,8],
// com números inteiros aleatórios entre 1 e 10. Exibir a matriz
// gerada. Após, multiplicar os 8 elementos de cada linha da matriz
// pelo menor elemento da referida linha. Armazene o resultado em
// uma matriz S[10,8] e exiba essa matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[10][8], i, j, menor;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            m[i][j] = 1 + rand() % 10;
        }
    }

    printf("MATRIZ M:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ S:\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (m[i][j] < menor || j == 0)
            {
                menor = m[i][j];
            }
        }
        for (j = 0; j < 8; j++)
        {
            printf("%2d ", m[i][j] * menor);
        }
        printf("\n");
    }

    return 0;
}
