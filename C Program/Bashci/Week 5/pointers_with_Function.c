#include<stdio.h>



void swap(int *x, int *y){

    printf("Func: %d %d\n", x,y);

    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
    int a = 5, b = 6;

    swap(&a, &b);

    printf("Main: %d %d\n", &a, &b);

    printf("%d %d\n",a, b);
}