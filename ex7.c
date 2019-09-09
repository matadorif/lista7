#include<stdio.h>

int main(){
	
	int v[30], i, j, c;
	
	srand(time(NULL));
	
	for(i = 0; i < 30; i++){
		v[i] = 1 + rand() % 100;
		c = 1;
		for(j = 0; j < i; j++){
			if(v[i] == v[j]){
				c++;
			}
		}
		printf("%d\t%d\n", v[i], c);
		
	}
}
