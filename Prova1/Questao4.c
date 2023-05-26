#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Informe o salário: ");
    scanf("%f", &salario);

    if (salario <= 1700)
    {
        printf("Salário recalculado: %.2f", salario + salario * 0.2);
    }
    else if (salario <= 2800)
    {
        printf("Salário recalculado: %.2f", salario + salario * 0.15);
    }
    else if (salario <= 4500)
    {
        printf("Salário recalculado: %.2f", salario + salario * 0.1);
    }
    else
    {
        printf("Salário recalculado: %.2f", salario + salario * 0.05);
    }
    
    return 0;
}