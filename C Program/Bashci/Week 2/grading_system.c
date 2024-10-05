#include <stdio.h>
int main(){
    int Mark;
    scanf("%d", &Mark);

    if(Mark>=80&& Mark<=100){
        printf("Your Great Point is A+\n");
    }
    else if(Mark>=70&&Mark<=79){
        printf("Your Great Point is A\n");
    }
    else if(Mark>=60&&Mark<=69){
        printf("Your Great Point is A-\n");
    }
    else if(Mark>=50&&Mark<=49){
        printf("Your Great Point is B\n");
    }
    else if(Mark>=40 && Mark<=39){
        printf("Your Great Point is C\n");
    }
    else if (Mark>=33 && Mark<=39){
        printf("Your Great Point is D\n");
    }
    else if(Mark>=0 && Mark<=32){
        printf("Your Great Point is F\n");
    }
    else{
        printf("Invalid Number");
    }
}