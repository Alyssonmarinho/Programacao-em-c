#include <stdio.h>

int main(void){

    float numero;
    int i;
    int positivos = 0;

    for(i = 1; i <= 6; i++){
        scanf("%f", &numero);

        if(numero > 0){
            positivos++;
        }
    }

    printf("%d valores positivos\n", positivos);

    return 0;

}