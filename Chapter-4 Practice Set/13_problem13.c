#include <stdio.h>

int main(){
    int n, prime=0, i=2;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
            prime = 1;
    }
    do
    {
        if (n%i == 0 && n!=2)
        {
            prime = 1;
            break;
        }
        i++;
    }while (i < n);
    if (prime)
    {
        printf("The %d is not prime number. /n", n);
    }
    else
    {
        printf("The %d is prime number. /n", n);
    }
    
    
    
    return 0;
}