#include <stdio.h>

int main(){
    int a = 6;
    int b = 3;
    int c = 9;
    printf("The Value Of a*b/c Is %d\n", a*b/c);
    printf("The Value Of a/b*c Is %d\n", a/b*c);
    printf("The Value Is %d", 7*b/5*c + 21*b);
    // 7*b/5*c + 21*b
    // 7*3/5*9 + 21*3
    // 21/5*9 + 63
    // 4*9 + 63
    // 36 + 63
    // 99
    return 0;
}