// Questão 4
// Desenvolver um programa em C para preencher uma matriz 6x8, 
// com valores inteiros aleatórios entre 1 e 30. Exibir a
// matriz gerada. A seguir calcular e apresentar a média dos 
// valores pares contidos na matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[6][8], i, j, qtdePares = 0;
    float mediaPares = 0;
    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            m[i][j] = 1 + rand() % 30;
            
            if(m[i][j] % 2 == 0) {
                mediaPares += m[i][j];
                qtdePares++;
            }
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("Média dos números pares: %.2f", mediaPares / qtdePares);

    return 0;
}
