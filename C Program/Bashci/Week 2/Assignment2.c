#include <stdio.h>

int main(){

//========================================================


    //Assignment2 Problem 2
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &a[i]);
  
    }

    int sum0=0;
    int sum1=0;
    for(int i= 0; i<n; i++){
       if(a[i]==0){
        sum0++;
     }

    }

    for(int i= 0; i<n; i++){
       if(a[i]==1){
        sum1++;
     }

    }
    printf("%d %d ", sum0, sum1);



    

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