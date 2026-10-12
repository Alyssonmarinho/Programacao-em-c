#include <stdio.h>

int main() {
    int n, m, i, j, x, pos, anterior, ok;

    scanf("%d %d", &n, &m);

    anterior = -1;
    ok = 1;

    for (i = 0; i < n; i++) {
        pos = m;
        for (j = 0; j < m; j++) {
            scanf("%d", &x);
            if (x != 0 && pos == m)
                pos = j;
        }

        if (pos == m && anterior == m) {
        } else if (pos <= anterior) {
            ok = 0;
        }

        anterior = pos;
    }

    if (ok)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}