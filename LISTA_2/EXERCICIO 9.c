#include <stdio.h>
#include <stdlib.h>
int contabranco(char string[])
{
    int i,x;
    x=0;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]==' ' )
        {
            x++;
        }
    }
    return(x);
}
int main()
{
    char str[200];
    int result;
    result=0;

    printf("Digite o texto:");
    gets(str);

    result=contabranco(str);
    printf("Os espacos em branco sao %d", result);
    return 0;
}
