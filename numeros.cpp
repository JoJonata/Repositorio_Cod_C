/*Trabalho individual
Fa�a um programa que leia cinco n�meros reais e imprima o maior n�mero lido.

Considere que n�o ser�o informados n�mero iguais.*/

#include<stdio.h>

int main () {
	int I;
	float Array[5],MaiorNum;
	
	for(I=0;I<5;I++)
	{
		scanf("%f", &Array[I]);
	}
	MaiorNum = Array[0];
		for(I=0;I<5;I++){
			if(Array[I]>MaiorNum)
			{
				MaiorNum = Array[I];
			}
		}
	printf("%.1f", MaiorNum);
	
	return 0;
}
