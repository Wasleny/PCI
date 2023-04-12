// Exercício 4

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool isPrimo;

    for (int i = 100; i < 500; i++)
    {
        isPrimo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrimo = false;
            }
        }

        if (isPrimo) {
            printf("%d \n", i);
        }
    }

    return 0;
}
