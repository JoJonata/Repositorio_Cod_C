/*Fa�a um programa que leia dois n�meros inteiros e 
imprima o n�mero que � maior ou o sinal de = caso os n�meros sejam iguais.*/
#include<stdio.h>

int main (){
	int Num1, Num2;
	
		printf("Digite um n�mero:\n");
		scanf("%i", &Num1);
		printf("Digite outro n�mero:\n");
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
