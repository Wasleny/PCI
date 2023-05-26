#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int qtdeTentativas, num, naoAcertou = 1, tentativa;
    srand(time(NULL));

    num = rand() % 51;
    do
    {
        printf("Qual é o número mágico?");
        scanf("%d", &tentativa);
        qtdeTentativas++;

        if (num == tentativa)
        {
            naoAcertou = 0;
        }
        else if (num > tentativa)
        {
            printf("O número mágico é maior\n");
        }
        else
        {
            printf("O número mágico é menor\n");
        }
    } while (naoAcertou && qtdeTentativas < 11);

    if (qtdeTentativas < 4)
    {
        printf("Muito surtudo");
    }
    else if (qtdeTentativas < 7)
    {
        printf("Surtudo");
    }
    else if (qtdeTentativas < 11)
    {
        printf("Normal");
    }
    else
    {
        printf("Tente novamente");
    }
    
    return 0;
}