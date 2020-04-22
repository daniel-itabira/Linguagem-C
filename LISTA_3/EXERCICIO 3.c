#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,espaco;
    int *numeros;

    espaco=1;

    numeros =(int *) malloc(espaco*sizeof(int));

    for(i=0;i<espaco;i++)
    {
        printf("(0 para a execuçao do programa) Digite o valor:");
        scanf("%d",&numeros[i]);

        if(numeros[i]!=0)
        {
            espaco++;
            numeros=(int *) realloc(numeros,sizeof(int)*espaco);
        }
        else
        {
            x=espaco;
            espaco=0;
        }
    }

    printf("Valores digitados: ");

    for(i=0;numeros[i]!=0;i++)
    {
        printf("%d - ", numeros[i]);
    }

    free(numeros);

    return 0;
}
