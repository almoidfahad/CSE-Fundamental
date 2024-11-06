#include<stdio.h>


void add(){

    int a,b;
    
    scanf("%d %d", &a , &b);

    printf("Function called\n ");

    int sum = a + b;
    
    printf("%d\n", sum);
}

void greetings(){
    printf("Good Morning\n");
}

int main(){
    
    greetings();
    
    add();

    return 0;
}


/*
int add(){
    
    int a,b;
    scanf("%d %d", &a , &b);

    int sum = a + b;

    printf("%d\n", sum);

    return sum;

}

void mul(int x, int y){
    printf("%d", x * y);
}

int main(){
    mul(add(),10);
}
*/