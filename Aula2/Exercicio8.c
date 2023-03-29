#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float altura;
    char genero;

    printf("Informe o gênero (F ou M) e a altura(cm): ");
    scanf("%c%f", &genero, &altura);

    if (genero == 'F' || genero == 'f')
    {
        printf("Peso ideal: %.2f", (62.1 * altura) - 44.7);
    } else {
        printf("Peso ideal: %.2f", (72.7  * altura) - 58);
    }

    return 0;
}
