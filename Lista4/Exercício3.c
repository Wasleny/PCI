// Exercício 3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    bool isPrimo = true;

    printf("Informe um número: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) {
            isPrimo = false;
        }
    }

    isPrimo ? printf("É primo\n") : printf("Não é primo\n");
    
    return 0;
}
