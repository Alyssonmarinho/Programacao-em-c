#include <stdio.h>

int main() {

    int n, anos, meses, dias;

    scanf("%d", &n);

    anos = n / 365;
    n = n % 365;

    meses = n / 30;
    n = n % 30;

    dias = n;

    printf("%d ano(s) \n", anos);
    printf("%d mes(es) \n", meses);
    printf("%d dia(s) \n", dias);

    return 0;

}