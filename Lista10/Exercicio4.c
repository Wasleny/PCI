// Questão 1

#include <stdio.h>
#include <stdlib.h>

void calculaCedulas(int valor)
{
    int cedulas[7];

    for (int i = 0; i < 7; i++)
    {
        cedulas[i] = 0;
    }

    while (valor > 0)
    {
        if (valor - 100 >= 0)
        {
            cedulas[0]++;
            valor -= 100;
        }
        else if (valor - 50 >= 0)
        {
            cedulas[1]++;
            valor -= 50;
        }
        else if (valor - 20 >= 0)
        {
            cedulas[2]++;
            valor -= 20;
        }
        else if (valor - 10 >= 0)
        {
            cedulas[3]++;
            valor -= 10;
        }
        else if (valor - 5 >= 0)
        {
            cedulas[4]++;
            valor -= 5;
        }
        else if (valor - 2 >= 0)
        {
            cedulas[5]++;
            valor -= 2;
        }
        else
        {
            cedulas[6]++;
            valor -= 1;
        }
    }

    cedulas[0] > 0 ? printf("%d cédula(s) de 100\n", cedulas[0]) : 0;
    cedulas[1] > 0 ? printf("%d cédula(s) de 50\n", cedulas[1]) : 0;
    cedulas[2] > 0 ? printf("%d cédula(s) de 20\n", cedulas[2]) : 0;
    cedulas[3] > 0 ? printf("%d cédula(s) de 10\n", cedulas[3]) : 0;
    cedulas[4] > 0 ? printf("%d cédula(s) de 5\n", cedulas[4]) : 0;
    cedulas[5] > 0 ? printf("%d cédula(s) de 2\n", cedulas[5]) : 0;
    cedulas[6] > 0 ? printf("%d cédula(s) de 1\n", cedulas[6]) : 0;
}

int main()
{
    int valor;

    printf("Informe o valor que deseja sacar: ");
    scanf("%d", &valor);

    calculaCedulas(valor);

    return 0;
}
