/*Fa�a um programa que leia uma matriz 3x5 de n�meros inteiros
depois leia uma
vari�vel inteira que representa uma coluna da matriz
e escreva todas as linhas desta coluna
*/
#include<stdio.h>

#define DIM1 3
#define DIM2 5

int main ()
{
	int Matrix[DIM1][DIM2], I, J, Var, Flag = 0;

	for(I=0;I<DIM1;I++)
	{
		for(J=0;J<DIM2;J++)
		{
			scanf("%d", &Matrix[I][J]);
		}
	}

	scanf("%d", &Var);

	for(I=0;I<DIM1;I++)
    {
		for(J=0;J<DIM2;J++)
        {
			if(Var==J){
				printf("%d", Matrix[I][J]);
				Flag = 1;
			}
        }
        printf("\n"); // Pular linha ap�s imprimir uma linha inteira da matriz
    }
    
    if(Flag==0)
    {
        printf("Coluna inv�lida!");
    }
return 0;
}
