// Exercício 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[25], i;

    vetor[0] = 0;
    vetor[1] = 1;

    for (i = 2; i < 25; i++)
    {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    for (i = 0; i < 25; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    return 0;
}
