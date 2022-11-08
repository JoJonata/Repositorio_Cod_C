/*Dado o vetor de 10 posições, onde em cada posição será armazenada 
o sobrenome de um personagem da série A Casa do Dragão, desenvolva 
um programa que leia este vetor e após a leitura de todos os dados, 
leia um sobrenome, verifique se o sobrenome informado está na vetor 
e imprima a quantidade de vezes que o sobrenome foi encontrado.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define T 100
#define TAMVET 10

typedef char String[T];

int main()
{
	String VetorNomes[TAMVET] = {"Velaryon\0", "Mysaria\0", "Cole\0", "Velaryon\0", "Targaryen\0", "Hightower\0"}, NomeBusca;
	
	int I, Contador = 0, Indice = -1;
	
	//printf("Digite %d Nomes: ", TAMVET);
	
//	VetorNomes[TAMVET] = {"Velaryon\0", "Mysaria\0", "Cole\0", "Velaryon\0", "Targaryen\0", "Hightower\0"};
	/*for(I=0;I<TAMVET;I++)
	{
		gets(VetorNomes[I]);
	}*/
	
	//printf("Digite um nome para realizar a busca: ");
	gets(NomeBusca);
	
 	for(I=0;I<TAMVET;I++)
 	{
		if(stricmp(NomeBusca,VetorNomes[I]) == 0)
		{
			Indice = I;
			Contador++;
		}
	}
	
	if(Indice == -1)
	printf("0");
	else
	printf("%i",Contador);

	return 0;
}
