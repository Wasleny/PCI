// Exercício 3

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codProduto;

    printf("Informe o código do produto: ");
    scanf("%d", &codProduto);

    switch (codProduto)
    {
    case 1:
        printf("Alimento não-perecível\n");
        break;

    case 2:
    case 3:
    case 4:
        printf("Alimento perecível\n");
        break;

    case 5:
    case 6:
        printf("Vestuário\n");
        break;

    case 7:
        printf("Higiene Pessoal\n");
        break;

    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        printf("Limpeza e Utensílios Domésticos\n");
        break;
        
    default:
        printf("Código inválido\n");
        break;
    }

    return 0;
}
