#include <stdio.h>
#include <stdlib.h>
float maiorV(float x[6][6])
{
    int i,j;
    float compara;
    float c;
    c=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if (i==j)
            {
                compara=x[i][j];
                if (compara<c)
                {
                    c=compara;
                }

            }
        }
    }
    return(c);

}
int main()
{
    int i,j,linha,coluna;
    linha=1;
    coluna=1;
    float matriz[6][6];

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("Digite os valores da matriz 6x6 linha %d: coluna %d:", linha, coluna);
            scanf("%f", &matriz[i][j]);
            coluna++;
            if(coluna>6)
            {
                coluna=1;
            }
        }
        linha++;
    }
    float result;
    result=maiorV(matriz);

    printf("O menor valor da diagonal principal e: %.2f", result);
    return 0;
}
