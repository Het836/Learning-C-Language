/*
Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F
*/
#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks<=100 && marks>=90){
        printf("You got A Grade.");
    }
    else if(marks<=90 && marks>=80){
        printf("You Got B Grade.");
    }
    else if(marks<=80 && marks>=70){
        printf("You Got C Grade.");
    }
    else if(marks<=70 && marks>=60){
        printf("You Got D Grade.");
    }
    else if(marks<=60 && marks>=50){
        printf("You Got E Grade.");
    }
    else{
        printf("You Got F Grade.");
    }
    return 0;
}