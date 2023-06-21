// Questão 3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Car
{
    char brand[30], color[30];
    int year;
    float price;
};

void showLogo()
{
    system("clear");

    printf("+---------------------------------+\n");
    printf("|\033[35m           WASLENY'S CAR         \033[0m|\n");
    printf("+---------------------------------+\n\n");
}

void showOptions()
{
    showLogo();
    printf("-----------------------------------\n");
    printf("|\033[36m Opções:                         \033[0m|\n");
    printf("|                                 |\n");
    printf("| \033[36m1 -\033[0m Adicionar carro             |\n");
    printf("| \033[36m2 -\033[0m Listar carros por preço     |\n");
    printf("| \033[36m3 -\033[0m Listar carros por marca     |\n");
    printf("| \033[36m4 -\033[0m Buscar carro                |\n");
    printf("|                                 |\n");
    printf("| \033[36ms -\033[0m Sair                        |\n");
    printf("-----------------------------------\n\n");
    printf("\033[36mOpção Escolhida: \033[0m");
}

void backMenu()
{
    printf("\n\n");
    printf("Pressione Enter para sair\n");
    getchar();
    getchar();
}

void createCar(struct Car *car) {
    printf("Marca: ");
    scanf(" %[^\n]s", car->brand);
    
    printf("Ano: ");
    scanf("%d", &car->year);
    
    printf("Cor: ");
    scanf(" %[^\n]s", car->color);

    printf("Preço: ");
    scanf("%f", &car->price);

    printf("\n\n\033[4mCARRO CADASTRADO COM SUCESSO.\033[0m");
    backMenu();
}

void showCarsByPrice(struct Car cars[], int countCars)
{
    float price, priceExists = 0;

    printf("Informe o preço: ");
    scanf("%f", &price);

    for (int i = 0; i < countCars; i++)
    {
        if (cars[i].price <= price)
        {
            printf("\n\033[36mMarca:\033[0m %s\n", cars[i].brand);
            printf("\033[36mCor:\033[0m %s\n", cars[i].color);
            printf("\033[36mAno:\033[0m %d\n", cars[i].year);
            printf("\033[36mPreço:\033[0m %.2f\n", cars[i].price);
            printf("___________________________________\n");

            priceExists = 1;
        }
    }

    if (priceExists)
    {
        printf("\n\n\033[4m\033[1mTodos os carros com preço igual ou menor à %.2f foram listados com sucesso.\033[0m", price);
    }
    else
    {
        printf("\n\n\033[4m\033[1mNão existem carros com preço igual ou menor à %.2f cadastradoa.\033[0m", price);
    }

    backMenu();
}

void showCarsByBrand(struct Car cars[], int countCars)
{
    char brand[30], brandExists = 0;

    printf("Informe a marca: ");
    scanf(" %[^\n]s", brand);

    for (int i = 0; i < countCars; i++)
    {
        if (strcmp(cars[i].brand, brand) == 0)
        {
            printf("\n\033[36mAno:\033[0m %d\n", cars[i].year);
            printf("\033[36mCor:\033[0m %s\n", cars[i].color);
            printf("\033[36mPreço:\033[0m %.2f\n", cars[i].price);
            printf("___________________________________\n");

            brandExists = 1;
        }
    }

    if (brandExists)
    {
        printf("\n\n\033[4m\033[1mTodos os carros da marca %s foram listados com sucesso.\033[0m", brand);
    }
    else
    {
        printf("\n\n\033[4m\033[1mA marca %s não está cadastrada.\033[0m", brand);
    }

    backMenu();
}

void getCar(struct Car cars[], int countCars)
{
    char brand[30], color[30]; 
    int year, exists = 0;

    printf("Informe a marca: ");
    scanf(" %[^\n]s", brand);

    printf("Informe a cor: ");
    scanf(" %[^\n]s", color);

    printf("Informe o ano: ");
    scanf("%d", &year);

    for (int i = 0; i < countCars; i++)
    {
        if (strcmp(cars[i].brand, brand) == 0 && strcmp(cars[i].color, color) == 0 && cars[i].year == year)
        {
            printf("\n\033[36mPreço:\033[0m %.2f\n", cars[i].price);
            printf("___________________________________\n");

            exists = 1;
        }
    }

    if (exists)
    {
        printf("\n\n\033[4m\033[1mFoi encontrado um carro com as características informadas\033[0m");
    }
    else
    {
        printf("\n\n\033[4m\033[1mNão foi encontrado um carro com as características informadas\033[0m");
    }

    backMenu();
}

int main()
{
    struct Car cars[20];
    char option;
    int countCars = 0;

    do
    {
        showOptions();

        scanf("%c", &option);
        option = tolower(option);

        switch (option)
        {
        case '1':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m       CADASTRO DE CARRO        \033[0m.\n");
            printf("...................................\n\n");
            createCar(&cars[countCars]);
            countCars++;
            break;
        case '2':
            showLogo();
            printf(".......................................\n");
            printf(". \033[31m       LISTA DE CARROS POR PREÇO         \033[0m.\n");
            printf(".......................................\n\n");
            showCarsByPrice(cars, countCars);
            break;
        case '3':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m   LISTA DE CARROS POR MARCA    \033[0m.\n");
            printf("...................................\n\n");
            showCarsByBrand(cars, countCars);
            break;
        case '4':
            showLogo();
            printf("....................................\n");
            printf(". \033[31m   BUSCA DE CARROS    \033[0m.\n");
            printf("....................................\n\n");
            getCar(cars, countCars);
            break;

        default:
            break;
        }

    } while (option != 's');

    return 0;
}
