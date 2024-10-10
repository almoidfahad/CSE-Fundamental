#include <stdio.h>
int main(){
    double a[5];

    // Access single value in Array 

    // for(int i = 0; i<5; i++){
    //     scanf("%d ", &a[i ]);
    // }
    // printf("%d", a[1]);


    //Access multiple value in Array
    for(int i = 0; i<5; i++){
        scanf("%lf", &a[i]);
    }
    
//    for (int i= 0; i<5;i++){
        printf("%lf ", a[3]);
//    } 
  
}