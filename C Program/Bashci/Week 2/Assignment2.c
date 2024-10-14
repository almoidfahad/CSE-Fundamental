#include <stdio.h>
#include <limits.h>

int main(){


//Assignment2 Problem 5
    // int n;
    // scanf("%d", &n);

    // int a[n];

    // for(int i=0 ; i<n;i++){
    //     scanf("%d", & a[i]);
    // }

    // int max = INT_MIN;


    // for(int i=0; i<n; i++){
    //     if(a[i] > max){
    //         max = a[i];
    //     } 
    // }

    // for(int i= 0; i<n; i++){
    //     int deference = max - a[i];
    //     printf("%d ", deference);
    // }


//==========================================================
    //Assignment2 Problem 4

    // int n;
    // scanf("%d", &n);

    // for(int row = 1; row<=n; row++){
    //     for(int col = 1; col<=row; col++){
    //         printf("%d",col);
    //     }
    //     printf("\n");
    // }
    // for(int row = n-1; row>=1; row--){
    //     for(int col = 1; col <= n-row; col++){
    //         printf(" ");
    //     }
    //     for(int col = 1; col <= row; col++){
    //         printf("%d",col);
    //     }

    //     printf("\n");
    // }



//=====================================================

    //Assignment2 Problem 3
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int x;
    scanf("%d", &x);

    
    if(x >= 1 && x <=n){
        x--;
        if(a[x] == 0){
            a[x]=1;
        }
        else{
            a[x]=0;
        }
    }
    

    for(int i = 0; i<n; i++){

        printf("%d ", a[i]);
    }







//========================================================


    //Assignment2 Problem 2
    // int n;
    // scanf("%d", &n);

    // int a[n];
    // for(int i= 0; i<n; i++){
    //     scanf("%d", &a[i]);
  
    // }

    // int sum0=0;
    // int sum1=0;
    // for(int i= 0; i<n; i++){
    //    if(a[i]==0){
    //     sum0++;
    //  }

    // }

    // for(int i= 0; i<n; i++){
    //    if(a[i]==1){
    //     sum1++;
    //  }

    // }
    // printf("%d %d ", sum0, sum1);



    

//==============================================================================





    //Assignment2 Problem 1

    // char c;
    // scanf("%c", &c);

    // if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    //     printf("Vowel");
    // }
    // else{
    //     printf("Consonant");
    // }





}