/*
this code is mine
this code is not better than that 
but my code is short
#include <stdio.h>
*/
int main(){
    int a, b, c, n;
    printf("Enter Your three marks: ");
    scanf("%d%d%d", &a, &b,&c);
    n = (a+b+c)/3;
    if(a>=33 && b>=33 && c>=33 && n>=40){
        printf("You are pass.");
    }
    else{
        printf("You are failed.");
    }
    return 0;
}