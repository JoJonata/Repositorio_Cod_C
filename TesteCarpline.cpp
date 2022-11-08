#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define TAM 100 
#define Y 3

typedef char String[TAM]; 

  int main(){
    
     String VetorNomes[Y], Nome; 
     int I, Cont = 0;
    
     printf("\n%", Y);
    
     for(I=0;I<Y;I++){
       gets(VetorNomes[I]);
 }
	gets(Nome);
    //scanf("%d", &Nome);

    for(I=0;I<Y;I++){
      if(strcmp(Nome, VetorNomes[I])== 0){
          Cont++;
      }
    }
 printf("\n%d", Cont);
 
 return 0;
}
