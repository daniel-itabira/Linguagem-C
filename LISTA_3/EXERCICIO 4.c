#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,numeros,par,impar;
    int *ponteiro=NULL;
    numeros=0;
    par=0;
    impar=0;

    printf("Digite quantos numeros deseja digitar:");
    scanf("%d", &numeros);

    ponteiro=(int *) malloc(numeros*sizeof(int));

    for(i=0;i<numeros;i++)
    {
        printf("Digite o numero:");
        scanf("%d",&ponteiro[i]);
    }
    for(x=0;x<numeros;x++)
    {
        if(ponteiro[x]%2==0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    free(ponteiro);
    printf("PARES: %d\nIMPARES: %d", par,impar);

    return 0;
}
