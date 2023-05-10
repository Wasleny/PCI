#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, altura, imc;

    printf("Informe o peso(kg) e a altura(cm): ");
    scanf("%f%f", &peso, &altura);
    imc = peso / (pow(altura, 2));

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    } else if (imc < 25)
    {
        printf("Peso normal");
    } else if (imc < 30)
    {
        printf("Acima do peso");
    }
    else {
        printf("Obeso");
    }

    return 0;
}
