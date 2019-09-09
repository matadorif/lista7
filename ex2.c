#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a[5], b[8], i, j, k, l;
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		a[i] = rand() % 10;
		printf("%d ", a[i]);
	}
	
	printf("\n");
	
	for(j = 0; j < 8; j++){
		b[j] = rand() % 10;
		printf("%d ", b[j]);
	}
	
	printf("\n");
	
	for(k = 0; k < 5; k++){
		for(l = 0; l < 8; l++){
			if(a[k] == b[l]){
				printf("%d ", a[k]);
			}
		}
	}
	
}
