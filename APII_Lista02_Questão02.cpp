//Fa�a um programa que leia um vetor de 10 posi��es inteiras okay
//e o coloque em ordem crescente, utilizando a seguinte estrat�gia de ordena��o:

//1� - selecione o elemento do vetor de 10 posi��es que apresenta o menor

//valor;

//2� - troque este elemento pelo primeiro;

//3� - repita estas opera��es, envolvendo agora apenas os 9 elementos

//restantes(selecionando o de menor valor com a segunda posi��o), depois os 8

//elementos(trocando o de menor valor com a terceira posi��o), depois os 7, 6 e

//assim por diante, at� restar um �nico elemento, o maior deles.

#include<stdio.h>

int main ()
{
	int Vet[10], MenorValor, MenorPosicao, I, J, Aux;
	
	for(I=0;I<10;I++)      // 9 10 8 7 6 5 4 3 2 1
	{
		scanf("%i", &Vet[I]);
	}
	
	MenorValor = Vet[0]; //10
	MenorPosicao = 0;   //0
	
	for(I=0; I<10; I++)//0
	{
		MenorPosicao=I;
		for(J=I+1; J<10; J++)//1                                                 2
		{
			if(Vet[MenorPosicao] > Vet[J])  //  9 <10                                  1<10
			{
				Aux = Vet[MenorPosicao];  //0 = 10 >>>10
				Vet[MenorPosicao] = Vet[J]; // 10 = 9 >> 9
				Vet[J] = Aux;// 9 = 10 >>> 10	
			}	
		}
	}
	
	for(I=0;I<10;I++)     // 1 10 9 8 7 6 5 4 3 2
	{
		printf("%i ", Vet[I]);
	}
	return 0;
}
