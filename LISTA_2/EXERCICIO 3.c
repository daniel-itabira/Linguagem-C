#include <stdio.h>
#include <stdlib.h>
int funcao(int x,int v[10])
{

    int i,res;
    res=0;
    for(i=0;i<10;i++)
    {
        if (v[i] == x)
        {
            res++;
        }
    }
    if(res>=1)
    {
        res=1;
    }
    else
    {
        res=0;
    }
    return (res);
}
int main()
{
    int x,result,i;
    result=0;
    int vetor[10];
    printf("Digite um valor para analise");
    scanf("%d", &x);
    for(i=0;i<10;i++)
    {
        printf("Digite os valores do vetor:");
        scanf("%d",&vetor[i]);
    }

    result=funcao(x,vetor);

    if (result==1)
    {
        printf("A funcao retornou o valor 1 (UM)");
    }
    else
    {
         printf("A funcao retornou o valor 0(ZERO)");
    }

    return 0;
}
