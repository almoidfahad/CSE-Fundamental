#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

//Make Multiplication Table Unlimited
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=10; j++){
            printf("%d x %3d = %4d\n",i, j , i*j);
        }
        printf("\n\n");
    }


/*
    //Specific 1 Make Multiplication Table

    for(int i = 1; i<=n; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    printf("\n");
*/

/*
    //Manually Make Multiplication Table

    printf("%2d x 1 = %3d\n", n,n*1);
    printf("%2d x 2 = %3d\n", n,n*2);
    printf("%2d x 3 = %3d\n", n,n*3);
    printf("%2d x 4 = %3d\n", n,n*4);
    printf("%2d x 5 = %3d\n", n,n*5);
    printf("%2d x 6 = %3d\n", n,n*6);
    printf("%2d x 7 = %3d\n", n,n*7);
    printf("%2d x 8 = %3d\n", n,n*8);
    printf("%2d x 9 = %3d\n", n,n*9);
    printf("%2d x 10 = %3d\n", n,n*10);
*/
}