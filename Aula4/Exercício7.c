// Exercício 7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma;
    for (int i = 1; i < 1000; i++)
    {
        soma = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0) {
                soma += j;
            }
        }

        if (soma == i)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
