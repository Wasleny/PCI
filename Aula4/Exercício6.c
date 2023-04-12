// Exercício 6

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, aux;
    num1 = num2 = 1;

    printf("%d\n", num1);
    for (int contador = 0; contador < 15; contador++)
    {
        printf("%d\n", num2);
        aux = num1 + num2;
        num1 = num2;
        num2 = aux;
    }
    
    return 0;
}
