#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void copiaate(char destino[], char origem[],char parar)
{
    int i,j,k,l;
    l=0;
    for(j=0;origem[j]!= '\0';j++)
    {
        if (origem[j]== parar)
        {
            l++;
        }
    }
    if(l>=1)
    {
        for(i=0;origem[i]!=parar;i++)
        {
           destino[i]=origem[i];
        }
    }
    else
    {
        for(k=0;origem[k]!= '\0';k++)
        {
            destino[k]=origem[k];
        }
    }
    puts(destino);
}
int main()
{
    char palavra[200], op[200];
    char letra;

    printf("Digite o texto:");
    gets(palavra);

    printf("Digite a letra para definir momento de parar:");
    scanf("%c", &letra);

    copiaate(op,palavra,letra);


    return 0;
}
