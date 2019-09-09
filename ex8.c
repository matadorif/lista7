#include<stdio.h>

int main(){
	
	int v[15], i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 15; i++){
		v[i] = 1 + rand() % 40;
		printf("%2d ", v[i]);
		
		if(v[i] % 2 != 0){
			v[i] = 0;
		}
		
	}
	
	printf("\n");
	
	for(j = 0; j < 15; j++){
		printf("%2d ", v[j]);
	}
}
