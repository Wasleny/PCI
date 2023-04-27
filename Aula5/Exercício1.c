// Exercício 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, z, valorAtual, aux;
    bool solicitarNumero = true;

    printf("Informe um número para a: ");
    scanf("%d", &a);

    while (solicitarNumero)
    {
        printf("Informe um número para b: ");
        scanf("%d", &b);

        b > a ? solicitarNumero = false : printf("O número informado é menor que o valor para a\n");
    }

    solicitarNumero = true;
    while (solicitarNumero)
    {
        printf("Informe um número para z: ");
        scanf("%d", &z);

        z > b ? solicitarNumero = false : printf("O número informado é menor ou igual ao valor para b\n");
    }

    while (a <= b)
    {
        valorAtual = a;
        aux = a + 1;
        while (aux <= b)
        {
            if (valorAtual + aux == z)
            {
                printf("Os numeros: %d e %d somados dão %d\n", valorAtual, aux, z);
            }

            aux++;
        }

        a++;
    }

    return 0;
}
