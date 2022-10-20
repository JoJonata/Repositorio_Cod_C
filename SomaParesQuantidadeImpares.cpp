/*Faça um programa que leia números inteiros, até que seja informado o número -1, 
depois escreva a soma dos números pares e a quantidade dos números ímpares.
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
