#include<stdio.h>

#define DIM 5

int main ()
{
int Matrix[DIM][DIM], I, J, Cont=0;

for(I=0;I<DIM;I++)
{
for(J=0;J<DIM;J++)
{
Matrix[I][J]=Cont;
}
Cont++;
}

for(I=0;I<DIM;I++)
    {
        for(J=0;J<DIM;J++)
        {
            printf("%d", Matrix[I][J]);
        }
        printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
    }
return 0;
}
