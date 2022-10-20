//char A[TAMANHO]={ 'b','o','r','b','o','l','e','t','a', 's'};

//fflush(stdin);

#include<stdio.h>
#include<ctype.h>
#define TAMANHO 8

int main ()
{
	char Letras[TAMANHO];
	int I, CountEspecial=0, CountMaisc=0, CountMinus =0;
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
	
	printf("Existem %i de minusculos.\nExistem %i de Maiusculos.\nExistem %i de Caracter Especial.", CountMinus, CountMaisc, CountEspecial);
	return 0;
}

