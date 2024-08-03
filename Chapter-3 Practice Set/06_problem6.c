#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter Four number: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        printf("a is gretest number.\n");
    }
    else if(b>a && b>c && b>d){
        printf("b is gretest number.\n");
    }
    else if(c>b && c>a && c>d){
        printf("c is gretest number.\n");
    }
    else{
        printf("d is gretest number.\n");
    }
    return 0;
}