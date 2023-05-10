// Questão 2
// Desenvolver um programa em C que uma matriz M de 10x10
// com valores inteiros aleatórios entre 1 e 30. Exibir a
// matriz geradas. Posteriormente este programa irá realizar
// a soma dos elementos da diagonal principal e a soma dos
// elementos da diagonal secundária. Apresentar na tela as duas somas encontradas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[10][10], i, j, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            m[i][j] = 1 + rand() % 30;

            if (i == j)
            {
                somaDiagonalPrincipal += m[i][j];
            }

            if (i + j == 9)
            {
                somaDiagonalSecundaria += m[i][j];
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);

    return 0;
}
