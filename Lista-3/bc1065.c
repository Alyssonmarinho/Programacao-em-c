#include <stdio.h>

int main(void){

    int numero;
    int i;
    int pares = 0;

    for(i = 1; i<=5; i++){
        scanf("%d", &numero);

        if(numero % 2 == 0){
            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;

}