#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorAula, quantidadeAulas, percentualInss;

    printf("Informe o valor da hora/aula, o número de aulas e o percentual de desconto do INSS:\n");
    scanf("%f %f %f", &valorAula, &quantidadeAulas, &percentualInss);
    percentualInss = (100 - percentualInss)/100;

    printf("O salário líquido é: R$%.2f", valorAula * quantidadeAulas * percentualInss);


    return 0;
}
