#include <stdio.h>

int main(){
    int i, j, a, v[10];
    
    srand(time(NULL));

    for (i = 0; i < 10; i++) {
       do {
          v[i] = 1 + rand() % 20;
          a = 1;
          
          for (j = 0; j < i; j++){
             if (v[i] == v[j]){
                a = 0;
            }
        }
       } while (a == 0);   
       printf("%d ", v[i]);
    }
}
