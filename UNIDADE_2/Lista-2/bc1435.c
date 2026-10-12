#include <stdio.h>

int main() {
    int n, i, j, v, menor;

    while (scanf("%d", &n) == 1 && n != 0) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                menor = i;
                if (j < menor) menor = j;
                if (n - 1 - i < menor) menor = n - 1 - i;
                if (n - 1 - j < menor) menor = n - 1 - j;
                v = menor + 1;

                if (j == 0)
                    printf("%3d", v);
                else
                    printf(" %3d", v);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}