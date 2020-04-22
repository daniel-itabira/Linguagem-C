#include <stdio.h>
#include <stdlib.h>
typedef struct jogadores
{
    int numero;
    int peso;
    float altura;
    char inicial;
}time;
time printa(time printt[])
{
    int i;
    for(i=0;i<11;i++)
    {
        printf("NUMERO JOGADOR: %d\n", printt[i].numero);
        printf("PESO JOGADOR: %d\n", printt[i].peso);
        printf("ALTURA JOGADOR: %.2f\n", printt[i].altura);
        printf("INICIAL JOGADOR: '%c'\n", printt[i].inicial);
        printf("\n");
    }
}
time baixo(time baixoo[])
{
    float altura;
    int i,j;
    char ini;

    altura=baixoo[0].altura;
    for(i=0;i<11;i++)
    {
            if(altura>baixoo[i].altura)
            {
                altura=baixoo[i].altura;
                ini=baixoo[i].inicial;
            }
    }
    printf("INICIAL DO MENOR:%c\n", ini);
}
time peso(time pesoo[])
{
    int i,num;
    int pesado=0;

    for(i=0;i<11;i++)
    {
        if(pesado<pesoo[i].peso)
        {
            pesado=pesoo[i].peso;
            num=pesoo[i].numero;
        }
    }
    printf("O NUMERO DO JOGADOR MAIS PESADO: %d\n", num);
}
int main()
{
    time jogador[11];
    int i;

    for(i=0;i<11;i++)
    {
        printf("Digite o numero jogador:");
        scanf("%d", &jogador[i].numero);

        printf("Digite o peso do jogador:");
        scanf("%d", &jogador[i].peso);

        printf("Digite a altura do jogador:");
        scanf("%f", &jogador[i].altura);

        printf("Digite a inicial do jogador:");
        fflush(stdin);
        scanf("%c", &jogador[i].inicial);
        printf("\n");
    }

    printa(jogador);
    baixo(jogador);
    peso(jogador);
    return 0;
}
