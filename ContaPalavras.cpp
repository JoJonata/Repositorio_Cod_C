// Faça um programa que leia uma string e mostre quantas palavras existem nesta string.

#include<stdio.h>
#include<string.h>

int main()
{
	int I, Tamanho, Espaco=0, Flag = 0;
	char Frase[100];

	gets(Frase);

	while(Frase[I] != '\0')
	{
		Flag=1;
		if(Frase[I]==' ')
		{	
			Espaco++;
			while(Frase[I]==' ') //exclui os espaços adicionais!
			{
				I++;
			}
		}
		I++;
	}
	
	if(Espaco >= 0 && Flag)
	{
		printf("%i",Espaco+1);
	}
	else
	{
		printf("0");
	}
	return 0;
}
