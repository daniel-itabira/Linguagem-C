#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    int i,j;
    float ma,me;

        ma=0;
        me=0;

    p=(float *) calloc(5,sizeof(float));

    for(i=0;i<5;i++)
    {
        printf("Digite o valor:");
        scanf("%f", &p[i]);
    }
    for(i=0;i<5;i++)
    {
        ma=p[i];
        for(j=0;j<5;j++)
        {
            if(p[j]>ma)
                {
                ma=p[j];
                }
        }

    }
     for(i=0;i<5;i++)
    {
        me=p[i];
        for(j=0;j<5;j++)
        {
            if(p[j]<me)
                {
                me=p[j];
                }
        }

    }
    printf("MAIOR VALOR: %.2f\n", ma);
    printf("MENOR VALOR: %.2f", me);

    free(p);
    return 0;
}
