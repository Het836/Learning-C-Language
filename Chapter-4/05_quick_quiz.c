/*
Quick Quiz: Write a program to print natural numbers from 10 to 20 when initial loop
counter is initialized to 0.
firstly i dont understand this question.
now i understand
*/

#include <stdio.h>

int main(){
    int i = 0;
    
    while(i<=20){
        if(i>=10){
            printf("The value of i is %d.\n", i);
        }
        i++;
    }
    
//    this is my code that dont work 
   /*
   while(i>=10 && i<=20){
    printf("The Value of i is %d.\n", i);
    i++;
   }
   */
   
    
    return 0;
}