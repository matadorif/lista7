#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float v[10], n;
	int i;

	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		v[i] = (float)(rand()) / (float)(RAND_MAX);
		printf("%f ", v[i]);
		
	}
	
}
