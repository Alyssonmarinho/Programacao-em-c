#include <stdio.h>

int main(void){

    int inicial, final, duracao;

    scanf("%d %d", &inicial, &final);

    if(final>inicial){
        duracao = final - inicial;
    }

    else{
         duracao = (24 - inicial) + final;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;

}