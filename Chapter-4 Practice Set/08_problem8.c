#include <stdio.h>

int main(){
    int sum=0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        sum += (n*i);
    }
    printf("The Sum of of the table of %d is %d.\n", n, sum);
    return 0;
}