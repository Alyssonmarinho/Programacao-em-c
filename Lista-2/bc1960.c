#include <stdio.h>

int main(void){

    int n, unidade, dezena, centena;

    char *unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *dezenas[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    scanf("%d", &n);

    centena = n/100;
    n = n % 100;
    dezena = n/10;
    unidade = n % 10;

    printf("%s%s%s\n", centenas[centena], dezenas[dezena], unidades[unidade]);

    return 0;

}