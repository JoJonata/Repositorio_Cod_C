#include<stdio.h>

#define DIM 3

int main ()
{
	int Matrix[DIM][DIM], I, J, Cont=0;

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
            if(I==J)
            printf("%d", Matrix[I][J]);
        }
        printf("\n"); // Pular linha ap�s imprimir uma linha inteira da matriz
    }
    
	return 0;
}
