#include<stdio.h>

void func(int x, int n){
    if(x > n){
        return;
    }

    printf("%d\n", x);
    
    printf("Before function call, current X = %d\n", x);

    func(x + 1, n);

    printf("After function call, Current X = %d\n", x);
}


int main(){

    printf("Befor function call in main\n");

    func(1, 6);

    printf("After function call in main\n");

}