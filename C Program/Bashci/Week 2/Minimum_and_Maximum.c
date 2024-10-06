#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d", &A , &B, &C);

    //Minimum Number
    if(A<=B && A<=C){
        printf("%d", A);
    }
    else if(B<=A && B <= C){
        printf("%d", B);
    }
    else if(C<=A && C<=B){
        printf("%d",C);
    }
    else{
        printf("Invalid Number");
    }
    //Mid Space
    printf(" ");

    //Maximum Number
    if(A>=B && A>=C){
        printf("%d", A);
    }
    else if(B>=A && B>=C){
        printf("%d", B);
    }
    else if(C>=A && C>=B){
        printf("%d", C);
    }
    else{
        printf("Invalid Number");
    }




/*
        //Approach 1

    //Minimum Number
    if(A<=B){
        if(A<=C){
            printf("%d", A);
        }
        else{
            printf("%d",C);
        }
    }
    else{
        if(B<=C){
            printf("%d",B);
        }
        else{
            printf("%d",C);
        }
    }
    //Mid space 
    printf(" ");

    //Maximum Number
    if(B>=A){
        if(B>=C){
            printf("%d", B);
        }
        else{
            printf("%d", C);
        }
    }
    else{
        if(C>=A){
            printf("%d",C);
        }
        else{
            printf("%d",A);
        }
    }

*/

    


}