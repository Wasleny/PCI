#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int num, contador = 0;
    float media = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Informe um número:");
        scanf("%u", &num);
        if (num % 2 == 0)
        {
            contador++;
            media += num;
        }
    }

    printf("Média dos números pares informados: %f", media / contador);
    
    return 0;
}