#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    if(n%2==0){
        //Even
        printf("Even Number\n");
        
    }
    else{
        //Odd
        printf("Odd Number\n");
    }
    //Positive or negative
    if (n<0){
        printf("Negative\n");
    }
    else if(n>0){
        printf("Positive\n");
    }
    else{
        printf("Invalid Number");
    }


    /*
        if(n%2==0){
        //Even
        printf("Even Number\n");

        //Positive or negative
        if (n<0){
            printf("Negative");
        }
        else{
            printf("Positive");
        }
    }
    else{
        //Odd
        printf("Odd Number\n");

        //Positive or negative
        if(n>0){
            printf("Negative");
        }
        else{
            printf("Negative");
        }
    }
    */

    
}