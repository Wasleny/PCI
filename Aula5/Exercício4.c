// Exercício 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[15], menor, maior;
    float media;

    printf("Informe um valor inteiro: ");
    scanf("%d", &vetor[0]);
    menor = maior = media = vetor[0];

    for (int i = 1; i < 15; i++)
    {
        printf("Informe um valor inteiro: ");
        scanf("%d", &vetor[i]);
        media += vetor[i];

        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Média: %f\n", media / 15);
    

    return 0;
}
