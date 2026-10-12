#include <stdio.h>
#include <string.h>

int main() {
    char m[4][100];
    int col[100];

    for (int i = 0; i < 4; i++)
        scanf("%s", m[i]);

    int n = strlen(m[0]);

    for (int j = 0; j < n; j++) {
        col[j] = 0;
        for (int i = 0; i < 4; i++)
            col[j] = col[j] * 10 + (m[i][j] - '0');
    }

    int F = col[0], L = col[n - 1];

    for (int j = 1; j < n - 1; j++)
        printf("%c", (F * col[j] + L) % 257);

    printf("\n");
    return 0;
}