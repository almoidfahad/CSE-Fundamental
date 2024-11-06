#include<stdio.h>

void aplpaCheck(char c){
    
    if('a'<= c &&  c<='z'){
        printf("Lower\n");
    }
    else{
        printf("Upper\n");
    }
}

int main(){
    aplpaCheck('a');
    aplpaCheck('A');
    aplpaCheck('M');
}