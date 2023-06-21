// Questão 2

#include <stdio.h>
#include <stdlib.h>

void showOpcoesPagamento()
{
    system("clear");

    printf("-----------------------------------------------\n");
    printf("|\033[36m Opções:                                     \033[0m|\n");
    printf("|                                             |\n");
    printf("| \033[36m1 -\033[0m A vista com 10%% de desconto             |\n");
    printf("| \033[36m2 -\033[0m Em 2x (preço etiqueta)                  |\n");
    printf("| \033[36m3 -\033[0m De 3x a 10x com 3%% de juros por mês     |\n");
    printf("-----------------------------------------------\n\n");
    printf("\033[36mOpção Escolhida: \033[0m");
}

void calculaValorAVista(float valor)
{
    printf("O valor pago será R$%.2f", valor * 0.9);
}

void calculaValorEmDuasVezes(float valor)
{
    printf("A parcela 1 será R$%.2f", valor / 2);
    printf("A parcela 2 será R$%.2f", valor / 2);
}

void calculaValorParcelado(float valor)
{
    int qtdeParcelas, contadorParcela = 1;
    float totalReal = 0;

    do
    {
        printf("Informe a quantidade de parcelas desejadas: ");
        scanf("%d", &qtdeParcelas);
    } while (qtdeParcelas < 3 || qtdeParcelas > 10);

    do
    {
        printf("A parcela %d será R$%.2f\n", contadorParcela, valor / qtdeParcelas);
        totalReal+= valor / qtdeParcelas;
        contadorParcela++;
        valor -= valor / qtdeParcelas;
        valor *= 1.03;
        qtdeParcelas--;
    } while (qtdeParcelas > 0);

    printf("O total será R$%.2f\n", totalReal);
}

int main()
{
    float totalGasto;
    int opcao, flag;

    printf("Informe o total gasto: ");
    scanf("%f", &totalGasto);

    showOpcoesPagamento();
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1:
            calculaValorAVista(totalGasto);
            flag = 0;
            break;

        case 2:
            calculaValorEmDuasVezes(totalGasto);
            flag = 0;
            break;

        case 3:
            if (totalGasto > 100)
            {
                calculaValorParcelado(totalGasto);
                flag = 0;
            }
            else
            {
                printf("O total gasto não pode ser parcelado, pois é menor que R$100,00, selecione outra opção");
            }

            break;

        default:
            break;
        }
    } while (flag);

    return 0;
}
