#include <stdio.h>

int main() {
    int n, i, j, k, T, aux, maior, v, expoente;

    while (scanf("%d", &n) == 1 && n != 0) {
        expoente = 2 * n - 2;

        maior = 1;
        for (k = 0; k < expoente; k++)
            maior = maior * 2;

        T = 0;
        aux = maior;
        while (aux > 0) {
            T++;
            aux = aux / 10;
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                v = 1;
                for (k = 0; k < i + j; k++)
                    v = v * 2;

                if (j == 0)
                    printf("%*d", T, v);
                else
                    printf(" %*d", T, v);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}