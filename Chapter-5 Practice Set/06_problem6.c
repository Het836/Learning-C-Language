#include <stdio.h>

int sum(int);
int sum(int n){
    if (n == 1)
    {
        return 1;
    }
    
    return sum(n-1) + n;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("The sum of first %d number us %d \n",n ,sum(n));
    return 0;
}