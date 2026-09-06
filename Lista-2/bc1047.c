#include <stdio.h>

int main(void){

    int hora_inicial, min_inicial, hora_final, min_final;
    int inicio, fim, duracao;

    scanf("%d %d %d %d", &hora_inicial, &min_inicial, &hora_final, &min_final);

    inicio = hora_inicial * 60 + min_inicial;
    fim = hora_final * 60 + min_final;
    duracao = fim - inicio;

    if(duracao<=0){
        duracao += 24*60;
    }    

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao / 60, duracao % 60);

}