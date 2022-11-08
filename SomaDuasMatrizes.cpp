#include<stdio.h>

#define DIM 3
//#define DIM2 5

int main ()
{
	int Matrix1[DIM][DIM], Matrix2[DIM][DIM], Matrix3[DIM][DIM], I, J;

	for(I=0;I<DIM;I++)
	{
		for(J=0;J<DIM;J++)
		{
			scanf("%d", &Matrix1[I][J]);
		}
	}
	
	for(I=0;I<DIM;I++)
	{
		for(J=0;J<DIM;J++)
		{
			scanf("%d", &Matrix2[I][J]);
		}
	}

	for(I=0;I<DIM;I++)
    {
        for(J=0;J<DIM;J++)
        {
            Matrix3[I][J] = Matrix1[I][J] + Matrix2 [I][J];
            printf("%d", Matrix3[I][J]);
        }
        printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
    }
   
return 0;
}
