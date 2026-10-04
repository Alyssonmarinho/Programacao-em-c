#include <stdio.h>

int main(void){

    float numero;
    int i;
    int positivos = 0;
    float soma = 0;
    float media;
    
    for(i = 1; i <= 6; i++){
        scanf("%f", &numero);

        if(numero > 0){
            positivos++;
            soma += numero;
        }
    }

    media = soma / positivos;

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media);

    return 0;

}