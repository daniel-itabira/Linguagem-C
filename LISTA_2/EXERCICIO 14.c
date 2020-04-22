#include <stdio.h>
#include <stdlib.h>
void magica(int n, int m,int x[n][m])
{
    int i,j,a,b;
    int somabase,somabaselinha,dprin,dsec,somacoluna,somabasecoluna;
    somabase=0;
    somacoluna=0;
    somabaselinha=0;
    dprin=0;
    dsec=0;
    somabasecoluna=0;

    int comparacaolinha;
    comparacaolinha=0;

    int comparacaocoluna;
    comparacaocoluna=0;


    for(i=0;i<1;i++)
    {
        for(j=0;j<m;j++)
        {
            somabase=somabase+x[i][j]; //soma da primeira linha para comparação
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            somacoluna=somacoluna+x[i][j]; //soma da primeira coluna para comparação
        }
    }

        for(i=0;i<n;i++)
        {
        dprin=dprin+x[i][i]; //diagonal principal
        }

        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                if(i+j==n-1)
                {
                     dsec=dsec+x[i][j]; //diagonal secundaria
                }

            }


        }

        if(dprin==dsec)      //comparacao das diagonais
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {


                        somabaselinha=somabaselinha+x[i][j];       //comparacao das colunas e das linhas

                        somabasecoluna=somabasecoluna+x[j][i];

                    if(somabaselinha==dsec)
                    {
                        comparacaolinha++;
                        somabaselinha=0;
                    }
                    if(comparacaolinha>0)           //condicao que define se o valor pode continuar somando
                    {

                         if(somabasecoluna==dsec)
                    {
                        comparacaocoluna++;
                        somabasecoluna=0;
                    }

                }

            }
        }

        if(comparacaolinha==comparacaocoluna && comparacaolinha!= 0 && comparacaocoluna !=0) //comparacao os valores
        {
            printf("E UM QUADRADO MAGICO!");
        }
        else
        {


            printf("Nao e um quadrado magico");
        }

        }
}
//programinha cabuloso.... amém
int main()
{
    int i,j,a,b;

    printf("Determine a quantidade de linhas da matriz:");
    scanf("%d", &a);
    printf("Determine a quantidade de colunas da sua matriz:");
    scanf("%d", &b);

    int matriz[a][b];

    if (a!=b)
    {
        printf("A matriz nao e um quadrado magico pois ela nao e um quadrado!");
        return 0;
    }

    int linha,coluna;
    linha=1;
    coluna=1;
    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Digite o valor da linha: %d coluna: %d :" ,linha,coluna);
            scanf("%d",&matriz[i][j]);
            coluna++;
            if(coluna>b)
            {
                coluna=1;
            }

        }
        linha++;
    }

    magica(a,b,matriz);

    return 0;
}

