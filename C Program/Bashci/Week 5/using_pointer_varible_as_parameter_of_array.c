#include<stdio.h>
#include<string.h>

void fun(char *x, char *y){
    // printf("%s\n", x);

    x[0] = 'b';
    
    x = strcpy(x, y);

}

int main(){

    char a[10] = "air";
    char b[10] = "apple";

    fun(a, b);

    printf("%s\n", a);
}

/*
void fun(int *x, int n){

    for(int i = 0; i < 5; i++){ 
        // x[i] *= 2;
        printf("%d ", *(x + i));
    }
    // x[0] = -100;

    // x[1] = -3;


}


int main(){

    int a[5] = {1, 3, 4, 6, 3};

    fun(a, 5);

    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
   
    return 0;
}

//Output:

// 1 3 4 6 3 
// 1 3 4 6 3 
*/