#include <stdio.h>

int main(void){

    int valor;
    int i;

    scanf("%d", &valor);

    if(valor % 2 == 0){
        valor++;
    }

    for(i = 1; i <= 6; i++){
        printf("%d\n", valor);
        valor += 2;
    }

    return 0;

}