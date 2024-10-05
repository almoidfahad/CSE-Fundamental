#include <stdio.h>
int main(){
    //Problem 1
    int X,Y,Z;
    scanf("%d %d %d", &X, &Y, &Z);

    if((0<=X) && Y && (1000>=Z)){
        int total = (X+Y+Z);
        printf("%d",total);
    }
    else{
        printf("Invalid Number");
    }

    // Problem 2
    // long long A,B;
    // scanf("%lld %lld", &A , &B);

    // if(-10^9<=A &&  10^9>=B){
    //    long long int total= A*B;
    //    printf("%lld", total);
    // }
    // else {
    //     printf("Invalid Number");
    // }

    //Problem 3
    // int M;
    // scanf("%d", &M);

    // if((1<=M)&&(5000>=M)){
       
    //    if(M<100){
    //         printf("Nothing");
    //     }
    //     else if(M<250){
    //         printf("Three Fuchka");
    //     }
    //     else if(M<500){
    //         printf("Three Small Burger");
    //     }
    //     else if(M<1000){ 
    //         printf("One Large Pizza");
    //     }
    //     else{
    //         printf("Three Kacchi");
    //     }
    // }
    // else{ 
    //     printf("Invalid Number");
    // }


    //Problem 4
    // int M;
    // scanf("%d", &M);


    // if((1<=M) && (1000>=M)){
    //     if(M%3==0){
    //         printf("Yes");
    //     }
    //     else
    //     {
    //         printf("No");
    //     }
    // }

    //Problem 5
    // int n;
    // scanf("%d", &n);

    // if(1<=n && 500>=n){
    //     for(int i=1; i<=n; i++){
    //         if(i%3&&i%5){
    //             printf("%d No\n",i );
    //         }
    //         else{
    //             printf("%d Yes\n",i);
    //         }
            
    //     }
    // }
    // else{
    //     printf("Invalid Number");
    // }


}