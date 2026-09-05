#include <stdio.h>

int main(void){

    int cod, quant;
    float valor;

    scanf("%d %d", &cod, &quant);

    switch(cod){
        case 1: valor = 4.00; break;
        case 2: valor = 4.50; break;
        case 3: valor = 5.00; break;
        case 4: valor = 2.00; break;
        case 5: valor = 1.50; break;
    }

    printf("Total: R$ %.2f\n", valor * quant);

    return 0;
    
}