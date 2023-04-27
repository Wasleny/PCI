// Exercício 2

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    int idade, menorIdade = 0, maiorIdade = 0, qtdeMulheres = 0, idadeMenorSalario, qtdePessoas = 0;
    char genero, generoMenorSalario;
    float salario, mediaSalarios = 0, menorSalario = 0;
    bool continuar = true;

    while (continuar)
    {
        printf("Informe a idade, o gênero e o salário: ");
        scanf("%d %c %f", &idade, &genero, &salario);
        genero = tolower(genero);
        if (idade > 0)
        {
            mediaSalarios += salario;
            qtdePessoas++;

            if (idade < menorIdade || menorIdade == 0)
            {
                menorIdade = idade;
            }

            if (idade >= maiorIdade)
            {
                maiorIdade = idade;
            }

            if (salario < menorSalario || menorSalario == 0)
            {
                menorSalario = salario;
                generoMenorSalario = genero;
                idadeMenorSalario = idade;
            }

            if (genero == 'f')
            {
                qtdeMulheres++;
            }
        } else {
            continuar = false;
        }
    }

    printf("Média dos salários: %.2f\n", mediaSalarios / qtdePessoas);
    printf("Maior idade: %d \nMenor idade: %d\n", maiorIdade, menorIdade);
    printf("Quantidade de mulheres: %d\n", qtdeMulheres);
    printf("Pessoa com o menor salário é %s e a idade é %d", generoMenorSalario == 'f' ? "mulher" : "homem", idadeMenorSalario);

    return 0;
}
