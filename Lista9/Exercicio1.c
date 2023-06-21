// Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct ContaBancaria
{
    int numConta, tipoConta;
    char nomeCliente[30];
    float saldo;
};

void mostrarLogoBanco()
{
    system("clear");

    printf("***************************\n");
    printf("*        BANCO PW         *\n");
    printf("***************************\n\n");
}

void mostrarOperacoes()
{
    mostrarLogoBanco();
    printf("---------------------------\n");
    printf("| Opções:                 |\n");
    printf("|                         |\n");
    printf("| 1 - Adicionar uma conta |\n");
    printf("| 2 - Depositar valor     |\n");
    printf("| 3 - Sacar valor         |\n");
    printf("| 4 - Imprimir saldo      |\n");
    printf("| 5 - Montante do banco   |\n");
    printf("|                         |\n");
    printf("| s - Sair                |\n");
    printf("---------------------------\n\n");
    printf("Opção Escolhida: ");
}

void sairTela()
{
    printf("Pressione Enter para sair\n");
    getchar();
    getchar();
}

void criaConta(struct ContaBancaria *conta, struct ContaBancaria contas[], int qtdeContas)
{
    int numConta, aux;
    mostrarLogoBanco();
    printf("..:: CADASTRO DE CONTA ::..\n");
    printf("...........................\n\n");

    do
    {
        aux = 0;
        printf("Número da conta: ");
        scanf("%d", &numConta);

        for (int i = 0; i < qtdeContas; i++)
        {
            if (numConta == contas[i].numConta)
            {
                aux = 1;
            }
        }

    } while (aux);

    conta->numConta = numConta;

    printf("Nome do cliente: ");
    scanf(" %[^\n]s", conta->nomeCliente);

    printf("\n\n1 - Conta Corrente\n2 - Conta Poupança\n\n");
    do
    {
        aux = 1;
        printf("Tipo de conta: ");
        scanf("%d", &conta->tipoConta);

        if (conta->tipoConta == 1 || conta->tipoConta == 2) {
            aux = 0;
        }
    } while (aux);

    printf("\n\n");

    conta->saldo = 0;

    sairTela();
}

int identificarConta(int qtdeContas, struct ContaBancaria contas[])
{
    int numConta;

    printf("Informe o número da conta: ");
    scanf("%d", &numConta);

    for (int i = 0; i < qtdeContas; i++)
    {
        if (contas[i].numConta == numConta)
        {
            return i;
        }
    }

    printf("\n\nA CONTA INFORMADA NÃO EXISTE!\n\n");

    sairTela();

    return -1;
}

void depositarValor(struct ContaBancaria *conta)
{
    float valor;

    printf("\n\nValor: ");
    scanf("%f", &valor);
    printf("\n\n");

    conta->saldo += valor;

    sairTela();
}

void sacarValor(struct ContaBancaria *conta)
{
    float valor;

    printf("\n\nValor: ");
    scanf("%f", &valor);
    printf("\n\n");

    if (valor > conta->saldo)
    {
        printf("SALDO INSUFICIENTE!\n\n");
    }
    else
    {
        conta->saldo -= valor;
    }

    sairTela();
}

void listarConta(struct ContaBancaria *conta)
{
    printf("\n\nNúmero da conta: %d\n", conta->numConta);
    printf("Nome do cliente: %s\n", conta->nomeCliente);
    printf("Tipo de conta: %s\n", conta->tipoConta == 1 ? "Conta Corrente" : "Conta Poupança");
    printf("Saldo: R$ %.2f\n\n", conta->saldo);

    sairTela();
}

void listarMontante(int qtdeContas, struct ContaBancaria contas[])
{
    int tipo;
    float total = 0;

    printf("Informe o tipo de conta: ");
    scanf("%d", &tipo);

    for (int i = 0; i < qtdeContas; i++)
    {
        if (contas[i].tipoConta == tipo)
        {
            total += contas[i].saldo;
        }
    }

    printf("\n\nValor total para o tipo de conta %s é de: R$ %.2f\n\n", tipo == 1 ? "Corrente" : "Poupança", total);

    sairTela();
}

int main()
{
    struct ContaBancaria contas[50];
    int qtdeContas = 0, posicao;
    char opcao;

    do
    {
        mostrarOperacoes();

        scanf("%c", &opcao);
        opcao = tolower(opcao);

        switch (opcao)
        {
        case '1':
            criaConta(&contas[qtdeContas], contas, qtdeContas);
            qtdeContas++;
            break;

        case '2':
            mostrarLogoBanco();
            printf("..:: DEPÓSITO ::..\n\n");
            posicao = identificarConta(qtdeContas, contas);
            if (posicao >= 0)
            {
                depositarValor(&contas[posicao]);
            }
            break;

        case '3':
            mostrarLogoBanco();
            printf("..:: SAQUE ::..\n\n");
            posicao = identificarConta(qtdeContas, contas);
            if (posicao >= 0)
            {
                sacarValor(&contas[posicao]);
            }
            break;

        case '4':
            mostrarLogoBanco();
            printf("..:: CONTA BANCÁRIA ::..\n\n");
            posicao = identificarConta(qtdeContas, contas);
            if (posicao >= 0)
            {
                listarConta(&contas[posicao]);
            }
            break;

        case '5':
            mostrarLogoBanco();
            printf("..:: MONTANTE DO BANCO ::..\n\n");
            listarMontante(qtdeContas, contas);
            break;

        default:
            break;
        }
    } while (opcao != 's');

    return 0;
}
