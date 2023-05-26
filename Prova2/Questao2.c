#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[10][10], i, j, qtdePares = 0, qtdeImpares = 0;
    float mediaColunasPares = 0, mediaLinhasImpares = 0;
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            m[i][j] = rand() % 51 + 1;
            i % 2 != 0 ? qtdeImpares++ : qtdePares++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i % 2 != 0)
            {
                mediaLinhasImpares += m[i][j];
            }
            if (j % 2 == 0)
            {
                mediaColunasPares += m[i][j];
            }
        }
    }

    printf("%f\n", mediaColunasPares);
    printf("%f\n", mediaLinhasImpares);

    mediaColunasPares /= qtdePares;
    mediaLinhasImpares /= qtdeImpares;

    printf("%f\t%d\n", mediaColunasPares, qtdePares);
    printf("%f\t%d\n", mediaLinhasImpares, qtdeImpares);
    
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Diferença: %.2f ", mediaColunasPares - mediaLinhasImpares);
    
    return 0;
}