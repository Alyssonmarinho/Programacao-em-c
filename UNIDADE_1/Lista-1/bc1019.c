#include <stdio.h>

int main() {

    int N, H, MIN, SEG;

    scanf("%d", &N);

    H = N / 3600;
    N =  N % 3600;

    MIN = N / 60;
    N = N % 60;

    SEG = N;

    printf("%d:%d:%d\n", H, MIN, SEG);

    return 0;

}