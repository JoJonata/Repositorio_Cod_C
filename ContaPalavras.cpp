// Faça um programa que leia uma string e mostre quantas palavras existem nesta string.

#include<stdio.h>
#include<string.h>

int main()
{
int I, Tamanho, Espaco=0;
char Frase[100];

gets(Frase);

//Tamanho=strlen(Frase);

/*while(Frase[I] != '\0')
{
if(Frase[I]==' ' && Frase[I+1]==' ')
{
Frase[I+1]='a';
Espaco++;
}
else if(Frase[I]==' ')
{
Espaco++;
}
I++;
}*/

while(Frase[I] != '\0')
{
if(Frase[I]==' ')
{
Espaco++;
}
I++;
}

/*if(Frase[0]==' ')
{
Espaco--;
}
/* while(Frase[I] != '\0'){

if(Frase[I] && Frase[I+1]==' ')
{
Espaco--;
}
}*/

printf("%i",Espaco);
return 0;
}
