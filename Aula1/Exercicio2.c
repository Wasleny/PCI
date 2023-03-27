#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo;

    printf("Informe o tempo de duração do evento em segundos: ");
    scanf("%d", &tempo);
    printf("O evento tem a duração de: %02dh%02dmin%02ds", tempo / 3600, (tempo%3600) / 60, (tempo%3600)%60);

    return 0;
}
