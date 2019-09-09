#include<stdio.h>

int main(){
	
	int n, aux, reverso, d; 
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	aux = n;
	reverso = 0;
	
	while(aux != 0){
		d = aux % 10;
		reverso = (reverso * 10) + d;
		aux = aux / 10;
	}
	
	if(n == reverso){
		printf("O numero e palindromo");
	}else{
		printf("O numero nao e palindromo");
	}
	
	
	
}
