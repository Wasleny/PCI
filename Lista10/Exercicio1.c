// Questão 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculaQuantidadeLetras(char *phrase, char letter)
{
    int qtdeLetra, tamanho = strlen(phrase);

    for (int i = 0; i < tamanho; i++)
    {
        if (phrase[i] == letter) {
            qtdeLetra++;
        }
    }

    printf("A letra %c aparece %d vezes", letter, qtdeLetra);    
}

int main()
{
    char phrase[100], letter;

    printf("Informe uma frase: ");
    scanf("%[^\n]s", phrase);

    printf("Informe uma letra: ");
    scanf(" %c", &letter);

    calculaQuantidadeLetras(phrase, letter);

    return 0;
}
