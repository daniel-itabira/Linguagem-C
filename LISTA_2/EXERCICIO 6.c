#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contc(char str[150],char c)
{
    int contador,i;
    contador=0;
    for (i=0;str[i]!= '\0';i++)
    {
        if(str[i]== c)
        {
            contador++;
        }
    }
    return (contador);
}
int main()
{
    char texto[150];
    char n;
    int x;
    x=0;
    printf("Digite uma frase:");
    gets(texto);
    printf("Digite o caractere a ser contado:");
    scanf("%c",& n);

    x=contc(texto,n);
    printf("%d", x);

    return 0;
}
