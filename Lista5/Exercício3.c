// Exercício 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int posicaoJogador1 = 1, posicaoJogador2 = 1, dado, numRodada = 1;
    bool naoExisteVencedor = true;

    srand(time(NULL));

    while (naoExisteVencedor)
    {
        printf("..::RODADA %d::..\n", numRodada);
        dado = rand() % 6 + 1;
        posicaoJogador1 += dado;
        if (posicaoJogador1 < 100)
        {
            printf("A quantidade de casas andadas pelo jogador 1 é: %d\n", dado);
            printf("A posição atual do jogador 1 é: %d\n", posicaoJogador1);
        }
        else if (posicaoJogador1 == 100)
        {
            printf("A quantidade de casas andadas pelo jogador 1 é: %d\n", dado);
            printf("A posição atual do jogador 1 é: %d\nJOGADOR 1 É O VENCEDOR", 100);
            naoExisteVencedor = false;
        }
        else
        {
            printf("O dado sorteiou o número: %d, mas esse número ultrapassa o tabuleiro\n", dado);
            dado -= posicaoJogador1 - 100;
            printf("A quantidade de casas que o jogador 1 pode avançar é: %d\n", dado);
            printf("A posição atual do jogador 1 é: %d\nJOGADOR 1 É O VENCEDOR", 100);
            naoExisteVencedor = false;
        }

        if (naoExisteVencedor)
        {
            dado = rand() % (6 - 1 + 1) + 1;
            posicaoJogador2 += dado;
            if (posicaoJogador2 < 100)
            {
                printf("A quantidade de casas andadas pelo jogador 2 é: %d\n", dado);
                printf("A posição atual do jogador 2 é: %d\n\n", posicaoJogador2);
            }
            else if (posicaoJogador2 == 100)
            {
                printf("A quantidade de casas andadas pelo jogador 2 é: %d\n", dado);
                printf("A posição atual do jogador 2 é: %d\nJOGADOR 2 É O VENCEDOR", 100);
                naoExisteVencedor = false;
            }
            else
            {
                printf("O dado sorteiou o número: %d, mas esse número ultrapassa o tabuleiro\n", dado);
                dado -= posicaoJogador2 - 100;
                printf("A quantidade de casas que o jogador 2 pode avançar é: %d\n", dado);
                printf("A posição atual do jogador 2 é: %d\nJOGADOR 2 É O VENCEDOR", 100);
                naoExisteVencedor = false;
            }
        }
        numRodada++;
    }

    return 0;
}
