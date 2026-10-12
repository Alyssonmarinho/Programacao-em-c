#include <stdio.h>

int main() {
    int c, i, j;
    char t;
    double m, soma;

    scanf("%d", &c);
    scanf(" %c", &t);

    soma = 0;

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &m);
            if (j == c)
                soma = soma + m;
        }
    }

    if (t == 'S')
        printf("%.1lf\n", soma);
    else
        printf("%.1lf\n", soma / 12);

    return 0;
}