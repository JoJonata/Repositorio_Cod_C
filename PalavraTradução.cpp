/*Desenvolva um programa que leia dois vetores de strings com 15 posi��es
cada um. O primeiro vetor cont�m 15palavras em portugu�s e o segundo cont�m
as respectivas palavras em ingl�s. 

Em seguida, seu programa dever� ler
informa��es contendo, uma palavra qualquer e um caracter (I ou P), indicando o
idioma em que est� escrita a palavra lida anteriormente. Para cada uma destas
informa��es, o programa dever� escrever a palavra lida e sua respectiva
tradu��o. O programa dever� encerrar a leitura que for informado �*� no lugar
da palavra.
*/

#include<stdio.h>
#include<string.h>
#define T 100
#define TAMVET 2

typedef char String[T];

int main()
{
	String VetorPort[TAMVET], VetorIngles[TAMVET], Palavra[1];
	char Controle;
	int I, Sair;
	
	for(I=0;I<TAMVET;I++)
	{
		scanf("%s", &VetorPort[I]);
	}
	
	for(I=0;I<TAMVET;I++)
	{
		scanf("%s", &VetorIngles[I]);
	}
	Sair = -1;
	while (Sair != 0)
	{
		printf("Digite uma palavra:");
		scanf("%s", &Palavra);
		do{
			printf("Ingl�s[I] Portugu�s[P]:");
			scanf("%c", &Controle);
			if(Controle == 'I')
			{
				for(I=0;I<TAMVET;I++)
				{
					
					scanf("%s", &VetorPort[I]);
				}
			}
		}while(Controle == 'I' || Controle == 'P');
	}
	/*
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
		Aux = Aux + VetorValor[I];
	}
	
	printf("%s",VetorModelo[PosicaoMaior]);
	printf("\n %s",VetorModelo[PosicaoMenor]);
	printf("\n %d", Aux);*/

	return 0;
}
