#include <stdio.h>

int main(){
    int a = 1, b = 1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    if(a && b){
        printf("both are true\n");
    }

    if(a){
        if(b){
            printf("both are true\n");
            // this is calles nested if 
        }
    }

    // both are same but fist one is esay and short (smart way)

    return 0;
}