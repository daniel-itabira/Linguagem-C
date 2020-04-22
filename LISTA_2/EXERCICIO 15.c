#include <stdio.h>
#include <stdlib.h>
void questao(float x[5][5])
{
    int i,j;
    float somalinha,somacoluna,dprin,dsec;
    somalinha=0;
    somacoluna=0;
    dprin=0;
    dsec=0;
    for(i=0;i<5;i++)
    {
        if(i==3)
        {
             for(j=0;j<5;j++)
               {

                somalinha=somalinha+x[i][j];

               }
        }

    }

    printf("A SOMA DA LINHA 4 E: %.2f\n", somalinha);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==1)
            {
                somacoluna=somacoluna+x[i][j];
            }
        }
    }

    printf("A SOMA DA COLUNA 2 E: %.2f\n", somacoluna);

    for (i=0;i<5;i++)
    {
        dprin=dprin+x[i][i];
    }

    printf("A SOMA DA DIAGONAL PRINCIPAL E: %.2f\n", dprin);

    for (i=0;i<5;i++)
    {
        for(j=4;j>=0;j--)
        {
            if(i+j==5-1)
            {
                dsec=dsec+x[i][j];
            }
        }

    }

    printf("A SOMA DA DIAGONAL SECUNDARIA E: %.2f\n", dsec);
}
int main()
{
    float matriz[5][5];
    int i,j,linha,coluna;
    linha=1;
    coluna=1;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Diite os valores da matriz linha: %d coluna: %d : ",linha,coluna);
            scanf("%f",&matriz[i][j]);
            if(coluna>=5)
            {
                coluna=0;
            }
            coluna++;
        }linha++;
    }

    questao(matriz);
    return 0;
}
