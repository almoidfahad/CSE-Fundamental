#include<stdio.h>

// Global
int a, b;

void add(){
  
    printf("Inside function: %p %p \n", &a, &b);

}

int main(){
    // int a = 5, b= 6;

    // int sum = add(a,b); 

    printf("%p %p\n", &a, &b);

    add();

    printf("%d %d\n", a ,b);

}