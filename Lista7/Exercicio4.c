// Questão 4

#include <stdio.h>
#include <stdlib.h>

float calculaPesoIdeal(char genero, float altura)
{
    if (genero == 'm') {
        return 72.7 * altura - 58;
    } else if (genero == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        printf("Gênero inválido\n");
        return 0;
    }
}

int main()
{
    float altura;
    char genero;

    printf("Informe o genero (m ou f): ");
    scanf("%c", &genero);

    printf("Informe a altura (cm): ");
    scanf("%f", &altura);

    printf("Peso ideal: %.2f", calculaPesoIdeal(genero, altura));
}
