// Exercício 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 10; i < 300; i++)
    {
        if (i % 4 == 0)
        {
            printf("O número %d é divisível por 4\n", i);
        }   
    }

    return 0;
}
