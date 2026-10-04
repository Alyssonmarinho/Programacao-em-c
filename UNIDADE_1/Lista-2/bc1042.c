#include <stdio.h>

int main(void){

    int a, b, c;
    int backup;

    scanf("%d %d %d", &a, &b, &c);

    int original_a = a, original_b = b, original_c = c;

    if(a>b){
        backup = a;
        a = b;
        b = backup;
    }

    if(b>c){
        backup = b;
        b = c;
        c = backup;
    }

    if(a>b){
        backup = a;
        a = b;
        b = backup;
    }

    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", original_a, original_b, original_c);

    return 0;

}