// Questão 1

#include <stdio.h>
#include <stdlib.h>

float media(float a, float b, float c, char tipo)
{
    if (tipo == 'A' || tipo == 'a') {
        return (a + b + c) / 3;
    } else if (tipo == 'P' || tipo == 'p') {
        return (a * 5 + b * 3 + c * 2) / 10;
    } else {
        return 0;
    }
}

int main()
{
    float a, b, c;
    char tipo;

    printf("Informe três números: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Informe o tipo de média:");
    scanf(" %c", &tipo);

    printf("Média: %.2f", media(a, b, c, tipo));

    return 0;
}
