/*Modifique o Exemplo 7 do Slide 02 para que o programa 
fa�a a impress�o da posi��o onde est� localizado o maior
valor do vetor e para que o programa localize e imprima,
 tamb�m, o menor valor e sua posi��o no vetor.*/
 
 
 #include<stdio.h>
 
 int main () {
	int I;
	float Array[5],MaiorNum, Indice;
	
	for(I=0;I<5;I++)
	{
		scanf("%f", &Array[I]);
	}
	MaiorNum = Array[0];
	Indice=0;
	MenorNum = Array[0];
		for(I=0;I<5;I++){
			if(Array[I]>MaiorNum && )
			{
				MaiorNum = Array[I];
				Indice= I;
			}
		}
	printf("%.0f \n", Indice);
	printf("%.1f \n", MaiorNum);
	
	return 0;
}
