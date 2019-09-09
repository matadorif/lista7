#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int v[50], i, maior = -1, menor = RAND_MAX;
	
	srand(time(NULL));
	
	for(i = 0; i < 50; i++){
		v[i] = rand();
		printf("%d ", v[i]);
		
		if(v[i] > maior){
			maior = v[i];
		}
		
		if(v[i] < menor){
			menor = v[i];
		}
		
	}
	
	printf("\n\n");
	printf("%d ", maior);
	printf("%d ", menor);
	
	
	
}
