// Questão 2

#include <stdio.h>
#include <stdlib.h>

void changeValues(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a, b;

    printf("Informe dois valores: ");
    scanf("%d%d", &a, &b);
    changeValues(&a, &b);

    printf("A agora vale: %d\n", a);
    printf("B agora vale: %d\n", b);

    return 0;
}
