#include <stdio.h>

int main(void){

    int par[5], impar[5];
    int pp = 0, ip = 0;
    int i, v, j;

    for(i = 0; i < 15; i++){

        scanf("%d", &v);

        if(v % 2 == 0){
            par[pp] = v;
            pp++;
            if(pp == 5){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                pp = 0;
            }
        } else {
            impar[ip] = v;
            ip++;
            if(ip == 5){
                for(j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                ip = 0;
            }
        }
    }

    for(j = 0; j < ip; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for(j = 0; j < pp; j++){
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}