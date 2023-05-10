// Questão 3
// Desenvolver um programa em C para preencher uma matriz 8x5
// com valores inteiros aleatórios entre 1 e 15 (podem
// haver números repetidos). Encontrar o menor valor contido na
// matriz e escrever o seu conteúdo e a(s) sua(s)posição(ões).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[8][5], i, j, menor;
    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j] = 1 + rand() % 15;

            if (m[i][j] < menor || i + j == 0)
            {
                menor = m[i][j];
            }
        }
    }

    printf("O menor número contido na matriz é: %d\nEle está nas posições:\n", menor);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (m[i][j] == menor)
            {
                printf("Linha: %d Coluna: %d\n", i, j);
            }
        }
    }

    return 0;
}
