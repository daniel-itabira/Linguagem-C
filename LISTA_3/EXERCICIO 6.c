#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
typedef struct medidas_
{
    char nome[101];
    float altura;
    int peso;

}pessoa;
void media(int j,int m)
{
    int mpeso;
    mpeso=j+m/2;
    printf("MEDIA PESO:%d",mpeso);
}
int main()
{

    pessoa joao={"Joao",1.90,98};
    puts(joao.nome);
    printf("Altura: %.2f\n", joao.altura);
    printf("Peso: %d\n", joao.peso);

    int pesojoao;
    pesojoao=joao.peso;

    printf("\n");

    pessoa maria={"Maria",1.50,55};
    puts(maria.nome);
    printf("Altura: %.2f\n", maria.altura);
    printf("Peso: %d\n", maria.peso);

    int pesomaria;
    pesomaria=maria.peso;

    media(pesojoao,pesomaria);
    return 0;
}
