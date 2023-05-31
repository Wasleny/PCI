// Questão 5

#include <stdio.h>
#include <stdlib.h>

int verificaTriangulo(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && a == c)
        {
            return 1;
        }
        else if (a == b || a == c || b == c)
        {
            return 2;
        }
        return 3;
    }

    return 0;
}

int main()
{
    float a, b, c;
    int tipo;

    printf("Informe os lados: ");
    scanf("%f%f%f", &a, &b, &c);

    tipo = verificaTriangulo(a, b, c);

    switch (tipo)
    {
    case 1:
        printf("Equilátero");
        break;

    case 2:
        printf("Isósceles");
        break;

    case 3:
        printf("Escaleno");
        break;

    default:
        printf("Não é triângulo");
        break;
    }
}
