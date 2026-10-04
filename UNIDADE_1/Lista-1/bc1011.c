#include <stdio.h>

int main() {

    double V, R;
    double pi = 3.14159;

    scanf("%lf", &R);

    V =  (4.0/3) * pi * (R*R*R);

    printf("VOLUME = %.3f\n", V);

    return 0;

}