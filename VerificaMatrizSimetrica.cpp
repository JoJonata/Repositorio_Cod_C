/*Desenvolva um programa que preencha uma matriz 3 x 3 com n�meros inteiros e
mostre uma mensagem dizendo se a matriz digitada � sim�trica ou n�o. Uma matriz
s� pode ser sim�trica se A[i,j] = A[j,i].
*/
#include<stdio.h>

#define DIM 3


int main ()
{
	int Matrix[DIM][DIM], I, J, Count=0, ExcluiVertical=0;

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
				if(I==J){
					ExcluiVertical++;
				}else if(Matrix[I][J] == Matrix[J][I])
				{
					Count++;
				}
			}
		}

    if(Count == ((DIM*DIM)-DIM)) //padr�o que encontrei para saber quais n�meros eram lidos nas matrizes simetricas
    {
		printf("S");
    }else{
		printf("N");
	}
	
	return 0;
}
