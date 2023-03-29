#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valorApostado1, valorApostado2, valorJogo1, valorJogo2, pontos = 0;
    printf("Informe o placar apostado: ");
    scanf("%d%d", &valorApostado1, &valorApostado2);
    printf("Informe o placar do jogo: ");
    scanf("%d%d", &valorJogo1, &valorJogo2);

    if (valorApostado1 == valorJogo1)
    {
        pontos += 5;
    }

    if (valorApostado2 == valorJogo2)
    {
        pontos += 5;
    }

    if ((valorApostado1 > valorApostado2 && valorJogo1 > valorJogo2) || (valorApostado1 < valorApostado2 && valorJogo1 < valorJogo2))
    {
        pontos += 10;
    }

    printf("Pontos do apostador: %d", pontos);

    return 0;
}
