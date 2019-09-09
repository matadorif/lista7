#include<stdio.h>

int main(){
	
	int v[20], i, j;
	srand(time(NULL));
	
	for(i = 0; i < 20; i++){
		v[i] = 1 + rand() % 50;

		for(j = 0; j < i; j++){
			if(v[i] == v[j]){
				printf("%d ", v[i]);
			}
			if(j == 0){
				printf("\n");
			}
		}
		
		printf("%d ", v[i]);	
	}
	
}
