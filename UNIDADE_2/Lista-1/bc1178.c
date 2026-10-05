#include <stdio.h>

double N [100];
int i;

int main(void){

scanf("%lf", &N[0]);
printf("N[0] = %.4lf\n", N[0]);

for(i = 1; i < 100; i++ ){
    N[i] = N[i - 1] / 2;
    printf("N[%d] = %.4lf\n", i, N[i]);
}

return 0;
}
