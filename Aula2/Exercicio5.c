#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorHora, qtdeHoras;

    printf("Informe a qtde de horas e o valor da hora: ");
    scanf("%f%f", &qtdeHoras, &valorHora);

    if (qtdeHoras <= 40)
    {
        printf("Salário: R$ %.2f", qtdeHoras * valorHora);
    } else if (qtdeHoras <= 60)
    {
        printf("Salário: R$ %.2f", qtdeHoras * valorHora + (qtdeHoras * valorHora *0.5));
    }
    else {
        printf("Salário: R$ %.2f", qtdeHoras * valorHora *2);
    }

    return 0;
}
