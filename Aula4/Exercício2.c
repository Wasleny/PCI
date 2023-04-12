// Exercício 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, menor, maior;
    float media = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &num);

        if (num < menor) {
            menor = num;
        }

        if (num > maior) {
            maior = num;
        }

        media += num;
    }

    printf("O maior número é: %d, o menor número é: %d, a média é: %lf", maior, menor, media/10);
    
    return 0;
}
