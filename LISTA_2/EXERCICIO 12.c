#include <stdio.h>
#include <stdlib.h>
float matrizA(float a[7][6])
{
    float somai,somaj,soma;
    int i,j,m,n;
    soma=0;
    somai=0;
    somaj=0;
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i==5)
            {
                for(m=0;m<6;m++)
                {
                     somai=somai+a[i][m];
                }

            }
        }
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j==3)
            {
                for (n=0;n<7;n++)
                somaj=somaj+a[n][j];
            }
        }
    }
    soma=somai+somaj;
    return(soma);
}
int main()
{
    float matriz[7][6];
    int i,j,linha,coluna;
    linha=1;
    coluna=1;
    float result=0;
   for(i=0;i<7;i++)
   {
       for(j=0;j<6;j++)
       {
           printf("Digites o elemento da linha: %d coluna: %d - ", linha,coluna);
           scanf("%f",&matriz[i][j]);
           coluna++;
           if(coluna>6)
           {
               coluna=1;
           }
       }
       linha++;
   }

   result=matrizA(matriz);

   printf("A soma e: %.2f", result);
    return 0;
}
