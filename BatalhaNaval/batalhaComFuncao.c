#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int informaQtdeBombas(int nivel)
{
    if (nivel == 1)
    {
        return 150;
    }
    else if (nivel == 2)
    {
        return 100;
    }
    else
    {
        return 40;
    }
}

void mostraMatriz(char matrizShow[15][15])
{
    int i, j;

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
}

int testaPosicoes(char matrizNavios[15][15], int inicio, int fim, int isHorizontal, int constante)
{
    while (inicio < fim)
    {
        if (isHorizontal)
        {
            if (matrizNavios[constante][inicio] != '.')
            {
                return 0;
            }
        }
        else
        {
            if (matrizNavios[inicio][constante] != '.')
            {
                return 0;
            }
        }
        inicio++;
    }

    return 1;
}

void preencheMatrizNavios(char (*matrizNavios)[15], int qtdePosicoes, int sentido, char simbolo)
{
    int sortearNum, i, j, isVazio, aux;

    // sentido == 1 -> horizontal | sentido == 0 -> vertical
    if (sentido == 1)
    {
        sortearNum = 1;
        do
        {
            i = rand() % 15;
            j = rand() % (16 - qtdePosicoes);
            aux = j;
            isVazio = 1;

            isVazio = testaPosicoes(matrizNavios, aux, j + qtdePosicoes, sentido, i);

            // somente se todas as posições que serão ocupadas estiverem vazias que o navio é posicionado
            if (isVazio)
            {
                sortearNum = 0;
                aux = j;
                while (aux < j + qtdePosicoes)
                {
                    matrizNavios[i][aux] = simbolo;
                    aux++;
                }
            }
        } while (sortearNum);
    }
    else
    {
        sortearNum = 1;
        do
        {
            i = rand() % (16 - qtdePosicoes);
            j = rand() % 15;
            aux = i;
            isVazio = 1;

            isVazio = testaPosicoes(matrizNavios, aux, i + qtdePosicoes, sentido, j);

            // somente se todas as posições que serão ocupadas estiverem vazias que o navio é posicionado
            if (isVazio)
            {
                sortearNum = 0;
                aux = i;
                while (aux < i + qtdePosicoes)
                {
                    matrizNavios[aux][j] = simbolo;
                    aux++;
                }
            }
        } while (sortearNum);
    }
}

int main()
{
    char matrizShow[15][15], matrizNavios[15][15];
    int i, j, qtdeNavios = 0, continuar = 1, qtdeBombas, qtdeAchado, nivelJogo;
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
        if (qtdeNavios < 1)
        {
            preencheMatrizNavios(matrizNavios, 5, rand() % 2, 'P');
            qtdeNavios++;
        }
        else if (qtdeNavios < 3)
        {
            preencheMatrizNavios(matrizNavios, 4, rand() % 2, 'N');
            qtdeNavios++;
        }
        else if (qtdeNavios < 6)
        {
            preencheMatrizNavios(matrizNavios, 3, rand() % 2, 'C');
            qtdeNavios++;
        }
        else if (qtdeNavios < 10)
        {
            preencheMatrizNavios(matrizNavios, 2, rand() % 2, 'S');
            qtdeNavios++;
        }
        else
        {
            continuar = 0;
        }

    } while (continuar);

    printf("Qual nível de jogo deseja jogar:\n");
    printf("1 - Fácil: 150 bombas\n");
    printf("2 - Médio: 100 bombas\n");
    printf("3 - Difícil: 40 bombas\n");
    scanf("%d", &nivelJogo);

    qtdeBombas = informaQtdeBombas(nivelJogo);

    continuar = 1;
    qtdeAchado = 0;
    do
    {
        system("clear");
        mostraMatriz(matrizShow);

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
        mostraMatriz(matrizNavios);
    }
    else
    {
        printf("Parabéns! Você conseguiu achar todos os navios!");
    }

    return 0;
}
