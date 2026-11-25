#include <stdio.h>

int separar_tempo(int total, int *h, int *m, int *s);

int main(void)
{
    int n, total = 0, melhor = -1;
    int h, m, s;

    if (scanf("%d", &n) != 1) {
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        int t;
        if (scanf("%d", &t) != 1) {
            return 1;
        }
        if (separar_tempo(t, &h, &m, &s)) {
            printf("volta %d: %dh%02dm%02ds\n", i, h, m, s);
            total += t;
            if (melhor < 0 || t < melhor) {
                melhor = t;
            }
        } else {
            printf("volta %d: invalida\n", i);
        }
    }
    if (melhor < 0) {
        printf("nenhuma volta valida\n");
    } else {
        separar_tempo(total, &h, &m, &s);
        printf("total: %dh%02dm%02ds\n", h, m, s);
        separar_tempo(melhor, &h, &m, &s);
        printf("melhor: %dh%02dm%02ds\n", h, m, s);
    }
    return 0;
}

int separar_tempo(int total, int *h, int *m, int *s)
{
    if (total < 0) {
        return 0;
    }
    *h = total / 3600;
    *m = (total % 3600) / 60;
    *s = total % 60;
    return 1;
}