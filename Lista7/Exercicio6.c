// Questão 6

#include <stdio.h>
#include <stdlib.h>

int verificaQuantidadeDivisores(unsigned int num)
{
    unsigned int qtdeDivisores = 0, i = 1;

    while(i < num) {
        if (num % i == 0) {
            qtdeDivisores++;
        }
        i++;
    }

    return qtdeDivisores;
}

int main()
{
    int num;

    printf("Informe um número: ");
    scanf("%u", &num);

    printf("Qtde de divisores: %d", verificaQuantidadeDivisores(num));
}
