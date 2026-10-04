#include <stdio.h>

int main(void){

    int valores;
    int i;
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d", &valores);

        if(valores % 2 == 0){
            pares++;
        }

        else{
            impares++;
        }

        if(valores > 0){
            positivos++;
        }

        else if(valores < 0){
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;

}