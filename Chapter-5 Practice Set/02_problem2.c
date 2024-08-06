#include <stdio.h>

float f2c(float);
float f2c(float c){
    return ((9*c)/5) + 32;
}
int main(){
    float c;
    printf("Enter A Temperature In celius: ");
    scanf("%f", &c);
    printf("Celius To Fehrenheit For %.2f is %.2f", c, f2c(c));
    return 0;
}