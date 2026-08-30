#include <stdio.h>

int main() {

    int NUMBER, HOURS;
    double VALUE, SALARY;

    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%lf", &VALUE);
    SALARY = HOURS * VALUE;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2lf\n", SALARY);

    return 0;

}