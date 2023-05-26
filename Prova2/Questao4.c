#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[8][8], posicoesDisponiveis = 64, i, j, qtdeTipos[7], tipo;
    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            m[i][j] = 9;
        }
    }

    for (i = 0; i < 7; i++)
    {
        qtdeTipos[i] = 0;
    }

    do
    {
        i = rand() % 8;
        j = rand() % 8;
        tipo = rand() % 7;

        if (m[i][j] == 9)
        {
            m[i][j] = tipo;
            posicoesDisponiveis--;
            switch (tipo)
            {
            case 0:
                qtdeTipos[0]++;
                break;
            case 1:
                qtdeTipos[1]++;
                break;
            case 2:
                qtdeTipos[2]++;
                break;
            case 3:
                qtdeTipos[3]++;
                break;
            case 4:
                qtdeTipos[4]++;
                break;

            case 5:
                qtdeTipos[5]++;
                break;
            case 6:
                qtdeTipos[6]++;
                break;
            default:
            }
        }
    } while (posicoesDisponiveis > 0);

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Qtde ausencia %d \n", qtdeTipos[0]);
    printf("Qtde peao %d \n", qtdeTipos[1]);
    printf("Qtde cavalo %d \n", qtdeTipos[2]);
    printf("Qtde torres %d \n", qtdeTipos[3]);
    printf("Qtde bispos %d \n", qtdeTipos[4]);
    printf("Qtde reis %d \n", qtdeTipos[5]);
    printf("Qtde rainhas %d \n", qtdeTipos[6]);

    return 0;
}