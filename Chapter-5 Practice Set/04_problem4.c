#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
int fibonacci(int);

int fibonacci(int n){
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    printf("The Value Of Fibonacci Series at %d Is %d. \n", n, fibonacci(n));
    return 0;
}