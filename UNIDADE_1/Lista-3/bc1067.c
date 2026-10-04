#include <stdio.h>

int main(void){

    int valor;
    int i = 1;

    scanf("%d", &valor);

    while(i >= 1 && i <= valor){
        if(i % 2 == 1){
            printf("%d\n", i);
        }
    i++;
    }

    return 0;

}