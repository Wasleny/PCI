// Questão 1

#include <stdio.h>
#include <stdlib.h>

void transformTimeFromSeconds(int *hour, int *minute, int *second, int time) {
    *hour = time / 3600;
    *minute = time % 3600;
    *second = *minute % 60;
    *minute = *minute / 60;
}

int main()
{
    int hour, minute, second, time;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &time);
    transformTimeFromSeconds(&hour, &minute, &second, time);

    printf("O tempo é %dh%dmin%ds\n", hour, minute, second);

    return 0;
}
