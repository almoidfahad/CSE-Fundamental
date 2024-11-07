#include<stdio.h>
#include<string.h>
#include<ctype.h>

void makeFirstCahrUpper(char x[]){
    
    printf("Third Function: Make First cahrecter upper case\n");

    x[0] = toupper(x[0]);

    printf("%s\n",x);
}

int length(char x[]){

    int  n= strlen(x);
    
    printf("Second Function:Find length charcter strig\n");

    printf("%d\n", n);


}

int fun(int x[], int n){

    int sum = 0;

    printf("First Function:Sum All index value\n");
    for (int i = 0; i < n; i++){

    // printf("%d ", x[i]);

    sum = sum + x[i];
        
    }

    return sum;
}

int main(){
    int a[10] = {1, 8, 4, 3, 2, 4, 1, 5, 3, 5};
    char c[20] = "programming";

    // ( a ) is array name and ( 10 ) is array of length
    int res = fun(a, 10);

    printf("%d\n",res);

    length(c);
    makeFirstCahrUpper(c);
}

/*
// Output:

First Function:Sum All index value
36
Second Function:Find length charcter strig
11
Third Function: Make First cahrecter upper case
Programming

*/