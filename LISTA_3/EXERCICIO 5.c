#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t=0;
    int contador=0;
    int loteria[6],apostador[6],comparador[t];
    int *vetor=NULL;

    vetor =(int *) malloc(t*sizeof(int));

    for(i=0;i<6;i++)
    {
        printf("Digite os numero da loteria de sabado:");
        scanf("%d", &loteria[i]);
    }

    for(i=0;i<6;i++)
    {
        printf("Digite o seus numeros:");
        scanf("%d", &apostador[i]);
    }
    int testejogador=0,testeloteria=0;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(apostador[i]==apostador[j])
               {
                   testejogador++;
                   if(testejogador>6)
                    {
                        printf("Voce digitou numeros duplicados, tente denovo!");
                        return 0;
                    }
               }
            if(loteria[i]==loteria[j])
            {
                testeloteria++;
                if(testeloteria>6)
                {
                    printf("Voce digitou numeros duplicados, tente denovo!");
                    return 0;
                }
            }
        }
    }

    for(i=0;i<6;i++)
    {
        comparador[i]=loteria[i];
        for(j=0;j<6;j++)
        {
        if(comparador[i]==apostador[j])
        {
            t++;
            contador++;
            vetor =(int *) realloc(vetor,sizeof(int)*t);
            vetor[i]=apostador[j];
        }
        }
    }

    printf("NUMEROS DA LOTERIA: ");

    for(i=0;i<6;i++)
    {
        printf("%d - ", loteria[i]);
    }

    printf("\n");
    printf("VOCE ACERTOU: %d \nNUMEROS ACERTADOS: ", contador);

    for(i=0;i<t;i++)
    {
        printf("%d - ", vetor[i]);
    }

    free(vetor);
    return 0;
}
