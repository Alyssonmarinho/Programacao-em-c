#include <stdio.h>

int main(void){

    int x;
    int y;
    int i;
    int aux;
    int soma = 0;

    scanf("%d\n%d", &x, &y);

    if(x > y){
        aux = x;
        x = y;
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