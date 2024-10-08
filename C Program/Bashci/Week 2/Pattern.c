#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int row=1; row <= n ;){
        for(int col = 1; col <= row; col++){
            printf("%d ", col);
        }
        printf("\n");
        row++;
    }

    printf("\n");

    for(int row=1; row <=n ;){
        for(int col = row; col>=1; col--){
            printf("%d ", col);
        }
        printf("\n");
        row++;
    }

    printf("\n");
 
    for(int row=1; row <= n ;){
        for(int col = 1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
        row++;
    }
}