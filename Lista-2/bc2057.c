#include <stdio.h>

int main(void){

    int s, t, f, chegada;

    scanf("%d %d %d", &s, &t, &f);

    chegada = (s + t + f) % 24;

        if(chegada < 0){
        chegada += 24;
    }

    printf("%d\n", chegada);

    return 0;

}