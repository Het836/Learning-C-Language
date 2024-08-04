// Quick Quiz: Use the library function to calculate the area of a square with side a.
#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter A Lenth Of square: ");
    scanf("%d", &a);
    printf("The Area Of Square Is %.2f.\n", pow(a, 2));
    return 0;
}