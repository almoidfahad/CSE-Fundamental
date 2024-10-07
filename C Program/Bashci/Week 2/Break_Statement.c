#include<stdio.h>
int main(){

    // for(int i = 100; i<=300 ; i++){
    //     printf("Checking %d\n", i);
    //     if(i%2==0 && i%3==0 && i%5==0){
    //         printf("%d This is the Divisor ",i);
    //         break;
    //     }
    // }


    for(int i = 10; i<=50; i++){
        printf("%d Line\n",i);
        if(i==25){
        printf(" stop");
        break;
        }
    }


    return 0;
}