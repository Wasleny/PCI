// Exercício 5

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codProduto, qtdeConsumida;

    printf("Informe o código do produto e a quantidade consumida: ");
    scanf("%d%d", &codProduto, &qtdeConsumida);

    switch (codProduto)
    {
    case 100:
        printf("Produto: Cachorro quente \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 4.5);
        break;

    case 101:
        printf("Produto: Bauru Simples \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 7.3);
        break;

    case 102:
        printf("Produto: Bauru com ovo \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 8.7);
        break;

    case 103:
        printf("Produto: Hamburguer \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 5.6);
        break;

    case 104:
        printf("Produto: Cheeseburguer \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 7.2);
        break;

    case 105:
        printf("Produto: Refrigerante \n Valor a pagar: R$ %.2f\n", qtdeConsumida * 5.45);
        break;

    default:
        printf("Produto inválido\n");
        break;
    }

    return 0;
}
