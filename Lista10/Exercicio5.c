// Questão 1

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int mediaFinal, numFaltas, qtdeHorasAula;
};

int testaSeAprovado(struct Aluno aluno) {
    if (aluno.mediaFinal >= 60 && aluno.numFaltas <= aluno.qtdeHorasAula*0.25)
    {
        return 1;
    }
    
    return 0;
}

int main()
{
    struct Aluno aluno;
    int isAprovado;

    printf("Informe a média final do aluno: ");
    scanf("%d", &aluno.mediaFinal);
    printf("Informe a qtde de faltas do aluno: ");
    scanf("%d", &aluno.numFaltas);
    printf("Informe a qtde de horas-aulas no semestre: ");
    scanf("%d", &aluno.qtdeHorasAula);

    isAprovado = testaSeAprovado(aluno);

    isAprovado ? printf("Aluno aprovado.") : printf("Aluno reprovado.");
    
    return 0;
}
