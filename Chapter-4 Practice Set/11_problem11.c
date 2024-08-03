#include <stdio.h>

int main(){
    int n, prime=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
            prime = 1;
    }
    
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0 && n!=2)
        {
            prime = 1;
            break;
        }
        
    }
    if (prime)
    {
        printf("The %d is not prime number./n", n);
    }
    else
    {
        printf("The %d is prime number./n", n);
    }
    
    
    
    return 0;
}