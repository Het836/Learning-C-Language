#include <stdio.h>

int main(){
    int factorial=1, n, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<=n)
    {
        factorial *=i;
        i++;
    }
    
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}