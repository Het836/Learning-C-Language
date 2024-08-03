#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum +=i;
    }
    
    printf("The Sum of first %d number is %d.\n", n, sum);
    return 0;
}