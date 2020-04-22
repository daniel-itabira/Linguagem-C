#include <stdio.h>
#include <stdlib.h>
int so_positivo(int vetor[], int tamanho)
{
    int i,vezes;
    vezes=0;
    for(i=0;i<tamanho;i++)
    {
        if(vetor[i]<0)
        {
            vetor[i]=0;
            vezes++;
        }
    }
    return(vezes);

}
int main()
{
    int i,tamanho,resp;
    tamanho=0;
    resp=0;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&tamanho);

    int x[tamanho];

    for(i=0;i<tamanho;i++)
    {
        printf("Digite os valores do vetor:");
        scanf("%d",& x[i]);
    }
    resp=so_positivo(x,tamanho);

    printf("%d Valores foram substituidos", resp);
    return 0;
}
