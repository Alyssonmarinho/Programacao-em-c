#include <stdio.h>

int main(void){

    int T, N, i;
    unsigned long long anterior, atual, prox;

    scanf("%d", &T);

    for(i = 0; i < T; i++){

        scanf("%d", &N);

        anterior = 0;
        atual = 1;

        if(N == 0){
            printf("Fib(%d) = %llu\n", N, anterior);
        } else {
            for(int j = 2; j <= N; j++){
                prox = anterior + atual;
                anterior = atual;
                atual = prox;
            }
            printf("Fib(%d) = %llu\n", N, atual);
        }

    }

    return 0;
}