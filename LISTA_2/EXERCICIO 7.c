#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void stringup(char destino[],char origem [])
{
    destino=strupr(origem);
    printf("%s", destino);
}
int main()
{
    char s1[200],s2[200];
    puts("Digite um texto:");
    gets(s1);

    stringup(s2,s1);

    return 0;
}
