/*- A empresa Viaje Bem possui ônibus com 20 lugares (10 janelas e 10 no
corredor).
Desenvolva um programa que utilize dois vetores para controlar as poltronas
ocupadas no corredor e na janela. Considere que 0 representa poltrona
desocupada e 1, poltrona ocupada.
Inicialmente, todas as poltronas estarão livres.
O programa deverá apresentar o seguinte menu de opções:
Viagem Bem
Venda on-line
1. Vender Passagem.
2. Mostrar mapa de ocupações do ônibus.
3. Encerrar.
Digite a opção desejada:*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define T 100
#define TAMVET 10

typedef char String[T];

int main ()
{
	int NumDigitado, I, J;
	String VetorJanela[TAMVET], VetorCorredor[TAMVET];
	
	do
	{
		printf("Viagem Bem\nVenda on-line\n1. Vender Passagem.\n2. Mostrar mapa de ocupações do ônibus.\n3. Encerrar\n");
		scanf("%i", NumDigitado);
		
		if(NumDigitado == 1)
		{
		//	Vender passagem;
		}else if(NumDigitado == 2){
			//1 for para o vetor Janela 
			for(I=0;I<TAMVET;I++){
				printf("%s", VetorJanela[I]);
			}
			//2 for para vetor Corredor
			for(J=0;J<TAMVET;J++){
				printf("%s", VetorCorredor[I]);
			}
		}else if(NumDigitado == 3)
		{
			NumDigitado = 3;
		} else{
			printf("Opção Inválida!");
		}
		
	}while(NumDigitado == 3);
	
	return 0;
}
