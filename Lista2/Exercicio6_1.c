    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    int main()
    {
        int valorApostado1, valorApostado2, valorJogo1, valorJogo2;
        scanf("%d%d", &valorApostado1, &valorApostado2);
        scanf("%d%d", &valorJogo1, &valorJogo2);

        if (valorApostado1 == valorJogo1 && valorApostado2 == valorJogo2)
        {
            printf("Pontos: %d", 20);
        } else if (((valorApostado1 > valorApostado2 && valorJogo1 > valorJogo2) || (valorApostado1 < valorApostado2 && valorJogo1 < valorJogo2)) && valorApostado1 == valorJogo1)
        {
            printf("Pontos: %d", 15);
        } else if ((valorApostado1 > valorApostado2 && valorJogo1 > valorJogo2) || (valorApostado1 < valorApostado2 && valorJogo1 < valorJogo2))
        {
            printf("Pontos: %d", 10);
        }else if (valorApostado1 == valorJogo1 || valorApostado2 == valorJogo2)
        {
            printf("Pontos: %d", 5);
        }
        else {
            printf("Pontos: %d", 0);
        }

        return 0;
    }
