#include <stdio.h>

int main(void){

    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b <= c || a + c <= b || b + c <= a){
        printf("Invalido\n");
    }
    else{
        if(a == b && b == c){
            printf("Valido-Equilatero\n");
        }
        else if(a == b || a == c || b == c){
            printf("Valido-Isoceles\n");
        }
        else{
            printf("Valido-Escaleno\n");
        }

        // descobrir o maior lado
        maior = a;
        if(b > maior) maior = b;
        if(c > maior) maior = c;

        if(maior == a && a*a == b*b + c*c){
            printf("Retangulo: S\n");
        }
        else if(maior == b && b*b == a*a + c*c){
            printf("Retangulo: S\n");
        }
        else if(maior == c && c*c == a*a + b*b){
            printf("Retangulo: S\n");
        }
        else{
            printf("Retangulo: N\n");
        }
    }

    return 0;
}