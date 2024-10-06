#include<stdio.h>
int main(){
    char X;
    scanf("%c", &X);

    //This section is Digit
    if(X>='0'&& X<='9'){
        printf("IS DIGIT");
    }

    //This Section is Alphabet
    else{
        printf("ALPHA\n");
        //This Section is Capital Letter
        if(X>='A' && X<='Z'){
            printf("IS CAPITAL");
        }
        //This Section is Small Letter
        else{
            printf("IS SMALL");
        }
    }
}