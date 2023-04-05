// Exercício 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorTotal;
    int identificador;

    printf("Informe o valor total da compra (R$) e o identificador do comprador: ");
    scanf("%f%d", &valorTotal, &identificador);
    
    switch (identificador)
    {
    case 1:
        printf("Este cliente não possui desconto, o valor da compra é: R$ %.2f\n", valorTotal);
        break;

    case 2:
        printf("Este cliente possui 10%% de desconto, o valor da compra é: R$ %.2f\n", valorTotal * 0.90);
        break;

    case 3:
        printf("Este cliente possui 5%% de desconto, o valor da compra é: R$ %.2f\n", valorTotal * 0.95);
        break;

    default:
        break;
    }

    return 0;
}
