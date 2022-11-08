#include<stdio.h>
#include<string.h>
#define T 100
#define TAMVET 4

typedef char String[T];

int main()
{
	String VetorModelo[TAMVET];
	
	int I=0, J=0, MenorValor, PosicaoMenor, MaiorValor, PosicaoMaior, VetorAno[TAMVET];
	
	float VetorValor[TAMVET], Aux = 0;
	
	for(I=0;I<TAMVET;I++)
	{
		fflush(stdin);
		gets(VetorModelo[I]);
		scanf("%i", &VetorAno[I]);
		scanf("%f", &VetorValor[I]);
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
	printf("%.2f", Aux);

	return 0;
}
