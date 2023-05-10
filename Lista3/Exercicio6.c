// Exercício 6

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtdeLados, tamanhoLado;

    printf("Informe a quantidade de lados e o tamanho do lado: ");
    scanf("%d%d", &qtdeLados, &tamanhoLado);

    switch (qtdeLados)
    {
    case 3:
        printf("Área do triângulo: %.2f\n", pow(tamanhoLado, 2)*1.73/4);
        break;

    case 4:
        printf("Área do quadrado: %.2f\n", pow(tamanhoLado, 2));
        break;

    case 6:
        printf("Área do hexágono: %.2f\n", pow(tamanhoLado, 2)*6*1.73/4);
        break;

    default:
        printf("Não sei calcular a área. :(\n");
        break;
    }

    return 0;
}
