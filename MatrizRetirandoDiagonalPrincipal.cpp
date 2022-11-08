#include<stdio.h>

#define DIM 3
//#define DIM2 5

int main ()
{
int Matrix[DIM][DIM], I, J;

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
              printf("_");  
            }else{
                printf("%d", Matrix[I][J]);
            }
           
        }
        printf("\n"); // Pular linha após imprimir uma linha inteira da matriz
    }
   
return 0;
}

