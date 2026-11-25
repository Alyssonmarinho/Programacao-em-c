/*
 * Por que v = realloc(v, novo_tamanho); e perigoso?
 * Se o realloc falhar, ele devolve NULL, e esse NULL e guardado em v.
 * Com isso, perdemos o endereco do bloco antigo e nao conseguimos mais
 * liberar essa memoria (vazamento).
 *
 * Como o codigo evita isso:
 * o resultado do realloc vai primeiro para um ponteiro temporario (tmp).
 * So depois de ver que tmp nao e NULL ele e copiado para v.
 * Se falhar, v ainda aponta para o bloco antigo, que e liberado com free(v).
 */


 
#include <stdio.h>
#include <stdlib.h>

int *ler_leituras(int *n, int *cap);

int main(void)
{
    int n, cap;
    int *v = ler_leituras(&n, &cap);

    if (v == NULL) {
        return 1;
    }
    if (n == 0) {
        printf("nenhuma leitura\n");
    } else {
        long soma = 0;
        for (int i = 0; i < n; i++) {
            soma += v[i];
        }
        printf("leituras: %d\n", n);
        printf("capacidade: %d\n", cap);
        printf("acima da media:");
        for (int i = 0; i < n; i++) {
            if ((long)v[i] * n > soma) {
                printf(" %d", v[i]);
            }
        }
        printf("\n");
    }
    free(v);
    return 0;
}

int *ler_leituras(int *n, int *cap)
{
    int *v = malloc(4 * sizeof(int));
    int x;

    if (v == NULL) {
        return NULL;
    }
    *n = 0;
    *cap = 4;
    while (scanf("%d", &x) == 1 && x != -1) {
        if (*n == *cap) {
            int *tmp = realloc(v, 2 * (*cap) * sizeof(int));
            if (tmp == NULL) {
                free(v);
                return NULL;
            }
            v = tmp;
            *cap *= 2;
        }
        v[(*n)++] = x;
    }
    return v;
}