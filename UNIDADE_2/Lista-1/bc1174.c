#include <stdio.h>

float A[100];
int i;

int main(void){

    for(i = 0; i < 100; i++){
        scanf("%f", &A[i]);
    }

    for(i = 0; i < 100; i++){
        if (A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }    

    return 0;
}