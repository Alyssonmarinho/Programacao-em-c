#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    double maiorAB, maiorFinal;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + fabs(a - b)) / 2.0;
    maiorFinal = (maiorAB + c + fabs(maiorAB - c)) / 2.0;

    printf("%.0lf eh o maior\n", maiorFinal);

    return 0;
}