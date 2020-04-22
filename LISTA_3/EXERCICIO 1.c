#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;
    p= (int) malloc(10*sizeof(int));

    for(i=0;i<10;i++)
    {
        printf("Digite o valor:");
        scanf("%d",&p[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("ENDERECO [%d]:  %p VALOR DO CONTEUDO: %d\n",(i+1),&p[i],*(p+i));
    }
    free(p);

    return 0;
}
