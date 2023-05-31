// Questão 2

#include <stdio.h>
#include <stdlib.h>

int isPrimo(unsigned int num)
{
    int i = 2;

    while (i < num)
    {
        if (num % i == 0)
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    int num, primo;

    printf("Informe um número: ");
    scanf("%d", &num);
    
    primo = isPrimo(num);
    primo ? printf("O número é primo") : printf("O número não é primo");

    return 0;
}
