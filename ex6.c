#include<stdio.h>

int main(){
	
	int v[20], i, j, c;
	srand(time(NULL));
	
	for(i = 0; i < 20; i++){
		v[i] = 50 + rand() % 49;
		c = 1;
		for(j = 0; j < i; j++){
			if(v[i] == v[j]){
				c++;
			}
		}
		if(c == 1){
			printf("%d ", v[i]);
		}
		printf("%d\n", v[i]);
	}
}
