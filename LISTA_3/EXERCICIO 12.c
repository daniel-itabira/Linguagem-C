#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct est_aluno
{
     char nome[30];
     float media;
     int faltas;
}aluno;

int main()
{
    aluno *alocamento;
    int i,tamanho=1;
    char decisao,x=0;

    alocamento = malloc(tamanho*sizeof(aluno));

    for(i=0;i<tamanho;i++)
    {
        printf("Nome do aluno:");
        fflush(stdin);
        gets(alocamento[i].nome);
        printf("Media:");
        scanf("%f",&alocamento[i].media);
        printf("Faltas:");
        scanf("%d",&alocamento[i].faltas);

        printf("\n Deseja incluir um novo aluno?" "\n(S) PARA SIM \n(N) PARA NAO\n ->:");
        fflush(stdin);
        scanf("%c", &decisao);

            switch(decisao)
            {
                case 's':x=1;break;
                case 'S':x=1;break;
                case 'n':x=0;break;
                case 'N':x=0;break;
                default:printf("Decisao invalida!");
            }
            if(x==1)
            {
                tamanho++;
                alocamento=realloc(alocamento,sizeof(aluno)*tamanho);
            }
    }

    for(i=0;i<tamanho;i++)
    {
        printf("\nALUNO:");
        puts(alocamento[i].nome);
        printf("MEDIA: %.2f\n", alocamento[i].media);
        printf("FALTAS: %d", alocamento[i].faltas);
        printf("\n");
    }

    return 0;
}
