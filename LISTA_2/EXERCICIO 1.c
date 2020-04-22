#include <stdio.h>
#include <stdlib.h>
int negativos(float x[10])
{
    int i,valor;
    valor=0;
    for (i=0;i<10;i++)
    {
        if (x[i]<0)
        {
            valor++;
        }
    }
    return(valor);

}
int main()
{
    int i,result;
    result=0;
    float valores[10];
    for(i=0;i<10;i++)
    {
            printf("Digite um valor:");
            scanf("%f",& valores[i]);
    }
    result=negativos(valores);
    printf("Entre os valores digitados existem %d valores negativos", result);

    return 0;
}
