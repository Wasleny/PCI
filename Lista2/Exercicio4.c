#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int velocidadeMax, velocidadeMotorista;

    printf("Informe a velocidade máx e a velocidade do motorista: ");
    scanf("%d%d", &velocidadeMax, &velocidadeMotorista);

    velocidadeMotorista = velocidadeMotorista - velocidadeMax;

    if (velocidadeMotorista > 0)
    {
        printf("Valor da multa: R$ %d", 5*velocidadeMotorista);
    }
    else {
        printf("Não há multa");
    }

    return 0;
}
