#include <stdio.h>

int T;
int N[1000];
int i;

int main(void){

    scanf("%d", &T);

    for(i = 0; i < 1000; i++){
        N[i] = i % T;
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}