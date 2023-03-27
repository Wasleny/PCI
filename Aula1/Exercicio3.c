#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, media;
    printf("Informe os primeiros 3 números:\n");
    scanf("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3)/3;

    printf("\nInforme os últimos 3 números:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Média dos 3 primeiros: %.2f", media);

    media += (num1 + num2 + num3)/3;

    printf("\nMédia dos 3 últimos: %.2f", (num1 + num2 + num3)/3);
    printf("\nSoma das médias: %.2f\n", media);

    return 0;
}
