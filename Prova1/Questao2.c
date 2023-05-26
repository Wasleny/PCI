#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;
    printf("Informe 3 valores: ");
    scanf("%f%f%f", &x, &y, &z);

    if (x < y + z && y < x + z && z < y + x)
    {
        if (x == y && x == z)
        {
            printf("Os valores formam um triângulo equilátero");
        }
        else if (x == y || x == z || y == z)
        {
            printf("Os valores formam um triângulo isósceles");
        }
        else
        {
            printf("Os valores formam um triângulo escaleno");
        }
    }
    else
    {
        printf("Os valores informados não são lados de um triângulo.");
    }
    
    return 0;
}