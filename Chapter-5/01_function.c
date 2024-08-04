#include <stdio.h>

// function prototype
int sum(int, int);

// function defination
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}
int main(){
    int a = 1;
    int b =2;
    // int c= a+b;
    // printf("The Sum Is %d\n", c);
    int c = sum(a,b);   //function call
    printf("%d\n", c);

    int a1 = 12;
    int b1 =23;
    // int c1= a1+b1;
    // printf("The Sum Is %d\n", c1);
    int c1 = sum(a1,b1);
    printf("%d\n", c1);

    return 0;
}