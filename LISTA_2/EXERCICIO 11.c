#include <stdio.h>
#include <stdlib.h>
float matrizA(float a[5][5])
{
    int i,j;
    float soma;
    soma=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            soma=soma+a[i][j];
        }
    }
    return(soma);
}
int main()
{
    float a[5][5];
    int i,j;
    float result;
    int coluna,linha;
    coluna=1;
    linha=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Digite o valor da posicao linha: %d coluna: %d matriz:", linha,coluna);
            scanf("%f", &a[i][j]);
            coluna++;
            if(coluna>5)
            {
                coluna=1;
            }
        }
        linha++;
    }
    result=matrizA(a);
    printf("A soma dos elementos e: %.2f", result);
    return 0;
}
