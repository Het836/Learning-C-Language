#include <stdio.h>

int main(){
    float p;
    int r, t;
    printf("Enter A Principal Amount: ");
    scanf("%f", &p);
    printf("Enter A Interst Rate In Percentage: ");
    scanf("%d", &r);
    printf("Enter A Time Periode In Year: ");
    scanf("%d", &t);
    printf("The value Of Simple Interst Is %f", (p*r*t)/100);
    return 0;
}