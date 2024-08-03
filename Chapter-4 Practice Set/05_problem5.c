#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<=n)
    {
        sum +=i;
        i++;
    }
    printf("The Sum of first %d number is %d.\n", n, sum);
    
    return 0;
}