#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct aluno_
{
    char nome[101];
    char curso[101];
    int idade;
    float notas[3];
}dados;
void analise(char a[101],char b[101],int c,float d[3])
{
    printf("Nome:");
    puts(a);
    printf("Curso:");
    puts(b);
    printf("Idade:%d", c);

    int i;
    float media=0;

    for(i=0;i<3;i++)
    {
        media=media+d[i];
    }
    media=media/3;

    printf("\n");
    if(media>=60.0)
    {
        printf("APROVADO!");
    }
    else
    {
        printf("REPROVADO!");
    }
}

int main()
{
    dados aluno;
    int i;

    puts("Digite o nome do aluno");
    gets(aluno.nome);

    puts("Digite o curso:");
    gets(aluno.curso);

    printf("Digite a idade:");
    scanf("%d", &aluno.idade);

    for(i=0;i<3;i++)
    {
        printf("Digite a nota da prova %d:",i+1);
        scanf("%f",&aluno.notas[i]);
    }

    analise(aluno.nome,aluno.curso,aluno.idade,aluno.notas);

    return 0;
}
