// Questão 1

#include <stdio.h>
#include <stdlib.h>

void calculaAno(int ano) {
    if ((ano % 4 && !ano % 100) || (ano % 100 && ano % 400)) {
        printf("Ano bissexto");
    } else {
        printf("Ano não bissexto");
    }
}

int main()
{
    int ano;

    printf("Informe o ano: ");
    scanf("%d", &ano);

    calculaAno(ano);
    return 0;
}
