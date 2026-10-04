#include <stdio.h>

int main(void){

    int a, b, c, maior;                           // define as variaveis

    scanf("%d %d %d", &a, &b, &c);

    if(a + b <= c || a + c <= b || b + c <= a){  // A soma de dois lados deve ser maior que o terceiro para formar um triângulo.
        printf("Invalido\n");
    }
    else{
        if(a == b && b == c){                    // Equilátero = todos os lados iguais
            printf("Valido-Equilatero\n");
        }
        else if(a == b || a == c || b == c){     // Isosceles = dois lados iguais
            printf("Valido-Isoceles\n");
        }
        else{
            printf("Valido-Escaleno\n");         // Todos os lados diferentes
        }

        maior = a;                               // descobrir o maior lado (maior lado = hipotenusa)
        if(b > maior) maior = b;
        if(c > maior) maior = c;



        // Realizada pitagoras para saber se é retangulo ou nao

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