/*A empresa Locaf�cil  possui uma frota de 8 carros e quer fazer alguns controle da frota. 
Fa�a um programa que armazene para cada carro os seguintes dados: modelo, ano de fabrica��o e o valor.
 Cada tipo de informa��o ser� armazenado em um vetor. Ap�s a leitura dos dados calcule e escreva:

O modelo do carro mais caro;

O Modelo do carro mais barato;

O valor total dos carros que a empresa possui;*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define T 100
#define TAMVET 8

typedef char String[T];

int main()
{
	String VetorModelo[TAMVET], VetorAno[TAMVET];
	
	int VetorValor[TAMVET], I=0, J=0, Aux=0, MenorValor, PosicaoMenor, MaiorValor, PosicaoMaior;
	
	for(I=0;I<TAMVET;I++)
	{
		fflush(stdin);
		gets(VetorModelo[I]);
		gets(VetorAno[I]);
		scanf("%d", &VetorValor[I]);
	}
	
	MenorValor = VetorValor[0];
	PosicaoMenor = 0;
	
	MaiorValor = VetorValor[0];
	PosicaoMaior = 0;
	
	for(I=0;I<TAMVET;I++)
	{
		for(J=I+1;J<TAMVET;J++)
		{
			if(VetorValor[J]<MenorValor)
			{
				MenorValor = VetorValor[J];
				PosicaoMenor = J;
			}
			if(VetorValor[J]>MaiorValor)
			{
				MaiorValor = VetorValor[J];
				PosicaoMaior = J;
			}
		}
	}
	
	for(I=0;I<TAMVET;I++)
	{
		Aux += VetorValor[I];
	}
	
	printf("%s\n",VetorModelo[PosicaoMaior]);
	printf("%s\n",VetorModelo[PosicaoMenor]);
	printf("%d", Aux);

	return 0;
}
