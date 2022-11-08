/*Dada uma matriz MAT de 4 x 5 elementos,
faça um programa para somar os elementos
de cada linha gerando o vetor SOMALINHA.
Em seguida, somar os elementos do vetor 
SOMALINHA na variável TOTAL que deve ser impressa no final:*/

#include<stdio.h>

#define DIM1 4
#define DIM2 5

int main ()
{
	int Matrix[DIM1][DIM2], I, J, Soma=0, SomaLinha[DIM1];

	for(I=0;I<DIM1;I++)
	{
		for(J=0;J<DIM2;J++)
		{
			scanf("%d", &Matrix[I][J]);
		}
	}

	for(I=0;I<DIM1;I++)
    	{
    		Soma=0;
        	for(J=0;J<DIM2;J++)
        	{
				Soma+=Matrix[I][J];
			}
			SomaLinha[I]=Soma;
		}
		
	for(I=0;I<DIM1;I++)
	{
    	printf("%d\n", SomaLinha[I]);
	}
	
	Soma = 0;
	
	for(I=0;I<DIM1;I++)
	{
		Soma+=SomaLinha[I];
	}
	
	printf("%d", Soma);
	
	return 0;
}
