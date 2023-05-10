// Exercício 6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[30], i, num, achou = 0;
    srand(time(NULL));

    for (i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 100 + 1;
    }

    printf("Informe um número: ");
    scanf("%d", &num);
    for (i = 0; i < 30; i++)
    {
        if (vetor[i] == num)
        {
            printf("O número informado foi encontrado na posição %d\n", i);
            achou = 1;
        }
    }

    if (achou == 0)
    {
        printf("Valor não encontrado.\n");
    }

    for (i = 0; i < 30; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
