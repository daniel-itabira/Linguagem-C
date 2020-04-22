#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct aluno_
{
    char nome[101];
    char curso[101];
    int idade;
}dados;
int main()
{
    dados aluno;

    puts("Digite o nome do aluno");
    fflush(stdin);
    gets(aluno.nome);

    puts("Digite o curso:");
    fflush(stdin);
    gets(aluno.curso);

    printf("Digite a idade:");
    scanf("%d", &aluno.idade);

    printf("Nome:");
    puts(aluno.nome);
    printf("Curso:");
    puts(aluno.curso);
    printf("Idade:%d", aluno.idade);
    return 0;
}
