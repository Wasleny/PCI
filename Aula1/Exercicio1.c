#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros;
    printf("Informe o valor em metros: ");
    scanf("%f", &metros);
    printf("Em decímetros: %0.2f\n", metros*10);
    printf("Em centímetros: %0.2f\n", metros*100);
    printf("Em milítros: %0.2f\n", metros*1000);
    
    return 0;
}
