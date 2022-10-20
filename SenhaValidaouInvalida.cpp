/*ctype.h

isspace(caracter)>

if(isspace(Letras[I]!=0) // jeito de perguntar se é um espaço em branco

isdigit

islower

isupper

isalpha

isalnum

ispunct //verifica se é um 

toupper

tolower*/
#include<stdio.h>
#include<ctype.h>
#define TAMANHO 8

int main ()
{
	char Letras[TAMANHO];
	int I, CountMinus =0, CountMaisc=0, CountEspecial=0;
	printf("Informe 8 letras: \n");
	
	for(I=0;I<TAMANHO;I++)
	{
		fflush(stdin);
		scanf("%c", &Letras[I]);
	}
	
for(I=0;I<TAMANHO;I++)
	{
		/*if(Letras[I]=='a')
		{
			Count++;
		}*/
		if(islower(Letras[I])!=0)
		{
			CountMinus++;
		}
		else if(isupper(Letras[I])!=0)
		{
			CountMaisc++;
		}
		else if(ispunct(Letras[I])!=0)
		{
			CountEspecial++;
		}
	}
	if(islower(CountMinus)<=1 && isupper(CountMaisc)<=1 && ispunct(CountEspecial)<=1)
	{
		printf("Senha é válida");
	}else{
		printf("Senha é invalida");
	}
	return 0;
}

