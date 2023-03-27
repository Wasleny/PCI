#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double  velocidadeInicial, angulo;

    printf("Informe a velocidade inicial e o ângulo\n");
    scanf("%lf %lf", &velocidadeInicial, &angulo);
    
    angulo = sin(((angulo * M_PI) / 180) * 2) / 9.81;
    velocidadeInicial = pow(velocidadeInicial, 2);

    printf("A distância é: %f", velocidadeInicial * angulo);

    return 0;
}
