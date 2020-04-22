#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
typedef struct registro_
{
    char nome[101];
    char placa [101];
    char cor[101];
    char turno;
}registro;
registro lista(registro list[])
{
    int i;
    printf("LISTA DOS VEICULOS:\n\n");
    for(i=0;i<100;i++)
    {
        printf("NOME ->");
        puts(list[i].nome);
        printf("PLACA ->");
        puts(list[i].placa);
        printf("COR ->");
        puts(list[i].cor);
        printf("TURNO ->");
        switch(list[i].turno)
        {
         case 'm':printf("MANHA\n");break;
         case 'n':printf("NOITE\n");break;
         case 't':printf("TARDE\n");break;
         case 'i':printf("DIA INTEIRO\n");break;

         default:printf("O TURNO FOI DIGITADO ERRADO!!");
        }
    }
}
int main()
{
    registro carro[100];
    int i;

    for(i=0;i<100;i++)
    {
        printf("Digite o nome do condutor:");
        fflush(stdin);
        gets(carro[i].nome);

        printf("Digite a placa do carro:");
        fflush(stdin);
        gets(carro[i].placa);

        printf("Digite a cor do carro:");
        fflush(stdin);
        gets(carro[i].cor);

        printf("\n");

        printf("m (manha)\nt (tarde)\nn (noite)\ni (dia inteiro)\n\nDigite o turno em que o carro foi armazenado:");
        fflush(stdin);
        scanf("%c",&carro[i].turno);
    }

    lista(carro);

    return 0;
}
