#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, velocidade;

    printf("Informe a velocidade (km/h): ");
    scanf("%f", &velocidade);
    printf("Informe o tempo (h): ");
    scanf("%f", &tempo);
    printf("Consumo: %.2f", (velocidade * tempo) /15);

    return 0;
}
