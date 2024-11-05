#include<stdio.h>

int add(int a, int b){

    printf("Function called\n");

    int sum = a + b;
    
    return sum;
}

int main(){
    
    printf("Bfor\n");
    // int result = add(10, 20);

    // printf("%d\n", result);
    printf("%d\n",add(20,20));
    printf("%d\n",add(39, 34));
    printf("After\n");
}
  