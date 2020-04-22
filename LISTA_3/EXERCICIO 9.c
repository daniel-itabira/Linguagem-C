#include <stdio.h>
#include <stdlib.h>
typedef struct ponto_
{
    int x;
    int y;
}ponto;
int main()
{
    ponto distancia[2];
    int i;

    for(i=0;i<2;i++)
    {
        printf("Digite o X[%d]:",i+1);
        scanf("%d", &distancia[i].x);

        printf("Digite o Y[%d]:",i+1);
        scanf("%d", &distancia[i].y);
    }

        int x=0,y=0;

        if(distancia[0].x>distancia[1].x)
        {
            x=distancia[0].x-distancia[1].x;
        }
        else
        {
            x=distancia[1].x-distancia[0].x;
        }
        if(distancia[0].y>distancia[1].y)
        {
             y=distancia[0].y-distancia[1].y;
        }
        else
        {
             y=distancia[1].y-distancia[0].y;
        }

        printf("DISTANCIA (x0)->(x1): %d\nDISTANCIA y(0)->y(1): %d", x,y);
    return 0;
}
