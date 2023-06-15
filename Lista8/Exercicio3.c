// Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c)
{
    return pow(b, 2) - 4 * a * c;
}

void bhaskara(float a, float b, float c, int *amountRaizes, float *x1, float *x2)
{
    float valueDelta;

    valueDelta = delta(a, b, c);

    if (valueDelta < 0)
    {
        *amountRaizes = 0;
    }
    else
    {
        *x1 = (-b + sqrt(valueDelta)) / (2 * a);
        *x2 = (-b - sqrt(valueDelta)) / (2 * a);
        *amountRaizes = valueDelta > 0 ? 2 : 1;
    }
}

int main()
{
    int amountRaizes;
    float a, b, c, x1, x2;

    do
    {
        printf("Informe o coeficiente a: ");
        scanf("%f", &a);
    } while (a == 0);

    printf("Informe os coeficientes b e c: ");
    scanf("%f%f", &b, &c);

    bhaskara(a, b, c, &amountRaizes, &x1, &x2);

    if (amountRaizes == 0) {
        printf("a) Esta equação não possui raízes no conjunto dos números reais\n");
    } else if (amountRaizes == 2) {
        printf("b) Raízes x1 e x2 distintas: %.2f, %.2f\n", x1, x2);
    } else {
        printf("b) Uma única raiz x: %.2f\n", x1);
    }
}
