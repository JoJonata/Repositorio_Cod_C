/*Trabalho individual
Desenvolva um programa que leia uma string e um caracter. O programa deve
retirar da string todas as ocorrências desse caractere. Imprima a cadeia de caracteres modificada ao final.*/
 
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main ()
{
	int I;
	char String[100], Caractere;
 
	gets(String);
 
	fflush(stdin);
	scanf("%c", &Caractere);
 
	while(String[I] != '\0')
	{
		if(String[I] != Caractere)
		{
			printf("%c", String[I]);
		}
		I++;
	}
	
	return 0;
}
