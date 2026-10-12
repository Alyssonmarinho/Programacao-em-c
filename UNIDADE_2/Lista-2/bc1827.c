#include <stdio.h>

int main() {
    int n, i, j, ini, fim;

    while (scanf("%d", &n) == 1) {
        ini = n / 3;
        fim = n - 1 - n / 3;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == n / 2 && j == n / 2)
                    printf("4");
                else if (i >= ini && i <= fim && j >= ini && j <= fim)
                    printf("1");
                else if (i == j)
                    printf("2");
                else if (i + j == n - 1)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}