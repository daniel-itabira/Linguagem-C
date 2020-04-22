#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ultimo(char string[], char c)
{
    int i,x;
    x=0;
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i] == c)
        {
            x=i;

        }
        else
        {
            if(x==0)
            {
                x=-1;
            }
        }
    }
    return(x);

}
int main()
{
    char c;
    char str[200];
    int resp;
    resp=0;

    puts("Digite o texto:");
    gets(str);

    printf("Digite o caractere que deseja localizar:");
    scanf("%c",& c);

    resp=ultimo(str,c);

    if(resp<0)
    {
        printf("O caractere encontra se na %d (ELE NAO EXISTE NA STRING)",resp);
    }
    else
    {
        printf("O caractere esta na posicao: %d", resp);
    }





    return 0;
}
