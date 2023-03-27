#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tamanho;

    printf("Informe o tamanho do comôdo: ");
    scanf("%f", &tamanho);
    tamanho *= 15;
    tamanho /= 60;

    printf("\nQuantidade de lâmpadas de 60w necessárias: %.0f", ceil(tamanho));

    return 0;
}
