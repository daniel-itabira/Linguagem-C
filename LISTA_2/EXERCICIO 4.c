#include <stdio.h>
#include <stdlib.h>
int media(int x[10])
{
    int i;
    int result, valorm;
    result=0;
    valorm=0;
    for(i=0;i<10;i++)
    {
        result=result+x[i];
    }
    valorm=result/10;

    return(valorm);

}
int main()
{
    int x[10];
    int i,resp;
    resp=0;
    for(i=0;i<10;i++)
    {
        printf("Digite valores inteiros do vetor para calcular a media: ");
        scanf("%d", &x[i]);
    }
    resp=media(x);

    printf("A media e: %d", resp);
    return 0;
}
