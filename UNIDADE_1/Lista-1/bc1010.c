#include <stdio.h>

int main() {

    int cod1, cod2, quant1, quant2;
    double price1, price2, item1, item2, total;

    scanf("%d %d %lf", &cod1, &quant1, &price1);
    scanf("%d %d %lf", &cod2, &quant2, &price2);

    item1 = price1 * quant1;
    item2 = price2 * quant2;

    total = item1 + item2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;

}