#include <stdio.h>

int main(){
    int i=1, n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        sum +=i;
        i++;
    } while (i<=n);
    printf("The Sum of first %d number is %d.\n", n, sum);
    return 0;
}