#include<stdio.h>

int main() {
        int n, l, Result, p = 1, s = 0;
		scanf("%i", &n);
		
        while (n > 0){
            l = n % 10;
// TODO: Crie as outras condi��es necess�rias para a resolu��o do desafio:
             p *= l;
             s += l;
             n /= 10;
           }
		Result = p - s;
           printf("%i", Result);
        
}
