/*Trabalho individual
Faça um programa que leia cinco números reais e imprima o maior número lido.

Considere que não serão informados número iguais.*/

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
