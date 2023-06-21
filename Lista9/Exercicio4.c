// Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Gado
{
    int cod, mesNascimento, anoNascimento, abate;
    float qtdeLitrosLeiteSemanal, qtdeQuilosAlimentoSemanal;
};

void showLogo()
{
    system("clear");

    printf("+---------------------------------------------+\n");
    printf("|\033[35m                WASLENY'S FARM               \033[0m|\n");
    printf("+---------------------------------------------+\n\n");
}

void showOptions()
{
    showLogo();
    printf("-----------------------------------------------\n");
    printf("|\033[36m Opções:                                     \033[0m|\n");
    printf("|                                             |\n");
    printf("| \033[36m1 -\033[0m Adicionar gado                          |\n");
    printf("| \033[36m2 -\033[0m Total de leite semanal                  |\n");
    printf("| \033[36m3 -\033[0m Total de alimento consumido semanal     |\n");
    printf("| \033[36m4 -\033[0m Total de leite semanal após abate       |\n");
    printf("| \033[36m5 -\033[0m Total de alimento consumido após abate  |\n");
    printf("| \033[36m6 -\033[0m Total de cabeças que vão para o abate   |\n");
    printf("|                                             |\n");
    printf("| \033[36ms -\033[0m Sair                                    |\n");
    printf("-----------------------------------------------\n\n");
    printf("\033[36mOpção Escolhida: \033[0m");
}

void backMenu()
{
    printf("\n\n");
    printf("Pressione Enter para sair\n");
    getchar();
    getchar();
}

int calculaIdade(int mesNascimento, int anoNascimento)
{
    int mesAtual, anoAtual;

    printf("Mês atual (número): ");
    scanf("%d", &mesAtual);

    printf("Ano atual:");
    scanf("%d", &anoAtual);

    return mesNascimento < mesAtual ? anoAtual - anoNascimento - 1 < 5 : anoAtual - anoNascimento < 5;
}

void createGado(struct Gado *mimosa)
{

    printf("Código: ");
    scanf("%d", &mimosa->cod);

    printf("Qtde de Leite Produzido Semanal: ");
    scanf("%f", &mimosa->qtdeLitrosLeiteSemanal);

    printf("Qtde de Alimento Consumido Semanal: ");
    scanf("%f", &mimosa->qtdeQuilosAlimentoSemanal);

    printf("Mês de nascimento (número): ");
    scanf("%d", &mimosa->mesNascimento);

    printf("Ano de nascimento (número):");
    scanf("%d", &mimosa->anoNascimento);

    if (!calculaIdade(mimosa->mesNascimento, mimosa->anoNascimento) || mimosa->qtdeLitrosLeiteSemanal < 40 || (mimosa->qtdeLitrosLeiteSemanal >= 50 && mimosa->qtdeLitrosLeiteSemanal <= 70 && mimosa->qtdeQuilosAlimentoSemanal > 80))
    {
        mimosa->abate = 1;
    }
    else
    {
        mimosa->abate = 0;
    }

    printf("\n\n\033[4mMIMOSA CADASTRADA COM SUCESSO.\033[0m");
    backMenu();
}

void getTotalMilkProducedWeekly(struct Gado mimosas[], int countMimosas)
{
    float totalMilk = 0;

    for (int i = 0; i < countMimosas; i++)
    {
        totalMilk += mimosas[i].qtdeLitrosLeiteSemanal;
    }

    printf("\n\nTOTAL DE LEITE PRODUZIDO SEMANALMENTE É: %.2f", totalMilk);
    backMenu();
}

void getTotalCattleFeedConsumedWeekly(struct Gado mimosas[], int countMimosas)
{
    float totalFood = 0;

    for (int i = 0; i < countMimosas; i++)
    {
        totalFood += mimosas[i].qtdeQuilosAlimentoSemanal;
    }

    printf("\n\nTOTAL DE ALIMENTO CONSUMIDO SEMANALMENTE É: %.2f", totalFood);
    backMenu();
}

void getTotalMilkProducedWeeklyAfterSlaughter(struct Gado mimosas[], int countMimosas)
{
    float totalMilk = 0;

    for (int i = 0; i < countMimosas; i++)
    {
        if (mimosas[i].abate == 0)
        {
            totalMilk += mimosas[i].qtdeLitrosLeiteSemanal;
        }
    }

    printf("\n\nPREVISÃO DO TOTAL DE LEITE PRODUZIDO SEMANALMENTE APÓS ABATE É: %.2f", totalMilk);
    backMenu();
}

void getTotalCattleFeedConsumedWeeklyAfterSlaughter(struct Gado mimosas[], int countMimosas)
{
    float totalFood = 0;

    for (int i = 0; i < countMimosas; i++)
    {
        if (mimosas[i].abate == 0)
        {
            totalFood += mimosas[i].qtdeQuilosAlimentoSemanal;
        }
    }

    printf("\n\nPREVISÃO DO TOTAL DE ALIMENTO CONSUMIDO SEMANALMENTE APÓS ABATE É: %.2f", totalFood);
    backMenu();
}

void getTotalHeadsToSlaughter(struct Gado mimosas[], int countMimosas)
{
    int totalHeads = 0;

    for (int i = 0; i < countMimosas; i++)
    {
        if (mimosas[i].abate)
        {
            totalHeads++;
        }
    }

    printf("\n\nTOTAL DE CABEÇAS QUE VÃO PARA O ABATE É: %d", totalHeads);
    backMenu();
}

int main()
{
    struct Gado mimosas[2000];
    char option;
    int countMimosas;

    do
    {
        showOptions();

        scanf("%c", &option);
        option = tolower(option);

        switch (option)
        {
        case '1':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m       CADASTRO DE MIMOSA       \033[0m.\n");
            printf("...................................\n\n");
            createGado(&mimosas[countMimosas]);
            countMimosas++;
            break;
        case '2':
            showLogo();
            printf("...............................................\n");
            printf(". \033[31m   TOTAL DE LEITE PRODUZIDO SEMANALMENTE    \033[0m.\n");
            printf("...............................................");
            getTotalMilkProducedWeekly(mimosas, countMimosas);
            break;
        case '3':
            showLogo();
            printf("................................................\n");
            printf(". \033[31m  TOTAL DE ALIMENTO CONSUMIDO SEMANALMENTE   \033[0m.\n");
            printf("................................................");
            getTotalCattleFeedConsumedWeekly(mimosas, countMimosas);
            break;
        case '4':
            showLogo();
            printf("...................................................................\n");
            printf(". \033[31m  PREVISÃO DO TOTAL DE LEITE PRODUZIDO SEMANALMENTE APÓS ABATE  \033[0m.\n");
            printf("................................................\n\n");
            getTotalMilkProducedWeeklyAfterSlaughter(mimosas, countMimosas);
            break;
        case '5':
            showLogo();
            printf("...................................................................\n");
            printf(".\033[31m PREVISÃO DO TOTAL DE ALIMENTO CONSUMIDO SEMANALMENTE APÓS ABATE \033[0m.\n");
            printf("...................................................................\n\n");
            getTotalCattleFeedConsumedWeeklyAfterSlaughter(mimosas, countMimosas);
            break;
        case '6':
            showLogo();
            printf(".............................................\n");
            printf(". \033[31m   TOTAL DE CABEÇAS QUE VÃO PARA ABATE    \033[0m.\n");
            printf(".............................................\n");
            getTotalHeadsToSlaughter(mimosas, countMimosas);
            break;

        default:
            break;
        }

    } while (option != 's');

    return 0;
}
