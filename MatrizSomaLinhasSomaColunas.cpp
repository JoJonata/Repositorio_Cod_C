/*Desenvolva um programa que preencha uma matriz
5X6 com números inteiros.
Após a leitura, o programa deve calcular e escrever:
? A soma de cada uma das 5 linhas
? A soma de cada uma das 6 colunas*/
#include<stdio.h>

#define DIM1 5
#define DIM2 6

int main ()
{
int Matrix[DIM1][DIM2], I, J, Soma;

for(I=0;I<DIM1;I++)
{
for(J=0;J<DIM2;J++)
{
   scanf("%d", &Matrix[I][J]);
}
}

//A soma de cada uma das 5 linhas

for(I=0;I<DIM1;I++)
    {
        Soma=0;
        for(J=0;J<DIM2;J++)
        {
            Soma= Soma + Matrix[I][J];
        }
        printf("%d\n", Soma);
        //printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
    }
   
    printf("\n");
   
    for(J=0;J<DIM2;J++)
    {
        Soma=0;
        for(I=0;I<DIM1;I++)
        {
            Soma = Soma + Matrix[I][J];
        }
        printf("%d\n", Soma);
        //printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
    }
   
return 0;
}
