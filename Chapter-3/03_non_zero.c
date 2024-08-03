#include <stdio.h>

int main(){
    
    if(1){
        printf("This if is executed!\n ");
    }
    if(123){
        printf("This if is also executed!\n ");
    }
    if(1.4){
        printf("This if is also executed!\n ");
    }
    if('a'){
        printf("This character inside if is also executed!\n ");
    }
    if(0){
        printf("I am zero - i am not executed.\n ");
    }
    return 0;
}