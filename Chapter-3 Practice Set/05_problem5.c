#include <stdio.h>

int main(){
    char ch;
    printf("Enrter a charecter: ");
    scanf("%c", &ch);
    printf("The ASCII Value of this character is %d\n.", ch);
    if(ch >= 97 && ch <=122){
        printf("The character is lowercase.\n");
    }
    else{
        printf("The character is notlowercase.\n");

    }
    return 0;
}