#include <stdio.h>

int main(){
    float c , f;
    printf("Enter A Value In Celcius: ");
    scanf("%f",&c);
    f = (9.0/5.0)*c + 32;
    printf("The Temperature In Fehranheit Is %f", f);
    return 0;
}