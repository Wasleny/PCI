// Questão 4

#include <stdio.h>
#include <stdlib.h>

void gameDuration(int startedHour, int startedMinute, int endedHour, int endedMinute, int *hour, int *minute)
{
    if (startedMinute > endedMinute)
    {
        determinateTimeWhenStartedMinuteGreater(startedHour, startedMinute, endedHour, endedMinute, hour, minute);
    }
    else
    {
        determinateTimeWhenStartedMinuteSmallest(startedHour, startedMinute, endedHour, endedMinute, hour, minute);
    }
}

int fillHour(char *type)
{
    int hour;

    do
    {
        printf("Informe a hora do %s do jogo:\n", type);
        scanf("%d", &hour);
    } while (hour < 0 || hour > 23);

    return hour;
}

int fillMinute(char *type)
{
    int minute;

    do
    {
        printf("Informe o minuto do %s do jogo:\n", type);
        scanf("%d", &minute);
    } while (minute < 0 || minute > 59);

    return minute;
}

void determinateTimeWhenStartedMinuteGreater(int startedHour, int startedMinute, int endedHour, int endedMinute, int *hour, int *minute)
{
    *minute = endedMinute - startedMinute + 60;

    if (endedHour > startedHour)
    {
        *hour = endedHour - startedHour - 1;
    }
    else if (endedHour < startedHour)
    {
        *hour = endedHour - startedHour + 23;
    }
    else
    {
        *hour = endedHour - startedHour;
    }
}

void determinateTimeWhenStartedMinuteSmallest(int startedHour, int startedMinute, int endedHour, int endedMinute, int *hour, int *minute)
{
    *minute = endedMinute - startedMinute;

    if (endedHour < startedHour)
    {
        *hour = endedHour - startedHour + 24;
    }
    else
    {
        *hour = endedHour - startedHour;
    }
}

int main()
{
    int startedHour, startedMinute, endedHour, endedMinute, hour, minute;

    startedHour = fillHour("início");
    startedMinute = fillMinute("início");
    endedHour = fillHour("final");
    endedMinute = fillMinute("final");

    gameDuration(startedHour, startedMinute, endedHour, endedMinute, &hour, &minute);

    printf("Duração do jogo: %dh:%dmin\n", hour, minute);

    return 0;
}