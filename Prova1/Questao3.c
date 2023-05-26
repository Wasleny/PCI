#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Informe a idade do atleta: ");
    scanf("%d", &idade);

    if (idade > 5 && idade <= 7)
    {
        printf("Infantil A");
    }
    else if (idade <= 10)
    {
        printf("Infantil B");
    }
    else if (idade <= 13)
    {
        printf("Juvenil A");
    }
    else if (idade <= 17)
    {
        printf("Juvenil B");
    }
    else if (idade <= 25)
    {
        printf("Senior");
    }
    else
    {
        printf("Idade Inválida");
    }
    
    return 0;
}