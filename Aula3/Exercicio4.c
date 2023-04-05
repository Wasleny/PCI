// Exercício 4

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    int operacao;

    printf("Informe dois números: ");
    scanf("%lf%lf", &num1, &num2);

    printf("\nInforme a operação desejada: \n");
    printf("1 - Média entre os números digitados\n");
    printf("2 - Diferença entre os números\n");
    printf("3 - Produtos entre os números digitados\n");
    printf("4 - Divisão do primeiro pelo segundo\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        printf("Média: %lf\n", (num1 + num2) / 2);
        break;

    case 2:
        printf("Diferença: %lf\n", num1 - num2);
        break;

    case 3:
        printf("Produto: %lf\n", num1 * num2);
        break;

    case 4:
        if (num2 == 0) {
            printf("Está divisão não é possível\n");
        } else {
            printf("Divisão: %lf\n", num1 / num2);
        }
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}
