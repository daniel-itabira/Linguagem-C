#include <stdio.h>
#include <stdlib.h>
int maior_vetor(int x[10])
{
    int i,j,valor;
    valor=0;
    for(i=0;i<10;i++)
    {
        if (x[i]>valor)
        {
            valor=x[i];
        }
        else
        {
            if(valor<=0)
            {
                valor=x[i];
            }
        }
    }
    return(valor);

}
int main()
{
    int x[10];
    int i,result;
    result=0;
    for(i=0;i<10;i++)
    {
         printf("Digite os valores:");
         scanf("%d", &x[i]);
    }

    result=maior_vetor(x);
    printf("O MAIOR VALOR E %d", result);
    return 0;
}
