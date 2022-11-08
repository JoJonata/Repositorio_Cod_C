/*Faça um programa para ler uma matriz de 5X5
de números inteiros, depois oprograma deverá imprimir a matriz
e mostrar o número da linha e da coluna do maior e
do menor valor encontrado na matriz.*/

#include<stdio.h>

#define DIM 5

int main ()
{
	int Matrix[DIM][DIM], I, J, IndiceMenorI, IndiceMenorJ, IndiceMaiorI, IndiceMaiorJ, MaiorValor, MenorValor;

	for(I=0;I<DIM;I++)
	{
		for(J=0;J<DIM;J++)
		{
			scanf("%d", &Matrix[I][J]);
		}
	}

	for(I=0;I<DIM;I++)
	{
       	for(J=0;J<DIM;J++)
       	{
		   printf("%d ", Matrix[I][J]);
       	}
		printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
	}
	
	IndiceMenorI = 0;
	IndiceMenorJ = 0;
	MenorValor = Matrix[0][0];
	IndiceMaiorI = 0;
	IndiceMaiorJ = 0;
	MaiorValor = Matrix[0][0];
		
	for(I=0;I<DIM;I++)
	{
       	for(J=0;J<DIM;J++)
       	{
       		if(Matrix[I][J]<MenorValor)
       		{
				MenorValor= Matrix[I][J];
				IndiceMenorI = I;
				IndiceMenorJ = J;
			}
			
			if(Matrix[I][J]>MaiorValor)
			{
				MaiorValor = Matrix[I][J];
				IndiceMaiorI = I;
				IndiceMaiorJ = J;
			}
       	}
	}
	
	printf("%d\n%d\n%d\n%d", IndiceMaiorI,IndiceMaiorJ,IndiceMenorI,IndiceMenorJ);
	
	return 0;    	
}
