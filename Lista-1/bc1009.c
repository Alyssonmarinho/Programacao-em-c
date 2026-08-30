#include <stdio.h>

int main () {

    char NAME[20];
    double SALARY, SELLS, BONUS, TOTAL;

    scanf("%s", NAME);
    scanf("%lf", &SALARY);
    scanf("%lf", &SELLS);

    BONUS = SELLS*0.15;
    TOTAL = SALARY + BONUS;

    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}