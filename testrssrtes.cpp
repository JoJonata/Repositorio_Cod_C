#include <stdio.h>
#define TAM_VET 10

int main()
{
    int 
   //Vet[TAM_VET], 
    Vet[TAM_VET]={10,9,8,7,6,5,4,3,2,1},
    MenorValor=0,
    MenorPosicao=0,
    AUX=0,
    I=0,
    J=0;
    
//    for(int i=0;i<TAM_VET;i++){
 //       scanf("%i",&Vet[i]);
   // }
   
    
    for(I=0;I<TAM_VET;I++){
        MenorPosicao=I;
        for(J=0;J<TAM_VET;J++){
            if(Vet[MenorPosicao] > Vet[J] ){
                AUX=Vet[MenorPosicao];
                Vet[MenorPosicao]=Vet[J];
                Vet[J]=AUX;
                MenorPosicao=J;
            }
        }   
    }
    
    printf("\n");
    for(int l=0;l<TAM_VET;l++){
        printf(" %i, ",Vet[l]);
    }

    return 0;
}
