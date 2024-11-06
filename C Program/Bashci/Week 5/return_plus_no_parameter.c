#include<stdio.h>


int add(){
    int a,b;

    scanf("%d %d", &a , &b);

    printf("Function Called\n");

    int sum = a+b;

    return;

}

double getPi(){
    return 3.14159;
}

int main(){

    printf("Before\n");
    
    // a= 10, b = 30;
    
    printf("%d\n", add());
    
    printf("%d\n", add());
    
    printf("After\n");

    printf("PI resutl is: %lf\n", getPi());
}