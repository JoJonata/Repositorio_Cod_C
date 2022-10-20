/*Faça um programa que leia dois números inteiros e 
imprima o número que é maior ou o sinal de = caso os números sejam iguais.*/
#include<stdio.h>

int main (){
	int Num1, Num2;
	
		printf("Digite um número:\n");
		scanf("%i", &Num1);
		printf("Digite outro número:\n");
		scanf("%i", &Num2);
	
			if(Num1==Num2)
			{
				printf("=");
			}
				else if(Num1<Num2)
			{
				printf("%i", Num2);
			}
	 			else
			{
				printf("%i", Num1);
			}
	
	return 0;
}
