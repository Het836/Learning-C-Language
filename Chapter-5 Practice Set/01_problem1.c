    #include <stdio.h>
    
    float avreage(int a, int b, int c);


    float avreage(int a, int b, int c){
        return (a+b+c)/3.0;
    }

    int main(){
        int a, b, c;
        printf("Enter A Three number: ");
        scanf("%d%d%d", &a, &b, &c);
        printf("The Average of %d, %d and %d is %.2f. \n",a, b, c, avreage(a,b,c));
        return 0;
    }