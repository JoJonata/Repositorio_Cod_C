/*Fa�a um programa que leia n�meros inteiros, at� que seja informado o n�mero -1, 
depois escreva a soma dos n�meros pares e a quantidade dos n�meros �mpares.
*/


#include<stdio.h>

int main (){
	int Num,Soma=0,Cont=0;
	
	printf("Digite quaisquer numeros inteiros ou -1 para sair\n");
	
	while(Num !=-1)
	{		
		scanf("%i", &Num);
		if(Num!=-1)
			if(Num %2==0){
				Soma=Soma+Num;
			}else{
				Cont++;
			}
	}
	printf("A soma dos pares: %i\nA quantidade dos impares: %i",Soma,Cont);
	return 0;
}
