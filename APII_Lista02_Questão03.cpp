#include<stdio.h>

int main()
{
	int Inscritos ,I , flag=0;

	scanf("%i", &Inscritos);
	
	int Vet[Inscritos];
	
	for(I=0;I<Inscritos;I++)
	{
		scanf("%i", &Vet[I]);
	}

	for(I=0;I<Inscritos;I++)
	{
		if (Vet[0]<Vet[I])
		{
			flag++;
		}
	}
	
	if (flag==0)
		{
			printf("S");
		}else{
			printf("N");
		}
	return 0;
}

