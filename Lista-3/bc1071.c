#include <stdio.h>

int main(void){

    int x;
    int y;
    int i;
    int aux;
    int soma = 0;

    scanf("%d\n%d", &x, &y);

    if(x > y){            // Troca x e y se necessário, pois o for precisa que x seja o menor
        aux = x;          // e y o maior: se x > y, o laço (i = x+1; i < y; i++) nunca executaria,
        x = y;            // já que i começaria maior que o limite de parada.
        y = aux;
    }

    for(i = x + 1; i < y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }

    printf("%d\n", soma);

    return 0;
}