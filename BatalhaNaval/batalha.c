#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char matrizShow[15][15], matrizNavios[15][15], nivelJogo;
    int i, j, qtdeNavios = 0, continuar = 1, sentido, sortearNum, qtdeBombas, qtdeAchado;
    srand(time(NULL));

    // inicializa as matrizes
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 15; j++)
        {
            matrizShow[i][j] = matrizNavios[i][j] = '.';
        }
    }

    // sorteio das posições dos navios
    do
    {
        sentido = rand() % 2;
        if (qtdeNavios < 1)
        {
            // se sentido = 1 -> horizontal, se sentido = 0 -> vertical
            if (sentido == 1)
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 15;
                    j = rand() % 11;

                    // somente se todas as posições que serão ocupadas estiverem vazias que o navio é posicionado
                    if (matrizNavios[i][j] == '.' && matrizNavios[i][j + 1] == '.' && matrizNavios[i][j + 2] == '.' && matrizNavios[i][j + 3] == '.' && matrizNavios[i][j + 4] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i][j + 1] = matrizNavios[i][j + 2] = matrizNavios[i][j + 3] = matrizNavios[i][j + 4] = 'P';
                    }
                } while (sortearNum);
            }
            else
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 11;
                    j = rand() % 15;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i + 1][j] == '.' && matrizNavios[i + 2][j] == '.' && matrizNavios[i + 3][j] == '.' && matrizNavios[i + 4][j] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i + 1][j] = matrizNavios[i + 2][j] = matrizNavios[i + 3][j] = matrizNavios[i + 4][j] = 'P';
                    }
                } while (sortearNum);
            }

            qtdeNavios++;
        }
        else if (qtdeNavios < 3)
        {
            if (sentido == 1)
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 15;
                    j = rand() % 12;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i][j + 1] == '.' && matrizNavios[i][j + 2] == '.' && matrizNavios[i][j + 3] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i][j + 1] = matrizNavios[i][j + 2] = matrizNavios[i][j + 3] = 'N';
                    }
                } while (sortearNum);
            }
            else
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 12;
                    j = rand() % 15;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i + 1][j] == '.' && matrizNavios[i + 2][j] == '.' && matrizNavios[i + 3][j] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i + 1][j] = matrizNavios[i + 2][j] = matrizNavios[i + 3][j] = 'N';
                    }
                } while (sortearNum);
            }

            qtdeNavios++;
        }
        else if (qtdeNavios < 6)
        {
            if (sentido == 1)
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 15;
                    j = rand() % 13;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i][j + 1] == '.' && matrizNavios[i][j + 2] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i][j + 1] = matrizNavios[i][j + 2] = 'C';
                    }
                } while (sortearNum);
            }
            else
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 13;
                    j = rand() % 15;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i + 1][j] == '.' && matrizNavios[i + 2][j] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i + 1][j] = matrizNavios[i + 2][j] = 'C';
                    }
                } while (sortearNum);
            }

            qtdeNavios++;
        }
        else if (qtdeNavios < 10)
        {
            if (sentido == 1)
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 15;
                    j = rand() % 14;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i][j + 1] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i][j + 1] = 'S';
                    }
                } while (sortearNum);
            }
            else
            {
                sortearNum = 1;
                do
                {
                    i = rand() % 14;
                    j = rand() % 15;

                    if (matrizNavios[i][j] == '.' && matrizNavios[i + 1][j] == '.')
                    {
                        sortearNum = 0;
                        matrizNavios[i][j] = matrizNavios[i + 1][j] = 'S';
                    }
                } while (sortearNum);
            }

            qtdeNavios++;
        }
        else
        {
            continuar = 0;
        }

    } while (continuar);

    printf("Qual nível de jogo deseja jogar:\n");
    printf("Fácil: 150 bombas -> f\n");
    printf("Médio: 100 bombas -> m\n");
    printf("Difícil: 40 bombas -> d\n");
    scanf("%c", &nivelJogo);

    if (nivelJogo == 'd')
    {
        qtdeBombas = 40;
    }
    else if (nivelJogo == 'm')
    {
        qtdeBombas = 100;
    }
    else
    {
        qtdeBombas = 150;
    }
    
    continuar = 1;
    qtdeAchado = 0;
    do
    {
        system("clear");
        printf("%2c", 'x');
        for (i = 0; i < 15; i++)
        {
            printf("%2d ", i + 1);
        }
        printf("\n");

        for (i = 0; i < 15; i++)
        {
            printf("%2d", i + 1);
            for (j = 0; j < 15; j++)
            {
                printf("%2c ", matrizShow[i][j]);
            }
            printf("\n");
        }

        printf("\nVocê ainda possui %d bombas\n", qtdeBombas);
        printf("\nInforme a linha e a coluna que quer jogar a bomba:\n");
        scanf("%d%d", &i, &j);

        if (matrizShow[i - 1][j - 1] == '.')
        {
            if (matrizNavios[i - 1][j - 1] != '.')
            {
                matrizShow[i - 1][j - 1] = matrizNavios[i - 1][j - 1];
                qtdeAchado++;
            }
            else
            {
                matrizShow[i - 1][j - 1] = '=';
            }
            qtdeBombas--;
        }

        if (qtdeAchado == 30)
        {
            continuar = 0;
        }
    } while (continuar && qtdeBombas > 0);

    if (qtdeBombas == 0)
    {
        printf("Você perdeu!\n\n");

        printf("Posições do navio:\n");
        printf("%2c", 'x');
        for (i = 0; i < 15; i++)
        {
            printf("%2d ", i + 1);
        }
        printf("\n");

        for (i = 0; i < 15; i++)
        {
            printf("%2d", i + 1);
            for (j = 0; j < 15; j++)
            {
                printf("%2c ", matrizNavios[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Parabéns! Você conseguiu achar todos os navios!");
    }
    return 0;
}
