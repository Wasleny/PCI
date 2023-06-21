// Questão 2

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Book
{
    int code;
    char title[30], author[30], genre[30];
    float price;
};

void showLogo()
{
    system("clear");

    printf("+---------------------------------+\n");
    printf("|\033[35m         WASLENY'S LIBRARY       \033[0m|\n");
    printf("+---------------------------------+\n\n");
}

void showOptions()
{
    showLogo();
    printf("-----------------------------------\n");
    printf("|\033[36m Opções:                         \033[0m|\n");
    printf("|                                 |\n");
    printf("| \033[36m1 -\033[0m Adicionar um livro          |\n");
    printf("| \033[36m2 -\033[0m Listar livros               |\n");
    printf("| \033[36m3 -\033[0m Listar livros por autor     |\n");
    printf("| \033[36m4 -\033[0m Encontrar livro             |\n");
    printf("| \033[36m5 -\033[0m Listar livros por gênero    |\n");
    printf("| \033[36m6 -\033[0m Média geral do preço        |\n");
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

void createBook(struct Book *book, struct Book library[], int countBooks)
{
    int flag, i;

    do
    {
        flag = 0;
        printf("Código: ");
        scanf("%d", &book->code);

        for (i = 0; i < countBooks; i++)
        {
            if (book->code == library[i].code)
            {
                flag = 1;
                break;
            }
        }
    } while (flag);

    printf("Nome autor(a): ");
    scanf(" %[^\n]s", book->author);

    do
    {
        flag = 0;
        printf("Nome do livro: ");
        scanf(" %[^\n]s", book->title);

        for (i = 0; i < countBooks; i++)
        {
            if (book->title == library[i].title && book->author == library[i].author)
            {
                flag = 1;
                break;
            }
        }
    } while (flag);

    printf("Gênero: ");
    scanf(" %[^\n]s", book->genre);

    printf("Preço: ");
    scanf("%f", &book->price);

    printf("\n\n\033[4mLIVRO CADASTRADO COM SUCESSO.\033[0m");
    backMenu();
}

void showBooks(struct Book books[], int countBooks)
{
    for (int i = 0; i < countBooks; i++)
    {
        printf("\033[36mCódigo:\033[0m %d\n", books[i].code);
        printf("\033[36mTítulo:\033[0m %s\n", books[i].title);
        printf("\033[36mAutor:\033[0m %s\n", books[i].author);
        printf("\033[36mGênero:\033[0m %s\n", books[i].genre);
        printf("\033[36mPreço:\033[0m %.2f\n", books[i].price);
        printf("___________________________________\n\n");
    }

    printf("\n\n\033[4mTODOS OS LIVROS FORAM LISTADOS COM SUCESSO.\033[0m");
    backMenu();
}

void showBooksByAuthor(struct Book books[], int countBooks)
{
    char author[30], authorExists = 0;

    printf("Informe o nome do autor: ");
    scanf(" %[^\n]s", author);

    for (int i = 0; i < countBooks; i++)
    {
        if (strcmp(books[i].author, author) == 0)
        {
            printf("\n\033[36mCódigo:\033[0m %d\n", books[i].code);
            printf("\033[36mTítulo:\033[0m %s\n", books[i].title);
            printf("\033[36mGênero:\033[0m %s\n", books[i].genre);
            printf("\033[36mPreço:\033[0m %.2f\n", books[i].price);
            printf("___________________________________\n");

            authorExists = 1;
        }
    }

    if (authorExists)
    {
        printf("\n\n\033[4m\033[1mTodos os livros do(a) autor(a) %s foram listados com sucesso.\033[0m", author);
    }
    else
    {
        printf("\n\n\033[4m\033[1mO(a) autor(a) %s não está cadastrado.\033[0m", author);
    }

    backMenu();
}

void showBooksByTitle(struct Book books[], int countBooks)
{
    char title[30], bookExists = 0;

    printf("Informe o título do livro: ");
    scanf(" %[^\n]s", title);

    for (int i = 0; i < countBooks; i++)
    {
        if (strcmp(books[i].title, title) == 0)
        {
            printf("\n\033[36mCódigo:\033[0m %d\n", books[i].code);
            printf("\033[36mAutor:\033[0m %s\n", books[i].author);
            printf("\033[36mGênero:\033[0m %s\n", books[i].genre);
            printf("\033[36mPreço:\033[0m %.2f\n", books[i].price);
            printf("___________________________________\n");

            bookExists = 1;
        }
    }

    if (bookExists)
    {
        printf("\n\n\033[4m\033[1mTodos os livros com título %s foram listados com sucesso.\033[0m", title);
    }
    else
    {
        printf("\n\n\033[4m\033[1mNão existe livros com o título %s cadastrados.\033[0m", title);
    }

    backMenu();
}

void showBooksByGenre(struct Book books[], int countBooks)
{
    char genre[30], genreExists = 0;

    printf("Informe o gênero: ");
    scanf(" %[^\n]s", genre);

    for (int i = 0; i < countBooks; i++)
    {
        if (strcmp(books[i].genre, genre) == 0)
        {
            printf("\n\033[36mAutor:\033[0m %s\n", books[i].author);
            printf("\033[36mTítulo:\033[0m %s\n", books[i].title);
            printf("\033[36mPreço:\033[0m %.2f\n", books[i].price);
            printf("___________________________________\n");

            genreExists = 1;
        }
    }

    if (genreExists)
    {
        printf("\n\n\033[4m\033[1mTodos os livros com gênero %s foram listados com sucesso.\033[0m", genre);
    }
    else
    {
        printf("\n\n\033[4m\033[1mNão existe livros com o gênero %s cadastrados.\033[0m", genre);
    }

    backMenu();
}

void getAveragePriceBooks(struct Book books[], int countBooks)
{
    float totalPrice = 0;

    for (int i = 0; i < countBooks; i++)
    {
        totalPrice += books[i].price;
    }

    printf("\n\033[4m\033[1mMédia dos preços dos livros cadastrados é: R$%.2f\033[0m", totalPrice / countBooks);
    backMenu();
}

int main()
{
    struct Book library[50];
    char option;
    int countBooks;

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
            printf(". \033[31m       CADASTRO DE LIVRO        \033[0m.\n");
            printf("...................................\n\n");
            createBook(&library[countBooks], library, countBooks);
            countBooks++;
            break;
        case '2':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m       LISTA DOS LIVROS         \033[0m.\n");
            printf("...................................\n\n");
            showBooks(library, countBooks);
            break;
        case '3':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m   LISTA DE LIVROS POR AUTOR    \033[0m.\n");
            printf("...................................\n\n");
            showBooksByAuthor(library, countBooks);
            break;
        case '4':
            showLogo();
            printf("....................................\n");
            printf(". \033[31m   LISTA DE LIVROS POR TÍTULO    \033[0m.\n");
            printf("....................................\n\n");
            showBooksByTitle(library, countBooks);
            break;
        case '5':
            showLogo();
            printf("....................................\n");
            printf(". \033[31m   LISTA DE LIVROS POR GÊNERO    \033[0m.\n");
            printf("....................................\n\n");
            showBooksByGenre(library, countBooks);
            break;
        case '6':
            showLogo();
            printf("...................................\n");
            printf(". \033[31m   MÉDIA DO PREÇO DOS LIVROS    \033[0m.\n");
            printf("...................................\n");
            getAveragePriceBooks(library, countBooks);
            break;

        default:
            break;
        }

    } while (option != 's');

    return 0;
}
