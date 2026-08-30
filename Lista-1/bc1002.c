#include <stdio.h>

double A, R;
double pi = 3.14159;

int main(){

    scanf("%lf", &R);
    A = pi * (R*R);

    printf("A=%.4lf\n", A);

    return 0;
}