/*
Quick Quiz: Write a program to print first ‘n’ natural numbers using for loop
*/
#include <stdio.h>

int main(){
    int i, n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}