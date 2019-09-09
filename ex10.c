#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float v[20], maior = -1.0, menor = 1.0, soma = 0;
	int i;
	
	for(i = 0; i < 20; i++){
		
		v[i] =  -1.0 * (float)(rand()) / (float)(RAND_MAX) + (float)(rand()) / (float)(RAND_MAX);
		printf("%f ", v[i]);
		
		if(v[i] > maior){
			maior = v[i];
		}
		
		if(v[i] < menor){
			menor = v[i];
		}
		
		soma = soma + v[i];
		
	}
	printf("\n");
	printf("Maior: %f\n", maior);
	printf("Menor: %f\n", menor);
	printf("Media: %f", soma/20);
}
