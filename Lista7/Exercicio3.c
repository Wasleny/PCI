// Questão 3

#include <stdio.h>
#include <stdlib.h>

int somaDigitos(unsigned int num)
{
    int soma = 0;

    while (num > 0)
    {
        soma += num % 10;
        num /= 10;
    }
    
    return soma;
}

int main()
{
    int num;

    printf("Informe um número: ");
    scanf("%u", &num);

    printf("Soma dos dígitos: %d", somaDigitos(num));
}
