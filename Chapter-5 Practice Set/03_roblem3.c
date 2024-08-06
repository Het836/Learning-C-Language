#include <stdio.h>

float force(float);
float force(float m){
    return m*9.8;
}
int main(){
    float m;
    printf("Enter A Mass: ");
    scanf("%f", &m);
    printf("The Force For %.2f mass is %.2f\n", m, force(m));
    return 0;   
}